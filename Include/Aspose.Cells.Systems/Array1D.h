#ifndef _SYSTEM_Array1D_H_
#define _SYSTEM_Array1D_H_

#include <stdarg.h>
#include "Aspose.Cells.Systems/Array.h"
#include "Aspose.Cells.Systems/ArrayHelper.h"
#include "Aspose.Cells.Systems/Exception.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {

			template <class T >
			class Array1D : public Array
			{
			public:
				Array1D() : _p(NULL), _len(0)
				{
					Array::_len1D = 0;
					Array::_Rank = 1;
				}
				virtual ~Array1D()
				{
					if (_p != NULL) {
						delete[] _p;
					}
					_p = NULL;
					_len = 0;
					Array::_len1D = 0;
				}
				Array1D(T* t, int len)
				{
					Array::_Rank = 1;
					_p = NEW T[len];
					_len = len;
					Array::_len1D = len;
					ArrayHelper::Copy(t, _p, len);
				}
				Array1D(int len)//, ...)
				{
					Array::_Rank = 1;
					_p = NEW T[len];
					_len = len;
					Array::_len1D = len;
					ArrayHelper::Clear(_p, 0, len);
				}
				Array1D(int length, T val1) : Array1D(length)
				{
					_p[0] = val1;
				}
				Array1D(int length, T val1, T val2) : Array1D(length)
				{
					_p[0] = val1;
					_p[1] = val2;
				}
				Array1D(const Array1D& Array1D)
				{
					Array::_Rank = 1;
					_len = Array1D._len;
					Array::_len1D = Array1D._len1D;
					_p = NEW T[_len];
					ArrayHelper::Copy(Array1D._p, _p, _len);
				}

				inline int GetLength()
				{
					return _len;
				}
				inline T& At(int index)
				{
				    /*for Talos report,xinya.zhu@aspose.com*/
					if (index < 0 || index >= _len)
					{
						throw ArgumentOutOfRangeException("index", "ArgumentOutOfRange_Index");
					}			
					return _p[index];
				}
				inline T* ArrayPoint()
				{
					return _p;
				}
				inline void SetValue(T value, int32_t index)
				{
				    /*for Talos report,xinya.zhu@aspose.com*/
					if (index < 0 || index >= _len)
					{
						throw ArgumentOutOfRangeException("index", "ArgumentOutOfRange_Index");
					}				
					_p[index] = value;
				}
				inline T GetValue(int32_t index)
				{ 
				    /*for Talos report,xinya.zhu@aspose.com*/
					if (index < 0 || index >= _len)
					{
						throw ArgumentOutOfRangeException("index", "ArgumentOutOfRange_Index");
					}				
					return _p[index];
				}
				
				inline void SetValue_Array(T value, int32_t index)
				{
					//for Talos report,xinya.zhu@aspose.com
					if (index < 0 || index >= _len)
					{
						throw ArgumentOutOfRangeException("index", "ArgumentOutOfRange_Index");
					}
					_p[index] = value;
				}
				/*
				inline T GetValue_Array(int32_t index)
				{
					//for Talos report,xinya.zhu@aspose.com
					if (index < 0 || index >= _len)
					{
						throw ArgumentOutOfRangeException("index", "ArgumentOutOfRange_Index");
					}
					return _p[index];
				}
				*/
				virtual void CopyTo(intrusive_ptr<Array> array0, int32_t index, int32_t length)
				{
					intrusive_ptr<Array1D<T>> array1 = (Array1D<T>*)(array0.get());
					ArrayHelper::Copy(this, 0, array1.get(), index, length);
				}
				virtual void CopyTo(intrusive_ptr<Array> array0, int32_t index)
				{
					intrusive_ptr<Array1D<T>> array1 = (Array1D<T>*)(array0.get());
					ArrayHelper::Copy(this, 0, array1.get(), index, this->GetLength());
				}
				virtual int32_t GetLengthDim(int32_t dimension) {
					if (dimension == 0) {
						return _len;
					}
					throw Exception("dimension must be 0");
				}

				intrusive_ptr<Array1D<T>> Clone() {
					if (_len > 0) {
						Array1D<T>* array1 = NEW Array1D<T>(_len);
						ArrayHelper::Copy(this, 0, array1, 0, _len);
						return array1;
					}
					return NULL;
				}

			private:
				T*	_p;
				int	_len;

			};

			template <class T>
			class Array1D<T*> : public Array
			{
				typedef T* P;
			public:
				virtual ~Array1D()
				{
					if (_p != NULL) {
						for (int i = 0; i < _len; i++) {
							if (_p[i] != NULL) {
								if (_p[i]->release_ref() <= 0) {
									delete _p[i];
								}
							}
						}
						delete[] _p;
					}
					_p = NULL;
					_len = 0;
					Array::_len1D = 0;
				}
				Array1D(T** t, int len)
				{
					Array::_Rank = 1;
					_p = NEW T*[len];
					_len = len;
					memset(_p, 0, sizeof(T*) * _len);
					Array::_len1D = len;
					ArrayHelper::Copy(t, _p, len);
				}
				Array1D(int len)//, ...)
				{
					Array::_Rank = 1;
					_p = NEW T*[len];
					_len = len;
					memset(_p, 0, sizeof(T*) * _len);
					Array::_len1D = len;
				}
				Array1D(const Array1D& Array1D)
				{
					Array::_Rank = 1;
					_len = Array1D._len;
					Array::_len1D = Array1D._len1D;
					_p = NEW T*[_len];
					memset(_p, 0, sizeof(T*) * _len);
					ArrayHelper::Copy(Array1D._p, _p, _len);
				}
				inline int GetLength()
				{
					return _len;
				}
				inline T*   At(int index)
				{
				    /*for Talos report,xinya.zhu@aspose.com*/
					if (index < 0 || index >= _len)
					{
						throw ArgumentOutOfRangeException("index", "ArgumentOutOfRange_Index");
					}				
					return _p[index];
				}
				inline T* & AtAddr(int index)////
				{
					/*for Talos report,xinya.zhu@aspose.com*/
					if (index < 0 || index >= _len)
					{
						throw ArgumentOutOfRangeException("index", "ArgumentOutOfRange_Index");
					}
					return _p[index];
				}
				inline T** ArrayPoint()
				{
					return _p;
				}
				inline void SetValue(intrusive_ptr<T> value, int32_t index)
				{
				    /*for Talos report,xinya.zhu@aspose.com*/
					if (index < 0 || index >= _len)
					{
						throw ArgumentOutOfRangeException("index", "ArgumentOutOfRange_Index");
					}
					
					if (_p[index] != NULL) {
						if (_p[index]->release_ref() <= 0) {
							delete _p[index];
						}
					}
					_p[index] = value.get();
					if (value != NULL) {
						_p[index]->add_ref();
					}
				}

				inline intrusive_ptr<T> GetValue(int32_t index)
				{
					//for Talos report,xinya.zhu@aspose.com
					if (index < 0 || index >= _len)
					{
						throw ArgumentOutOfRangeException("index", "ArgumentOutOfRange_Index");
					}

					return _p[index];
				}
				
				inline void SetValue_Array(intrusive_ptr<T> value, int32_t index)
				{
					//for Talos report,xinya.zhu@aspose.com
					if (index < 0 || index >= _len)
					{
						throw ArgumentOutOfRangeException("index", "ArgumentOutOfRange_Index");
					}

					if (_p[index] != NULL) {
						if (_p[index]->release_ref() <= 0) {
							delete _p[index];
						}
					}
					_p[index] = value.get();
					if (value != NULL) {
						_p[index]->add_ref();
					}
				}
				/*
				inline intrusive_ptr<T> GetValue_Array(int32_t index)
				{
					//for Talos report,xinya.zhu@aspose.com
					if (index < 0 || index >= _len)
					{
						throw ArgumentOutOfRangeException("index", "ArgumentOutOfRange_Index");
					}

					return _p[index];
				}*/
				virtual void CopyTo(intrusive_ptr<Array> array0, int32_t index, int32_t length)
				{
					if (dynamic_pointer_cast <Array1D<Object* >> (array0) != NULL)
					{
						intrusive_ptr<Array1D<Object*>> array1 = (Array1D<Object*>*)(array0.get());
						ArrayHelper::CopyDiffPtr(_p, 0, array1->ArrayPoint(), index, length);
					}
					else
					{
						intrusive_ptr<Array1D<T*>> array1 = (Array1D<T*>*)(array0.get());
						ArrayHelper::Copy(_p, 0, array1->ArrayPoint(), index, length);
				    }
				}
				virtual void CopyTo(intrusive_ptr<Array> array0, int32_t index)
				{
					if (dynamic_pointer_cast <Array1D<Object* >> (array0) != NULL)
					{
						intrusive_ptr<Array1D<Object*>> array1 = (Array1D<Object*>*)(array0.get());
						ArrayHelper::CopyDiffPtr(_p, 0, array1->ArrayPoint(), index, this->GetLength());
					}
					else
					{ 
						intrusive_ptr<Array1D<T*>> array1 = (Array1D<T*>*)(array0.get());
						ArrayHelper::Copy(_p, 0, array1->ArrayPoint(), index, this->GetLength());
					}
				}
				virtual int32_t GetLengthDim(int32_t dimension) {
					if (dimension == 0) {
						return _len;
					}
					throw Exception("dimension must be 0");
				}

				intrusive_ptr<Array1D<T*>> Clone() {
					if (_len > 0) {
						intrusive_ptr<Array1D<T*>> array1 = NEW Array1D<T*>(_len);
						ArrayHelper::Copy(_p, 0, array1->ArrayPoint(), 0, _len);
						return array1;
					}
					return NULL;
				}

			private:
				T**	_p;
				int	_len;

			};

		}
	}
}	// namespace Systems

#endif	// _SYSTEM_Array1D_H_
