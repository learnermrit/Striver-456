	int print2largest(int arr[], int n) {
	    // code here // judt
	    int max1=INT_MIN;
	    int max2=INT_MIN+1;
	    for(int i=0;i<n;i++){
	        if(arr[i]>max2){
	            if(arr[i]>max1){
	              max2=max1;
	              max1=arr[i];
	            }
	            else if (arr[i]!=max1){
	                max2=arr[i];
	            }
	            
	            
	        }
	    }
	    
	    if(max2==INT_MIN+1||max2==INT_MIN){
	        return -1;
	    }
	    else
	    return max2;
	}
