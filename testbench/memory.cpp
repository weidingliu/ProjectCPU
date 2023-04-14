#include <Memory.h>
#include <debug.h>

void Memory :: init_mem(char *file_path){
    // FILE *fp;
    // //printf("%x\n",*(uint32_t *)(mem+0x24c));
    // if((fp=fopen(file_path,"rb"))==NULL){
    //     printf("\033[40;31mload mem fail!\033[0m\n");
    //     exit(-1);
    // }
    // fseek(fp,0,SEEK_END);
    // int size=ftell(fp);
    // mem_size=size;
    // printf("\033[40;34mThe image is %s, size = %d\033[0m\n", file_path, size);
    // if(size>PMEM_SIZE){
    //     printf("fail load mem file size:%d\n",size);
    //     exit(-1);
    // } 
    // //printf("----------%d\n",size);
    // //uint8_t *temp=mem;
    // fseek(fp, 0, SEEK_SET);
    // size_t o=fread(mem,size,1,fp);
    // if(o==0){
    //     printf("fail load mem file \n");
    //     exit(-1);
    // }
    
    // printf("\033[40;34mload mem finish!\033[0m\n");
    // fclose(fp);
    uint32_t inst=0x00100011;
    memcpy(mem,&inst,sizeof(uint32_t));
}

void Memory :: pmem_read(uint32_t addr, uint32_t *rdata){
    // 总是读取地址为`raddr & ~0x3u`的4字节返回给`rdata`
    uint32_t temp;
    if((((addr & ~0x3u)-RESET_VECTOR)>PMEM_SIZE) ) {
        panic("memory read out of boundary");
    }
    memcpy(&temp,(mem+(addr& ~0x3u)-RESET_VECTOR),sizeof(uint32_t));
   *rdata=temp;

}

void Memory :: pmem_write(uint32_t addr, uint32_t wdata, char wmask){
    // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  uint32_t *p=&wdata;
  uint8_t *temp=(uint8_t *)p;
  int i=0;
  unsigned char loop= (unsigned char) wmask;
  uint32_t offset=(addr& ~0x3u)-RESET_VECTOR;
  if(((offset+4)>PMEM_SIZE) ){ panic("memory write out for boundary at %x",addr & ~0x3u);}
  while(loop!=0 && i<4){
      if(loop & 1){
          memcpy(mem+offset+i,temp,sizeof(uint8_t));
      }
      //printf("%d  %x  \n",i,loop);
      temp++;
      i++;
      loop=loop>>1;
  }
}

Memory ::Memory(){

}
Memory::~Memory(){
    
}
