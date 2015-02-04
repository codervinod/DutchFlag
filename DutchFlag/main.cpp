//
//  main.cpp
//  DutchFlag
//
//  Created by Vinod Gupta on 2/4/15.
//  Copyright (c) 2015 vinodg. All rights reserved.
//

#include <iostream>

void SortDutchFlag(int ar[],int len)
{
    int low=0;
    int mid=0;
    int high=len-1;
    while(mid<=high)
    {
        switch(ar[mid])
        {
            case 0:
            {
                int tmp=ar[low];
                ar[low] = ar[mid];
                ar[mid] = tmp;
                ++low;
                ++mid;
            }
                break;
            case 1:
            {
                ++mid;
            }
                break;
            case 2:
            {
                int tmp=ar[high];
                ar[high] = ar[mid];
                ar[mid] = tmp;
                --high;
            }
                break;
        }
    }
}

void printArray(int ar[],int len)
{
    for(int i=0;i<len;++i)
        std::cout<<ar[i]<<"\t";
    
    std::cout<<std::endl;
}

int main(int argc, const char * argv[]) {
    int ar[] = {1,0,2,0,1,2,2,2,1,2,0,1,0,0,1,1,2};
    int len = sizeof ar/sizeof(int);
    printArray(ar,len);
    SortDutchFlag(ar,len);
    printArray(ar,len);
    return 0;
}
