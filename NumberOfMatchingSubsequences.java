package Baekjoon;

public class NumberOfMatchingSubsequences {
	private String s;
	
	public int numMatchingSubseq(String s, String[] words) {
        int len = s.length();
        int num=words.length;
        int[] arr = new int[num];
        
        int ans=0;
        
        for(int i=0;i<len;i++) {
        	for(int j=0;j<num;j++) {
        		if(arr[j]==words[j].length()) {
        			continue;
        		}
        		if(s.charAt(i)==words[j].charAt(arr[j])) {
        			arr[j]++;
        		}
        	}
        }
        
        for(int i=0;i<num;i++) {
        	if(arr[i]==words[i].length()) {
        		ans++;
        	}
        }
        
        return ans;
    }
}
