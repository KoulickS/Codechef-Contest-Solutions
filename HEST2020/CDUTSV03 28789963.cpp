# include<bits/stdc++.h>

using namespace std;

typedef long long 					ll;
typedef pair<int,int>				ii;
typedef pair<ll,ll>					LL;
typedef vector<ii>					vii;
typedef vector<LL>					vLL;

# define FAST						ios_base::sync_with_stdio(false);cin.tie(0);

# define mp(x,y)					make_pair(x,y)
# define F							first
# define S							second
# define sii(p)						sd(p.F),sd(p.S)
# define sLL(p)						sll(p.F),sll(p.S)
# define stl(x)						x.begin(),x.end()
# define stlr(x)					x.rbegin(),x.rend()

# define rep(i,a,b)					for(auto i = a; i < b; ++i)
# define rrep(i,a,b) 				for(auto i = a; i > b ;--i)
# define repstr(str,i) 				for(auto i = 0 ; str[i] ;++i)
# define repstl(stl,l) 				for(auto l : stl)

# define gets(str)					scanf("%s",str)
# define gc()						getchar()
# define pc(c)						putchar(c)
# define nline						pc('\n')
# define pd(x)						printf("%d",x)
# define pll(x)						printf("%lld",x)
void sd(int &n){

	n = 0;
	int sign = +1;
	char ch;

	while(isspace(ch = gc()));

	if(isdigit(ch))
		n = ch - '0';
	else
		sign = ch == '+' ? +1 : -1;

	while(isdigit(ch = gc()))
		n = (n << 3) + (n << 1) + ch - '0';

	n *= sign;
}

# define pMAT(mat,r,c)	rep(i,0,r){\
						    rep(j,0,c)\
								pd(mat[i][j]),pc(' ');\
								nline;\
						}

# define TC				int tc;sd(tc);while(tc--)

# define NUM 10000
int TRANS[NUM+1][4];
void fillTrans(void){

	rep(i,0,NUM){

		int ptr = 0;
		char digit[4];
		int num = i;

		rrep(i,3,-1){
			digit[3-i] = num;
			num /= 10;
		}
		num = i;

		rep(i,0,4){
			char ch = digit[i];
			(digit[i] += 1) %= 10;

		int n = digit[3];
			rrep(i,2,-1)
				 n = (n*10)+digit[i];

			TRANS[num][ptr++] = n;
			digit[i] = ch;
		}
	}
}

void printTrans(int num){
	cout << num << endl;
	cout<<TRANS[num][0]<<" "<<TRANS[num][1]<<" "<<TRANS[num][2]<<" "<<TRANS[num][3]<<endl;
}

# define MOVES 100

int  VAL[MOVES+1][NUM];

int main(void){

	fillTrans();

	TC{

		int num,moves;

		sd(num);
		sd(moves);

		// 0 => ADA lose

		// initialize
		rep(i,0,moves+1)
			rep(j,0,NUM)
				VAL[i][j] = j;


		// for first move
		// ADA
		if(moves&1)
			rep(i,0,NUM){
				int tmp = INT_MIN;
				rep(j,0,4)
					tmp = max(tmp,VAL[0][TRANS[i][j]]);
				VAL[1][i] = tmp;
			}
		// VINIT
		else
			rep(i,0,NUM){
				int tmp = INT_MAX;
				rep(j,0,4)
					tmp = min(tmp,VAL[0][TRANS[i][j]]);
				VAL[1][i] = tmp;
			}


		bool ADA = moves&1;
		ADA = !ADA;

		rep(i,2,moves+1){
			rep(j,0,NUM){
			int tmp = ADA ? INT_MIN : INT_MAX;
				rep(k,0,4){
						if(ADA)
							tmp = max(tmp,VAL[i-1][TRANS[j][k]]);
						else
							tmp = min(tmp,VAL[i-1][TRANS[j][k]]);
				}
				VAL[i][j] = tmp ;
			}
			ADA = !ADA;
		}
		puts(VAL[moves][num]>num?"Berlin":"Professor");
		nline;
	}

	return 0;
}
