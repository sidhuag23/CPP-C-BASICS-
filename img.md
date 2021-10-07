#IMAGE CHECKER (img file)
###IN MOST CASES WE CAN DETERMINE A JPEG FILE BY ONLY DETERMINING 3 SPECFIC BITS RESERVED FOR JPEG FILES
###IN MEMORY A JPEG FILE IS DETERMINED BY
```C
  0xff 0xdb 0xff //first 3 bits in memory block that represents an image

```

###WE USES COMMAND LINE ARGUMENTS IN ORDER TO CHECK USER INPUTS
###USER CAN INPUT THERE FILE NAME VIA COMMAND LINE ARGUMENT

###check cmd argument usage
```C
if(argc!=2){
  printf("sorry  please enter the right arguments");
  return 1;
}
```
###opening the file
```C
FILE *testjpeg=fopen(argv[1],"r");
if(!testjpeg){
  return 1;
}
```
##COMPILE
```bash
  gcc test.c
  ./a.out typefilename.extension
```
