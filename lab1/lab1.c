//Aurhor: Ruofei Xu
//cpts360 lab1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <libgen.h>

typedef struct {
    char node_name[64];
    char node_type;
    struct NODE *childPtr;
    struct NODE *siblingPtr;
    struct NODE *parentPtr;
    }NODE;

NODE *root, *cwd;
char line[128];
char command[16], path[64];
char dir[64], base[64];

main()
{
    initialize();
    while(1){
        printf("input a command : ");
        //read a line containting command [pathname]; // [ ] means optional
        //Find the command string and call the corresponding function;
        int ID =  findCommand(command);
        switch(ID){
            case 0 : menu(); break;
            case 1 : mkdir(path); break;
            case 2 : rmdir(path); break;
    /*        case 3 : cd();  break;
            case 4 : ls(); break;
            case 5 : pwd(); break;
            case 6 : creat(); break;
            case 7 : rm();  break;
            case 8 : save(); break;
            case 9 : reload(); break;
            case 10 : quit(); break;
      */  }
    }
}

int initialize()
{
    NODE root_node = null;
    root_node = 
}

int menu()
{

}

int mkdir(char *pathname)
{
    char pname[128], temp[128];
    char dname[64], bname[32];

    gets(pathname); 

    strcpy(temp, pathname);
    strcpy(dname, dirname(temp));

    strcpy(temp, pathname);
    strcpy(bname, basename(temp));
   
     
    return -1;    
}

int rmdir(char *pathname)
{
    return -1;
}
