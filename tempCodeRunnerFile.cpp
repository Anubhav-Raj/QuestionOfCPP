f(arr[mid]== key)
              {
                  return mid;
              } else if(arr[mid] > key)
              {
                  End=mid-1;
              } else{
                  start=mid+1;
              }