#ifndef _RACKET_H
#define _RACKET_H

#include "GameTypes.h"
#include <vector>
#include "TBullet.h"

namespace Game
{
	class CRacket
	{
	private:
		float x, y, w, h;
		uint r, g, b;
		std::vector<TBullet> _vBullets;
		bool _bActive, _bPause, _bRacketLongBonus, _bRacketBoomBonus, _bLeftState;
	public:
		CRacket();
		~CRacket();
		void SetSize(float _w, float _h);
		void SetCoord(float _x, float _y);
		void Draw(void);
		void SetState(bool State);
		void SetColor(uint _r, uint _g, uint _b);
		void SetPause(bool State);
		void SetLongBonus(bool State);
		void SetBoomBomus(bool State);
		void SetLeftState(bool State);
		bool GetState(void);
		unsigned int GetWidth(void);
	};
}

#endif