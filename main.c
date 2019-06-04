#include <stdio.h>
#include <inkview.h>

char * data;
char * filename;

void dialog_cb(int button) {
    printf("button=%d\n", button);
  _exit(button);
  CloseApp();
};

int h_main(int type, int par1, int par2) {

if (type == EVT_SHOW) {
        BookReady(filename); // to auto open last book
        SetPanelType(0);
        PanelHeight(); // Init panel
        Dialog3(0, "Example", data, "Yes", NULL,NULL, &dialog_cb);
    }
    return 0;
};

int main(int argc, char ** argv)
{
    if (argc<=1) return 1;
    filename = argv[1];
    FILE * f = fopen(filename,"r");
    fseek(f, 0, SEEK_END);
    int size = ftell(f);
    fseek(f,0,SEEK_SET);
    data = malloc(size);
    fread(data, 1, size, f );
    InkViewMain(h_main);

    return 0;
}
