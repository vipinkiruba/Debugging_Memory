# Debugging_Memory

ref: https://learn.microsoft.com/en-us/visualstudio/profiling/memory-usage?view=vs-2022
#how to find memory leak
1. using diagnostic tool
2. we can monitor by taking snapshots of a particular point and compare those memory 
![image](https://user-images.githubusercontent.com/67626515/202173406-139de7aa-2ac7-4afb-96fd-2acac3075cd9.png)
3. we can also check the instances of that object by clicking that memory arrow
![image](https://user-images.githubusercontent.com/67626515/202175307-377b0123-1f79-46b4-a6da-40f186763aad.png)
4. Further, in debug mode, the C++ runtime will store "this memory has been deleted" in all memory that goes through delete. This is to help identify "use after free". So, if your application is running in debug mode, then don't expect any freed memory to be released EVER. It will get reused tho'
 
