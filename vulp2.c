#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.sh>
#include <sys/stat.sh>
#include <fcntl.h>
int main(){
    char * fn = "/tmp/XYZ";
    char buffer[60];
    FILE *fp;
    struct stat s1, s2, s3;
    int fd1, fd2, fd2;
    /* get user input */
    scanf("%50s",buffer);
    if(access("/tmp/XYZ", O_RDWR)){
        fprintf(stderr, "Permission Denied\n");
        return -1;
    }else{
        fd1 = open("/tmp/XYZ", O_RDWR);
    }
    if(access("/tmp/XYZ", O_RDWR)){
        fprintf(stderr, "Permission Denied\n");
        return -1;
    }else{
        fd2 = open("/tmp/XYZ", O_RDWR);
    }
    if(access("/tmp/XYZ", O_RDWR)){
        fprintf(stderr, "Permission Denied\n");
        return -1;
    }else{
        fd3 = open("/tmp/XYZ", O_RDWR);
    }
    fstat(fd1,&s1);
    fstat(fd2,&s2);
    fstat(fd3,&s3);
    if((s1.st_ino==s2.st_ino)&&(s2.st_ino==s3.st_ino)){
        write(fd1,"\n",2);
        write(fd1,buffer,strlen(buffer));
        close(fd1);
        close(fd2);
        close(fd3);
    }else{
        fprintf(stderr,"Permission Denied");
        return -1;
    }

}