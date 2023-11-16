#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x

using namespace std;


 
int main() {
   read(n);
   while(n>0) {
      int graph[n][n];
      bool weak[n];
      for(int i = 0; i < n; i++) {
         weak[i] = true;
      }

      for(int i = 0; i < n; i++) {
         for(int j = 0; j < n; j++) {
            cin >> graph[i][j];
         }
      }

      for(int i = 0; i < n; i++) {
         for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
               if(graph[i][j] && graph[i][k] && graph[j][k]) {
                  weak[i] = false;
               }
            }
         }
      }
      for(int i = 0; i < n; i++) {
         if(weak[i] == true) {
            cout << i << " ";
         }
      }
      cout << endl;

      cin >> n;
   }
   return 0;
}

