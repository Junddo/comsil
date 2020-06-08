#pragma once

#include "ofMain.h"
#include "ofxWinMenu.h" // Menu addon

class ofApp : public ofBaseApp {

	public:

		void setup();
		void update();
		void draw();

		void keyPressed(int key); // Traps escape key if exit disabled
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		bool readFile();
		void freeMemory();
		bool DFS();
		void dfsdraw();
		int HEIGHT;//�̷��� ����
		int WIDTH;//�̷��� �ʺ�
		char** input;//�ؽ�Ʈ ������ ��� ������ ��� ������ �迭�̴�.
		int** visited;//�湮���θ� ������ ����
		int maze_col;//�̷�ĭ�� ���� �ε����� ����Ų��.
		int maze_row;//�̷�ĭ�� ���� �ε����� ����Ų��.
		int k;
		int isOpen; //������ ���ȴ����� �Ǵ��ϴ� ����. 0�̸� �ȿ��Ȱ� 1�̸� ���ȴ�.
		int isDFS;//DFS�Լ��� ������״��� �Ǵ��ϴ� ����. 0�̸� ������߰� 1�̸� �����ߴ�.
		int isBFS;//BFS�Լ��� ������״��� �Ǵ��ϴ� ����. 0�̸� ������߰� 1�̸� �����ߴ�.
		// Menu
		ofxWinMenu * menu; // Menu object
		void appMenuFunction(string title, bool bChecked); // Menu return function

		// Used by example app
		ofTrueTypeFont myFont;
        ofImage myImage;
		float windowWidth, windowHeight;
		HWND hWnd; // Application window
		HWND hWndForeground; // current foreground window

		// Example menu variables
		bool bShowInfo;
		bool bFullscreen;
		bool bTopmost;
		bool isdfs;
		// Example functions
 		void doFullScreen(bool bFull);
		void doTopmost(bool bTop);

		//mine
		

		typedef struct Room {
			int down;
			int right;
			int vertex;
		}Room;

		Room** maze;
		int N, M;

		int margin = 10;
		int w_room = 40;
		int h_room = 40;

		typedef struct G_queue* G_queuePointer;
		typedef struct {
			int vertex;
			G_queuePointer link;
		} G_queue;
		G_queuePointer front, rear;
};