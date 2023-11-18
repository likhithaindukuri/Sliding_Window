class Solution{
public:
	int search(string pat, string txt) {
	    vector<int> pf(256,0);
	    vector<int> sf(256,0);
	    int np=pat.size(),ns=txt.size();
	    int ps=0,ss=0;
	    int val;
	    for(int i=0;i<np;i++)
	    {
	        pf[pat[i]]++;
	        sf[txt[i]]++;
	    }
	    int c=0;
	    if(pf==sf)
	    {
	        c++;
	    }
	    int i=0,j=np;
	    while(j<ns)
	    {
	        sf[txt[j]]++;
	        sf[txt[i]]--;
	        if(pf==sf){
	        
	            c++;
	        }
	       i++;
	       j++;
	            
	        
	    }
	    return c;
	}

};