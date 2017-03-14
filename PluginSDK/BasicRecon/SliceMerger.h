#pragma once

#ifndef SliceMerger_h__20161221
#define SliceMerger_h__20161221

#include "Interface/Implement/ProcessorImpl.h"
namespace Yap
{
	class SliceMerger:
		public ProcessorImpl
	{
		IMPLEMENT_SHARED(SliceMerger)
	public:
		SliceMerger(void);
		SliceMerger(const SliceMerger& rhs);

		virtual bool Input(const wchar_t * port, IData * data) override;

	protected:
		~SliceMerger();

		SmartPtr<IData> _data;
	};
}
#endif // SliceMerger_h__



