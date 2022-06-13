#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Exception System.Linq.Error::NotSupported()
extern void Error_NotSupported_m51A0560ABF374B66CF6D1208DAF27C4CBAD9AABA (void);
// 0x00000006 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000008 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,TResult>)
// 0x0000000A System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x0000000B System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<TKey,TSource>> System.Linq.Enumerable::GroupBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Except(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ExceptIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ReverseIterator(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000019 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001A System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x0000001C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x0000001D TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001E TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001F TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000020 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000021 TSource System.Linq.Enumerable::LastOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000022 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000023 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000024 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000025 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000027 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000029 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000002A System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x0000002B System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
// 0x0000002C System.Int32 System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Max_mE02EED2C10C2F8F0B2DCE468C87EF3064E854A8D (void);
// 0x0000002D System.Int32 System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
// 0x0000002E System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002F TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000030 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000031 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000032 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000033 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000034 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000035 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000037 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000038 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000039 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000003B System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000003C System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003F System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000040 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000041 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000042 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000043 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000044 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000045 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000046 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000047 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000048 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000049 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000004B System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000004C System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000004D System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004F System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000050 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000051 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000052 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000053 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000054 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000055 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000056 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000057 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000058 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000059 System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::.ctor(System.Int32)
// 0x0000005A System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::System.IDisposable.Dispose()
// 0x0000005B System.Boolean System.Linq.Enumerable/<SelectIterator>d__5`2::MoveNext()
// 0x0000005C System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::<>m__Finally1()
// 0x0000005D TResult System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005E System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerator.Reset()
// 0x0000005F System.Object System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerator.get_Current()
// 0x00000060 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000061 System.Collections.IEnumerator System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000062 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000063 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000064 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000065 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000066 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000067 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000068 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000069 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000006A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000006B TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000006C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x0000006D System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x0000006E System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000006F System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000070 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000071 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000072 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000073 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000074 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000075 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000076 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000077 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000078 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000079 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::.ctor(System.Int32)
// 0x0000007A System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.IDisposable.Dispose()
// 0x0000007B System.Boolean System.Linq.Enumerable/<ExceptIterator>d__77`1::MoveNext()
// 0x0000007C System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::<>m__Finally1()
// 0x0000007D TSource System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000007E System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.Reset()
// 0x0000007F System.Object System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.get_Current()
// 0x00000080 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000081 System.Collections.IEnumerator System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000082 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::.ctor(System.Int32)
// 0x00000083 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::System.IDisposable.Dispose()
// 0x00000084 System.Boolean System.Linq.Enumerable/<ReverseIterator>d__79`1::MoveNext()
// 0x00000085 TSource System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000086 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerator.Reset()
// 0x00000087 System.Object System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerator.get_Current()
// 0x00000088 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000089 System.Collections.IEnumerator System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008A System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x0000008B System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x0000008C System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x0000008D System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x0000008E TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000008F System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x00000090 System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x00000091 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000092 System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000093 System.Func`2<TElement,TElement> System.Linq.IdentityFunction`1::get_Instance()
// 0x00000094 System.Void System.Linq.IdentityFunction`1/<>c::.cctor()
// 0x00000095 System.Void System.Linq.IdentityFunction`1/<>c::.ctor()
// 0x00000096 TElement System.Linq.IdentityFunction`1/<>c::<get_Instance>b__1_0(TElement)
// 0x00000097 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000098 System.Linq.Lookup`2<TKey,TElement> System.Linq.Lookup`2::Create(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000099 System.Void System.Linq.Lookup`2::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000009A System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.Lookup`2::GetEnumerator()
// 0x0000009B System.Collections.IEnumerator System.Linq.Lookup`2::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009C System.Int32 System.Linq.Lookup`2::InternalGetHashCode(TKey)
// 0x0000009D System.Linq.Lookup`2/Grouping<TKey,TElement> System.Linq.Lookup`2::GetGrouping(TKey,System.Boolean)
// 0x0000009E System.Void System.Linq.Lookup`2::Resize()
// 0x0000009F System.Void System.Linq.Lookup`2/Grouping::Add(TElement)
// 0x000000A0 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.Lookup`2/Grouping::GetEnumerator()
// 0x000000A1 System.Collections.IEnumerator System.Linq.Lookup`2/Grouping::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A2 System.Int32 System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.get_Count()
// 0x000000A3 System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.get_IsReadOnly()
// 0x000000A4 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Add(TElement)
// 0x000000A5 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Clear()
// 0x000000A6 System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Contains(TElement)
// 0x000000A7 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.CopyTo(TElement[],System.Int32)
// 0x000000A8 System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Remove(TElement)
// 0x000000A9 System.Int32 System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.IndexOf(TElement)
// 0x000000AA System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.Insert(System.Int32,TElement)
// 0x000000AB System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.RemoveAt(System.Int32)
// 0x000000AC TElement System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.get_Item(System.Int32)
// 0x000000AD System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.set_Item(System.Int32,TElement)
// 0x000000AE System.Void System.Linq.Lookup`2/Grouping::.ctor()
// 0x000000AF System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::.ctor(System.Int32)
// 0x000000B0 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.IDisposable.Dispose()
// 0x000000B1 System.Boolean System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::MoveNext()
// 0x000000B2 TElement System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000B3 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.IEnumerator.Reset()
// 0x000000B4 System.Object System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.IEnumerator.get_Current()
// 0x000000B5 System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::.ctor(System.Int32)
// 0x000000B6 System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::System.IDisposable.Dispose()
// 0x000000B7 System.Boolean System.Linq.Lookup`2/<GetEnumerator>d__12::MoveNext()
// 0x000000B8 System.Linq.IGrouping`2<TKey,TElement> System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.Generic.IEnumerator<System.Linq.IGrouping<TKey,TElement>>.get_Current()
// 0x000000B9 System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.IEnumerator.Reset()
// 0x000000BA System.Object System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.IEnumerator.get_Current()
// 0x000000BB System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x000000BC System.Boolean System.Linq.Set`1::Add(TElement)
// 0x000000BD System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x000000BE System.Void System.Linq.Set`1::Resize()
// 0x000000BF System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x000000C0 System.Void System.Linq.GroupedEnumerable`3::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x000000C1 System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.GroupedEnumerable`3::GetEnumerator()
// 0x000000C2 System.Collections.IEnumerator System.Linq.GroupedEnumerable`3::System.Collections.IEnumerable.GetEnumerator()
// 0x000000C3 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x000000C4 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000C5 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000C6 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000C7 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x000000C8 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x000000C9 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000CA System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000CB TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000CC System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000CD System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000CE System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000CF System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000D0 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000D1 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000D2 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000D3 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000D4 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000D5 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000D6 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000D7 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000D8 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000D9 TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000DA System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000DB System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000DC System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000DD System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000DE System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000DF System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x000000E0 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000E1 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000E2 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000E3 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000E4 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000E5 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000E6 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000E7 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000E8 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000E9 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000EA System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000EB System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000EC System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000ED System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000EE System.Void System.Collections.Generic.HashSet`1::ExceptWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000EF System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000F0 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000F1 System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x000000F2 System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x000000F3 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000F4 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000F5 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000F6 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000F7 System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x000000F8 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x000000F9 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000FA System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000FB System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000FC System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000FD T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000FE System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000FF System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[255] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	Error_NotSupported_m51A0560ABF374B66CF6D1208DAF27C4CBAD9AABA,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	Enumerable_Max_mE02EED2C10C2F8F0B2DCE468C87EF3064E854A8D,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[255] = 
{
	5473,
	5473,
	5672,
	5672,
	5672,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	5402,
	-1,
	5402,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[76] = 
{
	{ 0x02000004, { 110, 4 } },
	{ 0x02000005, { 114, 9 } },
	{ 0x02000006, { 125, 7 } },
	{ 0x02000007, { 134, 10 } },
	{ 0x02000008, { 146, 11 } },
	{ 0x02000009, { 160, 9 } },
	{ 0x0200000A, { 172, 12 } },
	{ 0x0200000B, { 187, 9 } },
	{ 0x0200000C, { 196, 1 } },
	{ 0x0200000D, { 197, 2 } },
	{ 0x0200000E, { 199, 12 } },
	{ 0x0200000F, { 211, 11 } },
	{ 0x02000010, { 222, 11 } },
	{ 0x02000011, { 233, 6 } },
	{ 0x02000012, { 239, 6 } },
	{ 0x02000013, { 245, 4 } },
	{ 0x02000014, { 249, 3 } },
	{ 0x02000017, { 252, 17 } },
	{ 0x02000018, { 273, 5 } },
	{ 0x02000019, { 278, 1 } },
	{ 0x0200001B, { 279, 8 } },
	{ 0x0200001D, { 287, 4 } },
	{ 0x0200001E, { 291, 3 } },
	{ 0x0200001F, { 296, 5 } },
	{ 0x02000020, { 301, 7 } },
	{ 0x02000021, { 308, 3 } },
	{ 0x02000022, { 311, 7 } },
	{ 0x02000023, { 318, 4 } },
	{ 0x02000024, { 322, 36 } },
	{ 0x02000026, { 358, 2 } },
	{ 0x06000006, { 0, 10 } },
	{ 0x06000007, { 10, 10 } },
	{ 0x06000008, { 20, 1 } },
	{ 0x06000009, { 21, 2 } },
	{ 0x0600000A, { 23, 5 } },
	{ 0x0600000B, { 28, 5 } },
	{ 0x0600000C, { 33, 1 } },
	{ 0x0600000D, { 34, 2 } },
	{ 0x0600000E, { 36, 2 } },
	{ 0x0600000F, { 38, 1 } },
	{ 0x06000010, { 39, 4 } },
	{ 0x06000011, { 43, 1 } },
	{ 0x06000012, { 44, 2 } },
	{ 0x06000013, { 46, 1 } },
	{ 0x06000014, { 47, 2 } },
	{ 0x06000015, { 49, 1 } },
	{ 0x06000016, { 50, 2 } },
	{ 0x06000017, { 52, 1 } },
	{ 0x06000018, { 53, 5 } },
	{ 0x06000019, { 58, 3 } },
	{ 0x0600001A, { 61, 2 } },
	{ 0x0600001B, { 63, 2 } },
	{ 0x0600001C, { 65, 2 } },
	{ 0x0600001D, { 67, 4 } },
	{ 0x0600001E, { 71, 4 } },
	{ 0x0600001F, { 75, 3 } },
	{ 0x06000020, { 78, 4 } },
	{ 0x06000021, { 82, 4 } },
	{ 0x06000022, { 86, 3 } },
	{ 0x06000023, { 89, 3 } },
	{ 0x06000024, { 92, 1 } },
	{ 0x06000025, { 93, 3 } },
	{ 0x06000026, { 96, 2 } },
	{ 0x06000027, { 98, 3 } },
	{ 0x06000028, { 101, 2 } },
	{ 0x06000029, { 103, 5 } },
	{ 0x0600002B, { 108, 1 } },
	{ 0x0600002D, { 109, 1 } },
	{ 0x0600003D, { 123, 2 } },
	{ 0x06000042, { 132, 2 } },
	{ 0x06000047, { 144, 2 } },
	{ 0x0600004D, { 157, 3 } },
	{ 0x06000052, { 169, 3 } },
	{ 0x06000057, { 184, 3 } },
	{ 0x06000098, { 269, 4 } },
	{ 0x060000C6, { 294, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[360] = 
{
	{ (Il2CppRGCTXDataType)2, 2720 },
	{ (Il2CppRGCTXDataType)3, 10972 },
	{ (Il2CppRGCTXDataType)2, 4407 },
	{ (Il2CppRGCTXDataType)2, 3885 },
	{ (Il2CppRGCTXDataType)3, 21912 },
	{ (Il2CppRGCTXDataType)2, 2865 },
	{ (Il2CppRGCTXDataType)2, 3892 },
	{ (Il2CppRGCTXDataType)3, 22031 },
	{ (Il2CppRGCTXDataType)2, 3887 },
	{ (Il2CppRGCTXDataType)3, 21950 },
	{ (Il2CppRGCTXDataType)2, 2721 },
	{ (Il2CppRGCTXDataType)3, 10973 },
	{ (Il2CppRGCTXDataType)2, 4436 },
	{ (Il2CppRGCTXDataType)2, 3894 },
	{ (Il2CppRGCTXDataType)3, 22069 },
	{ (Il2CppRGCTXDataType)2, 2888 },
	{ (Il2CppRGCTXDataType)2, 3902 },
	{ (Il2CppRGCTXDataType)3, 22540 },
	{ (Il2CppRGCTXDataType)2, 3898 },
	{ (Il2CppRGCTXDataType)3, 22284 },
	{ (Il2CppRGCTXDataType)3, 26215 },
	{ (Il2CppRGCTXDataType)2, 990 },
	{ (Il2CppRGCTXDataType)3, 413 },
	{ (Il2CppRGCTXDataType)2, 973 },
	{ (Il2CppRGCTXDataType)3, 92 },
	{ (Il2CppRGCTXDataType)3, 93 },
	{ (Il2CppRGCTXDataType)2, 1738 },
	{ (Il2CppRGCTXDataType)3, 8364 },
	{ (Il2CppRGCTXDataType)2, 974 },
	{ (Il2CppRGCTXDataType)3, 118 },
	{ (Il2CppRGCTXDataType)3, 119 },
	{ (Il2CppRGCTXDataType)2, 1756 },
	{ (Il2CppRGCTXDataType)3, 8372 },
	{ (Il2CppRGCTXDataType)3, 26229 },
	{ (Il2CppRGCTXDataType)2, 992 },
	{ (Il2CppRGCTXDataType)3, 436 },
	{ (Il2CppRGCTXDataType)2, 3451 },
	{ (Il2CppRGCTXDataType)3, 17656 },
	{ (Il2CppRGCTXDataType)3, 9413 },
	{ (Il2CppRGCTXDataType)3, 9429 },
	{ (Il2CppRGCTXDataType)2, 2697 },
	{ (Il2CppRGCTXDataType)2, 1971 },
	{ (Il2CppRGCTXDataType)3, 9075 },
	{ (Il2CppRGCTXDataType)3, 26125 },
	{ (Il2CppRGCTXDataType)2, 977 },
	{ (Il2CppRGCTXDataType)3, 275 },
	{ (Il2CppRGCTXDataType)3, 26135 },
	{ (Il2CppRGCTXDataType)2, 981 },
	{ (Il2CppRGCTXDataType)3, 327 },
	{ (Il2CppRGCTXDataType)3, 26170 },
	{ (Il2CppRGCTXDataType)2, 988 },
	{ (Il2CppRGCTXDataType)3, 394 },
	{ (Il2CppRGCTXDataType)3, 26240 },
	{ (Il2CppRGCTXDataType)3, 7525 },
	{ (Il2CppRGCTXDataType)2, 1605 },
	{ (Il2CppRGCTXDataType)2, 2143 },
	{ (Il2CppRGCTXDataType)2, 2297 },
	{ (Il2CppRGCTXDataType)2, 2411 },
	{ (Il2CppRGCTXDataType)2, 1141 },
	{ (Il2CppRGCTXDataType)3, 1791 },
	{ (Il2CppRGCTXDataType)3, 1792 },
	{ (Il2CppRGCTXDataType)2, 2866 },
	{ (Il2CppRGCTXDataType)3, 11977 },
	{ (Il2CppRGCTXDataType)2, 2144 },
	{ (Il2CppRGCTXDataType)3, 26004 },
	{ (Il2CppRGCTXDataType)2, 975 },
	{ (Il2CppRGCTXDataType)3, 252 },
	{ (Il2CppRGCTXDataType)2, 2606 },
	{ (Il2CppRGCTXDataType)2, 2021 },
	{ (Il2CppRGCTXDataType)2, 2159 },
	{ (Il2CppRGCTXDataType)2, 2300 },
	{ (Il2CppRGCTXDataType)2, 2607 },
	{ (Il2CppRGCTXDataType)2, 2022 },
	{ (Il2CppRGCTXDataType)2, 2160 },
	{ (Il2CppRGCTXDataType)2, 2301 },
	{ (Il2CppRGCTXDataType)2, 2161 },
	{ (Il2CppRGCTXDataType)2, 2302 },
	{ (Il2CppRGCTXDataType)3, 8366 },
	{ (Il2CppRGCTXDataType)2, 2608 },
	{ (Il2CppRGCTXDataType)2, 2023 },
	{ (Il2CppRGCTXDataType)2, 2162 },
	{ (Il2CppRGCTXDataType)2, 2303 },
	{ (Il2CppRGCTXDataType)2, 2609 },
	{ (Il2CppRGCTXDataType)2, 2024 },
	{ (Il2CppRGCTXDataType)2, 2163 },
	{ (Il2CppRGCTXDataType)2, 2304 },
	{ (Il2CppRGCTXDataType)2, 2164 },
	{ (Il2CppRGCTXDataType)2, 2305 },
	{ (Il2CppRGCTXDataType)3, 8367 },
	{ (Il2CppRGCTXDataType)2, 2605 },
	{ (Il2CppRGCTXDataType)2, 2158 },
	{ (Il2CppRGCTXDataType)2, 2299 },
	{ (Il2CppRGCTXDataType)2, 2138 },
	{ (Il2CppRGCTXDataType)2, 2139 },
	{ (Il2CppRGCTXDataType)2, 2295 },
	{ (Il2CppRGCTXDataType)3, 8363 },
	{ (Il2CppRGCTXDataType)2, 2020 },
	{ (Il2CppRGCTXDataType)2, 2154 },
	{ (Il2CppRGCTXDataType)2, 2155 },
	{ (Il2CppRGCTXDataType)2, 2298 },
	{ (Il2CppRGCTXDataType)3, 8365 },
	{ (Il2CppRGCTXDataType)2, 2019 },
	{ (Il2CppRGCTXDataType)3, 26097 },
	{ (Il2CppRGCTXDataType)3, 7524 },
	{ (Il2CppRGCTXDataType)2, 1604 },
	{ (Il2CppRGCTXDataType)2, 2141 },
	{ (Il2CppRGCTXDataType)2, 2296 },
	{ (Il2CppRGCTXDataType)2, 2410 },
	{ (Il2CppRGCTXDataType)3, 26175 },
	{ (Il2CppRGCTXDataType)3, 26174 },
	{ (Il2CppRGCTXDataType)3, 10974 },
	{ (Il2CppRGCTXDataType)3, 10976 },
	{ (Il2CppRGCTXDataType)2, 669 },
	{ (Il2CppRGCTXDataType)3, 10975 },
	{ (Il2CppRGCTXDataType)3, 10984 },
	{ (Il2CppRGCTXDataType)2, 2724 },
	{ (Il2CppRGCTXDataType)2, 3888 },
	{ (Il2CppRGCTXDataType)3, 21951 },
	{ (Il2CppRGCTXDataType)3, 10985 },
	{ (Il2CppRGCTXDataType)2, 2225 },
	{ (Il2CppRGCTXDataType)2, 2338 },
	{ (Il2CppRGCTXDataType)3, 8381 },
	{ (Il2CppRGCTXDataType)3, 26008 },
	{ (Il2CppRGCTXDataType)2, 3899 },
	{ (Il2CppRGCTXDataType)3, 22285 },
	{ (Il2CppRGCTXDataType)3, 10977 },
	{ (Il2CppRGCTXDataType)2, 2723 },
	{ (Il2CppRGCTXDataType)2, 3886 },
	{ (Il2CppRGCTXDataType)3, 21913 },
	{ (Il2CppRGCTXDataType)3, 8380 },
	{ (Il2CppRGCTXDataType)3, 10978 },
	{ (Il2CppRGCTXDataType)3, 26007 },
	{ (Il2CppRGCTXDataType)2, 3895 },
	{ (Il2CppRGCTXDataType)3, 22070 },
	{ (Il2CppRGCTXDataType)3, 10991 },
	{ (Il2CppRGCTXDataType)2, 2725 },
	{ (Il2CppRGCTXDataType)2, 3893 },
	{ (Il2CppRGCTXDataType)3, 22032 },
	{ (Il2CppRGCTXDataType)3, 12039 },
	{ (Il2CppRGCTXDataType)3, 6004 },
	{ (Il2CppRGCTXDataType)3, 8382 },
	{ (Il2CppRGCTXDataType)3, 6003 },
	{ (Il2CppRGCTXDataType)3, 10992 },
	{ (Il2CppRGCTXDataType)3, 26009 },
	{ (Il2CppRGCTXDataType)2, 3903 },
	{ (Il2CppRGCTXDataType)3, 22541 },
	{ (Il2CppRGCTXDataType)3, 11005 },
	{ (Il2CppRGCTXDataType)2, 2727 },
	{ (Il2CppRGCTXDataType)2, 3901 },
	{ (Il2CppRGCTXDataType)3, 22287 },
	{ (Il2CppRGCTXDataType)3, 11006 },
	{ (Il2CppRGCTXDataType)2, 2228 },
	{ (Il2CppRGCTXDataType)2, 2341 },
	{ (Il2CppRGCTXDataType)3, 8386 },
	{ (Il2CppRGCTXDataType)3, 8385 },
	{ (Il2CppRGCTXDataType)2, 3890 },
	{ (Il2CppRGCTXDataType)3, 21953 },
	{ (Il2CppRGCTXDataType)3, 26023 },
	{ (Il2CppRGCTXDataType)2, 3900 },
	{ (Il2CppRGCTXDataType)3, 22286 },
	{ (Il2CppRGCTXDataType)3, 10998 },
	{ (Il2CppRGCTXDataType)2, 2726 },
	{ (Il2CppRGCTXDataType)2, 3897 },
	{ (Il2CppRGCTXDataType)3, 22072 },
	{ (Il2CppRGCTXDataType)3, 8384 },
	{ (Il2CppRGCTXDataType)3, 8383 },
	{ (Il2CppRGCTXDataType)3, 10999 },
	{ (Il2CppRGCTXDataType)2, 3889 },
	{ (Il2CppRGCTXDataType)3, 21952 },
	{ (Il2CppRGCTXDataType)3, 26022 },
	{ (Il2CppRGCTXDataType)2, 3896 },
	{ (Il2CppRGCTXDataType)3, 22071 },
	{ (Il2CppRGCTXDataType)3, 11012 },
	{ (Il2CppRGCTXDataType)2, 2728 },
	{ (Il2CppRGCTXDataType)2, 3905 },
	{ (Il2CppRGCTXDataType)3, 22543 },
	{ (Il2CppRGCTXDataType)3, 12040 },
	{ (Il2CppRGCTXDataType)3, 6006 },
	{ (Il2CppRGCTXDataType)3, 8388 },
	{ (Il2CppRGCTXDataType)3, 8387 },
	{ (Il2CppRGCTXDataType)3, 6005 },
	{ (Il2CppRGCTXDataType)3, 11013 },
	{ (Il2CppRGCTXDataType)2, 3891 },
	{ (Il2CppRGCTXDataType)3, 21954 },
	{ (Il2CppRGCTXDataType)3, 26024 },
	{ (Il2CppRGCTXDataType)2, 3904 },
	{ (Il2CppRGCTXDataType)3, 22542 },
	{ (Il2CppRGCTXDataType)3, 415 },
	{ (Il2CppRGCTXDataType)2, 2217 },
	{ (Il2CppRGCTXDataType)2, 2332 },
	{ (Il2CppRGCTXDataType)3, 8724 },
	{ (Il2CppRGCTXDataType)3, 417 },
	{ (Il2CppRGCTXDataType)2, 860 },
	{ (Il2CppRGCTXDataType)2, 991 },
	{ (Il2CppRGCTXDataType)3, 414 },
	{ (Il2CppRGCTXDataType)3, 416 },
	{ (Il2CppRGCTXDataType)3, 8377 },
	{ (Il2CppRGCTXDataType)3, 8378 },
	{ (Il2CppRGCTXDataType)3, 8389 },
	{ (Il2CppRGCTXDataType)3, 439 },
	{ (Il2CppRGCTXDataType)3, 438 },
	{ (Il2CppRGCTXDataType)2, 2220 },
	{ (Il2CppRGCTXDataType)2, 2334 },
	{ (Il2CppRGCTXDataType)3, 8379 },
	{ (Il2CppRGCTXDataType)2, 2239 },
	{ (Il2CppRGCTXDataType)2, 2355 },
	{ (Il2CppRGCTXDataType)3, 441 },
	{ (Il2CppRGCTXDataType)2, 862 },
	{ (Il2CppRGCTXDataType)2, 993 },
	{ (Il2CppRGCTXDataType)3, 437 },
	{ (Il2CppRGCTXDataType)3, 440 },
	{ (Il2CppRGCTXDataType)3, 277 },
	{ (Il2CppRGCTXDataType)2, 3606 },
	{ (Il2CppRGCTXDataType)3, 20093 },
	{ (Il2CppRGCTXDataType)2, 2208 },
	{ (Il2CppRGCTXDataType)2, 2327 },
	{ (Il2CppRGCTXDataType)3, 20094 },
	{ (Il2CppRGCTXDataType)3, 279 },
	{ (Il2CppRGCTXDataType)2, 661 },
	{ (Il2CppRGCTXDataType)2, 978 },
	{ (Il2CppRGCTXDataType)3, 276 },
	{ (Il2CppRGCTXDataType)3, 278 },
	{ (Il2CppRGCTXDataType)3, 329 },
	{ (Il2CppRGCTXDataType)2, 3608 },
	{ (Il2CppRGCTXDataType)3, 20095 },
	{ (Il2CppRGCTXDataType)2, 2211 },
	{ (Il2CppRGCTXDataType)2, 2329 },
	{ (Il2CppRGCTXDataType)3, 20096 },
	{ (Il2CppRGCTXDataType)3, 331 },
	{ (Il2CppRGCTXDataType)2, 663 },
	{ (Il2CppRGCTXDataType)2, 982 },
	{ (Il2CppRGCTXDataType)3, 328 },
	{ (Il2CppRGCTXDataType)3, 330 },
	{ (Il2CppRGCTXDataType)2, 1142 },
	{ (Il2CppRGCTXDataType)3, 1793 },
	{ (Il2CppRGCTXDataType)2, 665 },
	{ (Il2CppRGCTXDataType)2, 989 },
	{ (Il2CppRGCTXDataType)3, 395 },
	{ (Il2CppRGCTXDataType)3, 396 },
	{ (Il2CppRGCTXDataType)3, 254 },
	{ (Il2CppRGCTXDataType)2, 659 },
	{ (Il2CppRGCTXDataType)3, 256 },
	{ (Il2CppRGCTXDataType)2, 976 },
	{ (Il2CppRGCTXDataType)3, 253 },
	{ (Il2CppRGCTXDataType)3, 255 },
	{ (Il2CppRGCTXDataType)2, 935 },
	{ (Il2CppRGCTXDataType)3, 1 },
	{ (Il2CppRGCTXDataType)2, 1765 },
	{ (Il2CppRGCTXDataType)3, 8375 },
	{ (Il2CppRGCTXDataType)2, 944 },
	{ (Il2CppRGCTXDataType)3, 10 },
	{ (Il2CppRGCTXDataType)2, 944 },
	{ (Il2CppRGCTXDataType)2, 3324 },
	{ (Il2CppRGCTXDataType)3, 16179 },
	{ (Il2CppRGCTXDataType)3, 16181 },
	{ (Il2CppRGCTXDataType)3, 9084 },
	{ (Il2CppRGCTXDataType)3, 7551 },
	{ (Il2CppRGCTXDataType)2, 1617 },
	{ (Il2CppRGCTXDataType)2, 4513 },
	{ (Il2CppRGCTXDataType)2, 984 },
	{ (Il2CppRGCTXDataType)3, 348 },
	{ (Il2CppRGCTXDataType)3, 16180 },
	{ (Il2CppRGCTXDataType)2, 552 },
	{ (Il2CppRGCTXDataType)2, 2424 },
	{ (Il2CppRGCTXDataType)3, 16182 },
	{ (Il2CppRGCTXDataType)3, 16183 },
	{ (Il2CppRGCTXDataType)2, 1972 },
	{ (Il2CppRGCTXDataType)3, 9083 },
	{ (Il2CppRGCTXDataType)2, 4499 },
	{ (Il2CppRGCTXDataType)2, 2166 },
	{ (Il2CppRGCTXDataType)2, 2306 },
	{ (Il2CppRGCTXDataType)3, 8368 },
	{ (Il2CppRGCTXDataType)3, 8369 },
	{ (Il2CppRGCTXDataType)3, 25453 },
	{ (Il2CppRGCTXDataType)2, 987 },
	{ (Il2CppRGCTXDataType)3, 381 },
	{ (Il2CppRGCTXDataType)3, 9085 },
	{ (Il2CppRGCTXDataType)3, 22974 },
	{ (Il2CppRGCTXDataType)2, 877 },
	{ (Il2CppRGCTXDataType)3, 7559 },
	{ (Il2CppRGCTXDataType)2, 1620 },
	{ (Il2CppRGCTXDataType)2, 4543 },
	{ (Il2CppRGCTXDataType)3, 20090 },
	{ (Il2CppRGCTXDataType)3, 20091 },
	{ (Il2CppRGCTXDataType)2, 2428 },
	{ (Il2CppRGCTXDataType)3, 20092 },
	{ (Il2CppRGCTXDataType)2, 587 },
	{ (Il2CppRGCTXDataType)3, 16184 },
	{ (Il2CppRGCTXDataType)2, 3326 },
	{ (Il2CppRGCTXDataType)3, 16185 },
	{ (Il2CppRGCTXDataType)3, 9076 },
	{ (Il2CppRGCTXDataType)2, 983 },
	{ (Il2CppRGCTXDataType)3, 341 },
	{ (Il2CppRGCTXDataType)3, 17643 },
	{ (Il2CppRGCTXDataType)2, 3452 },
	{ (Il2CppRGCTXDataType)3, 17657 },
	{ (Il2CppRGCTXDataType)2, 1144 },
	{ (Il2CppRGCTXDataType)3, 1794 },
	{ (Il2CppRGCTXDataType)3, 17649 },
	{ (Il2CppRGCTXDataType)3, 5978 },
	{ (Il2CppRGCTXDataType)2, 708 },
	{ (Il2CppRGCTXDataType)3, 17644 },
	{ (Il2CppRGCTXDataType)2, 3448 },
	{ (Il2CppRGCTXDataType)3, 1838 },
	{ (Il2CppRGCTXDataType)2, 1158 },
	{ (Il2CppRGCTXDataType)2, 1575 },
	{ (Il2CppRGCTXDataType)3, 5984 },
	{ (Il2CppRGCTXDataType)3, 17645 },
	{ (Il2CppRGCTXDataType)3, 5973 },
	{ (Il2CppRGCTXDataType)3, 5974 },
	{ (Il2CppRGCTXDataType)3, 5972 },
	{ (Il2CppRGCTXDataType)3, 5975 },
	{ (Il2CppRGCTXDataType)2, 1571 },
	{ (Il2CppRGCTXDataType)2, 4497 },
	{ (Il2CppRGCTXDataType)3, 8374 },
	{ (Il2CppRGCTXDataType)3, 5977 },
	{ (Il2CppRGCTXDataType)2, 2121 },
	{ (Il2CppRGCTXDataType)3, 5976 },
	{ (Il2CppRGCTXDataType)2, 2026 },
	{ (Il2CppRGCTXDataType)2, 4439 },
	{ (Il2CppRGCTXDataType)2, 2182 },
	{ (Il2CppRGCTXDataType)2, 2307 },
	{ (Il2CppRGCTXDataType)3, 7541 },
	{ (Il2CppRGCTXDataType)2, 1613 },
	{ (Il2CppRGCTXDataType)3, 9124 },
	{ (Il2CppRGCTXDataType)3, 9125 },
	{ (Il2CppRGCTXDataType)2, 1980 },
	{ (Il2CppRGCTXDataType)3, 9128 },
	{ (Il2CppRGCTXDataType)2, 1980 },
	{ (Il2CppRGCTXDataType)3, 9130 },
	{ (Il2CppRGCTXDataType)2, 2027 },
	{ (Il2CppRGCTXDataType)3, 9134 },
	{ (Il2CppRGCTXDataType)3, 9139 },
	{ (Il2CppRGCTXDataType)3, 9138 },
	{ (Il2CppRGCTXDataType)2, 4541 },
	{ (Il2CppRGCTXDataType)3, 9127 },
	{ (Il2CppRGCTXDataType)3, 9126 },
	{ (Il2CppRGCTXDataType)3, 9135 },
	{ (Il2CppRGCTXDataType)2, 2421 },
	{ (Il2CppRGCTXDataType)3, 9132 },
	{ (Il2CppRGCTXDataType)3, 26848 },
	{ (Il2CppRGCTXDataType)2, 1577 },
	{ (Il2CppRGCTXDataType)3, 5996 },
	{ (Il2CppRGCTXDataType)1, 2118 },
	{ (Il2CppRGCTXDataType)2, 4453 },
	{ (Il2CppRGCTXDataType)3, 9131 },
	{ (Il2CppRGCTXDataType)1, 4453 },
	{ (Il2CppRGCTXDataType)1, 2421 },
	{ (Il2CppRGCTXDataType)2, 4541 },
	{ (Il2CppRGCTXDataType)2, 4453 },
	{ (Il2CppRGCTXDataType)2, 2187 },
	{ (Il2CppRGCTXDataType)2, 2310 },
	{ (Il2CppRGCTXDataType)3, 9129 },
	{ (Il2CppRGCTXDataType)3, 9136 },
	{ (Il2CppRGCTXDataType)3, 9137 },
	{ (Il2CppRGCTXDataType)3, 9133 },
	{ (Il2CppRGCTXDataType)3, 9140 },
	{ (Il2CppRGCTXDataType)2, 509 },
	{ (Il2CppRGCTXDataType)3, 6007 },
	{ (Il2CppRGCTXDataType)2, 681 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	255,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	76,
	s_rgctxIndices,
	360,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
