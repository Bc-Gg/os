# include"kernel/types.h"
# include"kernel/types.h"
# include"user/user.h"

int 
main(int argv, char * argc []){
    if (argc <= 1){
        fprintf(2, "usage : sleep <second>");
        exit(1);
    }
    sleep(atoi(argc[1]));
    exit(0);
}