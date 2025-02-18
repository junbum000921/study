import java.io.BufferedReader;

import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {
	static int d_ans=0;
	static int b_ans=0;
	static boolean[] visited;
	static boolean[][] graph;
	static int N;
	static int M;
	static int index;
	
	static StringBuilder sb=new StringBuilder();
	static Queue<Integer> q = new LinkedList<>();
	public static void bfs(int start) {
		q.add(start);
		visited[start] = true;
		
		while(!q.isEmpty()) {
			
			start = q.poll();
			System.out.print(start+" ");
			
			for(int i = 1 ; i <= N ; i++) {
				if(graph[start][i] && !visited[i]) {
					q.add(i);
					visited[i] = true;
				}
			}
		}
		
		
	}
	public static void dfs(int idx) {
		visited[idx]=true;
		System.out.print(idx+" ");
		for(int i=1; i<=N; i++) {
			if(!visited[i]&&graph[idx][i]) {
				dfs(i);
			}
		}
	}
	
	
	public static void main(String[] args) throws NumberFormatException, IOException {
		Scanner sc=new Scanner(System.in);
		StringBuilder sb=new StringBuilder();
		 N=sc.nextInt();
		 M=sc.nextInt();
		 int V=sc.nextInt();
		visited=new boolean[N+1];
		graph=new boolean[N+1][N+1];
		LinkedList<Integer>[] adjList = new LinkedList[N + 1];
		for (int i = 0; i <= N; i++) {
			adjList[i] = new LinkedList<Integer>();
		}
		for(int i=1; i<=N; i++) {
			visited[i]=false;
		}
		for(int i=1; i<=M; i++) {
			int a=sc.nextInt();
			int b=sc.nextInt();
			adjList[a].add(b);
			adjList[b].add(a);
			graph[a][b]=graph[b][a]=true;
		}
		dfs(V);

		System.out.println("");
		for(int i=1; i<=N; i++) {
			visited[i]=false;
		}
		bfs(V);

	}

}