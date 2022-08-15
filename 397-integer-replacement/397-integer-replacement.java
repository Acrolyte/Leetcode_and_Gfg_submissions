class Solution {
    HashMap<Integer,Integer> hm = new HashMap<>();
    public int integerReplacement(int n) {
       if(hm.containsKey(n))return hm.get(n);
        if(n==1) return 0;
        if(n==2) return 1;
       
        if(n % 2 == 0) { hm.put(n, 1+integerReplacement(n/2)); 
                     return hm.get(n);  }
        hm.put(n, Math.min(integerReplacement(n/2),integerReplacement(n/2+1))+2);
      return hm.get(n);
    }
}