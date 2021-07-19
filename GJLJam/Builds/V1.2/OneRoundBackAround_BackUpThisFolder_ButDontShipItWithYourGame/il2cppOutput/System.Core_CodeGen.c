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
// 0x00000013 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000017 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000019 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000001A System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001B System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001C System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001E System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000001F System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000020 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000021 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000022 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000023 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000024 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000025 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000026 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000027 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000029 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000002A System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000002B System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000002D System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000002E System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000002F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000030 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000031 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000033 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000034 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000035 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000037 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000038 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003B System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003C System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000003D System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000003E System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000003F System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000041 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000042 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000043 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000044 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000046 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000047 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000048 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004B System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::.ctor(System.Int32)
// 0x0000004C System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::System.IDisposable.Dispose()
// 0x0000004D System.Boolean System.Linq.Enumerable/<SelectIterator>d__5`2::MoveNext()
// 0x0000004E System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::<>m__Finally1()
// 0x0000004F TResult System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000050 System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerator.Reset()
// 0x00000051 System.Object System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerator.get_Current()
// 0x00000052 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000053 System.Collections.IEnumerator System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000054 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000055 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000056 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000057 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000058 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000059 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005A System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005D TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x0000005F System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000060 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000061 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000062 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000063 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000064 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000065 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000066 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000067 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000068 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000069 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006A System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006B System.Func`2<TElement,TElement> System.Linq.IdentityFunction`1::get_Instance()
// 0x0000006C System.Void System.Linq.IdentityFunction`1/<>c::.cctor()
// 0x0000006D System.Void System.Linq.IdentityFunction`1/<>c::.ctor()
// 0x0000006E TElement System.Linq.IdentityFunction`1/<>c::<get_Instance>b__1_0(TElement)
// 0x0000006F System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000070 System.Linq.Lookup`2<TKey,TElement> System.Linq.Lookup`2::Create(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000071 System.Void System.Linq.Lookup`2::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000072 System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.Lookup`2::GetEnumerator()
// 0x00000073 System.Collections.IEnumerator System.Linq.Lookup`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000074 System.Int32 System.Linq.Lookup`2::InternalGetHashCode(TKey)
// 0x00000075 System.Linq.Lookup`2/Grouping<TKey,TElement> System.Linq.Lookup`2::GetGrouping(TKey,System.Boolean)
// 0x00000076 System.Void System.Linq.Lookup`2::Resize()
// 0x00000077 System.Void System.Linq.Lookup`2/Grouping::Add(TElement)
// 0x00000078 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.Lookup`2/Grouping::GetEnumerator()
// 0x00000079 System.Collections.IEnumerator System.Linq.Lookup`2/Grouping::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007A System.Int32 System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.get_Count()
// 0x0000007B System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.get_IsReadOnly()
// 0x0000007C System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Add(TElement)
// 0x0000007D System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Clear()
// 0x0000007E System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Contains(TElement)
// 0x0000007F System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.CopyTo(TElement[],System.Int32)
// 0x00000080 System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Remove(TElement)
// 0x00000081 System.Int32 System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.IndexOf(TElement)
// 0x00000082 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.Insert(System.Int32,TElement)
// 0x00000083 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.RemoveAt(System.Int32)
// 0x00000084 TElement System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.get_Item(System.Int32)
// 0x00000085 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.set_Item(System.Int32,TElement)
// 0x00000086 System.Void System.Linq.Lookup`2/Grouping::.ctor()
// 0x00000087 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::.ctor(System.Int32)
// 0x00000088 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.IDisposable.Dispose()
// 0x00000089 System.Boolean System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::MoveNext()
// 0x0000008A TElement System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x0000008B System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.IEnumerator.Reset()
// 0x0000008C System.Object System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.IEnumerator.get_Current()
// 0x0000008D System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::.ctor(System.Int32)
// 0x0000008E System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::System.IDisposable.Dispose()
// 0x0000008F System.Boolean System.Linq.Lookup`2/<GetEnumerator>d__12::MoveNext()
// 0x00000090 System.Linq.IGrouping`2<TKey,TElement> System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.Generic.IEnumerator<System.Linq.IGrouping<TKey,TElement>>.get_Current()
// 0x00000091 System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.IEnumerator.Reset()
// 0x00000092 System.Object System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.IEnumerator.get_Current()
// 0x00000093 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000094 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000095 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000096 System.Void System.Linq.Set`1::Resize()
// 0x00000097 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000098 System.Void System.Linq.GroupedEnumerable`3::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000099 System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.GroupedEnumerable`3::GetEnumerator()
// 0x0000009A System.Collections.IEnumerator System.Linq.GroupedEnumerable`3::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009B System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000009C System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000009D System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009E System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009F System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x000000A0 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x000000A1 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000A2 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000A3 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000A4 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000A5 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000A6 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A7 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A8 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000A9 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000AA System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000AB System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000AC System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000AD System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000AE System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000AF System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000B0 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000B1 TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000B2 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000B3 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000B4 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000B5 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000B6 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000B7 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000B8 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000B9 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000BA System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000BB System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000BC System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000BD System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000BE System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000BF System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000C0 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000C1 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000C2 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000C3 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000C4 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000C5 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000C6 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000C7 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000C8 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000C9 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000CA System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000CB System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000CC T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000CD System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000CE System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[206] = 
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
static const int32_t s_InvokerIndices[206] = 
{
	3806,
	3806,
	3934,
	3934,
	3934,
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
static const Il2CppTokenRangePair s_rgctxIndices[61] = 
{
	{ 0x02000004, { 84, 4 } },
	{ 0x02000005, { 88, 9 } },
	{ 0x02000006, { 99, 7 } },
	{ 0x02000007, { 108, 10 } },
	{ 0x02000008, { 120, 11 } },
	{ 0x02000009, { 134, 9 } },
	{ 0x0200000A, { 146, 12 } },
	{ 0x0200000B, { 161, 9 } },
	{ 0x0200000C, { 170, 1 } },
	{ 0x0200000D, { 171, 2 } },
	{ 0x0200000E, { 173, 12 } },
	{ 0x0200000F, { 185, 11 } },
	{ 0x02000010, { 196, 4 } },
	{ 0x02000011, { 200, 3 } },
	{ 0x02000014, { 203, 17 } },
	{ 0x02000015, { 224, 5 } },
	{ 0x02000016, { 229, 1 } },
	{ 0x02000018, { 230, 8 } },
	{ 0x0200001A, { 238, 4 } },
	{ 0x0200001B, { 242, 3 } },
	{ 0x0200001C, { 247, 5 } },
	{ 0x0200001D, { 252, 7 } },
	{ 0x0200001E, { 259, 3 } },
	{ 0x0200001F, { 262, 7 } },
	{ 0x02000020, { 269, 4 } },
	{ 0x02000021, { 273, 21 } },
	{ 0x02000023, { 294, 2 } },
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
	{ 0x06000013, { 46, 3 } },
	{ 0x06000014, { 49, 2 } },
	{ 0x06000015, { 51, 4 } },
	{ 0x06000016, { 55, 3 } },
	{ 0x06000017, { 58, 4 } },
	{ 0x06000018, { 62, 3 } },
	{ 0x06000019, { 65, 3 } },
	{ 0x0600001A, { 68, 1 } },
	{ 0x0600001B, { 69, 3 } },
	{ 0x0600001C, { 72, 2 } },
	{ 0x0600001D, { 74, 3 } },
	{ 0x0600001E, { 77, 2 } },
	{ 0x0600001F, { 79, 5 } },
	{ 0x0600002F, { 97, 2 } },
	{ 0x06000034, { 106, 2 } },
	{ 0x06000039, { 118, 2 } },
	{ 0x0600003F, { 131, 3 } },
	{ 0x06000044, { 143, 3 } },
	{ 0x06000049, { 158, 3 } },
	{ 0x06000070, { 220, 4 } },
	{ 0x0600009E, { 245, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[296] = 
{
	{ (Il2CppRGCTXDataType)2, 2010 },
	{ (Il2CppRGCTXDataType)3, 8865 },
	{ (Il2CppRGCTXDataType)2, 3448 },
	{ (Il2CppRGCTXDataType)2, 2931 },
	{ (Il2CppRGCTXDataType)3, 16796 },
	{ (Il2CppRGCTXDataType)2, 2134 },
	{ (Il2CppRGCTXDataType)2, 2938 },
	{ (Il2CppRGCTXDataType)3, 16835 },
	{ (Il2CppRGCTXDataType)2, 2933 },
	{ (Il2CppRGCTXDataType)3, 16803 },
	{ (Il2CppRGCTXDataType)2, 2011 },
	{ (Il2CppRGCTXDataType)3, 8866 },
	{ (Il2CppRGCTXDataType)2, 3469 },
	{ (Il2CppRGCTXDataType)2, 2940 },
	{ (Il2CppRGCTXDataType)3, 16842 },
	{ (Il2CppRGCTXDataType)2, 2153 },
	{ (Il2CppRGCTXDataType)2, 2948 },
	{ (Il2CppRGCTXDataType)3, 16899 },
	{ (Il2CppRGCTXDataType)2, 2944 },
	{ (Il2CppRGCTXDataType)3, 16868 },
	{ (Il2CppRGCTXDataType)3, 19163 },
	{ (Il2CppRGCTXDataType)2, 712 },
	{ (Il2CppRGCTXDataType)3, 153 },
	{ (Il2CppRGCTXDataType)2, 702 },
	{ (Il2CppRGCTXDataType)3, 64 },
	{ (Il2CppRGCTXDataType)3, 65 },
	{ (Il2CppRGCTXDataType)2, 1280 },
	{ (Il2CppRGCTXDataType)3, 6815 },
	{ (Il2CppRGCTXDataType)2, 703 },
	{ (Il2CppRGCTXDataType)3, 76 },
	{ (Il2CppRGCTXDataType)3, 77 },
	{ (Il2CppRGCTXDataType)2, 1293 },
	{ (Il2CppRGCTXDataType)3, 6821 },
	{ (Il2CppRGCTXDataType)3, 19168 },
	{ (Il2CppRGCTXDataType)2, 714 },
	{ (Il2CppRGCTXDataType)3, 176 },
	{ (Il2CppRGCTXDataType)2, 2562 },
	{ (Il2CppRGCTXDataType)3, 13175 },
	{ (Il2CppRGCTXDataType)3, 7650 },
	{ (Il2CppRGCTXDataType)3, 7655 },
	{ (Il2CppRGCTXDataType)2, 1991 },
	{ (Il2CppRGCTXDataType)2, 1421 },
	{ (Il2CppRGCTXDataType)3, 7458 },
	{ (Il2CppRGCTXDataType)3, 19130 },
	{ (Il2CppRGCTXDataType)2, 706 },
	{ (Il2CppRGCTXDataType)3, 87 },
	{ (Il2CppRGCTXDataType)2, 830 },
	{ (Il2CppRGCTXDataType)3, 1093 },
	{ (Il2CppRGCTXDataType)3, 1094 },
	{ (Il2CppRGCTXDataType)2, 2135 },
	{ (Il2CppRGCTXDataType)3, 9520 },
	{ (Il2CppRGCTXDataType)2, 1936 },
	{ (Il2CppRGCTXDataType)2, 1452 },
	{ (Il2CppRGCTXDataType)2, 1562 },
	{ (Il2CppRGCTXDataType)2, 1674 },
	{ (Il2CppRGCTXDataType)2, 1563 },
	{ (Il2CppRGCTXDataType)2, 1675 },
	{ (Il2CppRGCTXDataType)3, 6817 },
	{ (Il2CppRGCTXDataType)2, 1937 },
	{ (Il2CppRGCTXDataType)2, 1453 },
	{ (Il2CppRGCTXDataType)2, 1564 },
	{ (Il2CppRGCTXDataType)2, 1676 },
	{ (Il2CppRGCTXDataType)2, 1565 },
	{ (Il2CppRGCTXDataType)2, 1677 },
	{ (Il2CppRGCTXDataType)3, 6818 },
	{ (Il2CppRGCTXDataType)2, 1935 },
	{ (Il2CppRGCTXDataType)2, 1561 },
	{ (Il2CppRGCTXDataType)2, 1673 },
	{ (Il2CppRGCTXDataType)2, 1551 },
	{ (Il2CppRGCTXDataType)2, 1552 },
	{ (Il2CppRGCTXDataType)2, 1670 },
	{ (Il2CppRGCTXDataType)3, 6814 },
	{ (Il2CppRGCTXDataType)2, 1451 },
	{ (Il2CppRGCTXDataType)2, 1559 },
	{ (Il2CppRGCTXDataType)2, 1560 },
	{ (Il2CppRGCTXDataType)2, 1672 },
	{ (Il2CppRGCTXDataType)3, 6816 },
	{ (Il2CppRGCTXDataType)2, 1450 },
	{ (Il2CppRGCTXDataType)3, 19116 },
	{ (Il2CppRGCTXDataType)3, 6163 },
	{ (Il2CppRGCTXDataType)2, 1152 },
	{ (Il2CppRGCTXDataType)2, 1554 },
	{ (Il2CppRGCTXDataType)2, 1671 },
	{ (Il2CppRGCTXDataType)2, 1760 },
	{ (Il2CppRGCTXDataType)3, 8867 },
	{ (Il2CppRGCTXDataType)3, 8869 },
	{ (Il2CppRGCTXDataType)2, 476 },
	{ (Il2CppRGCTXDataType)3, 8868 },
	{ (Il2CppRGCTXDataType)3, 8877 },
	{ (Il2CppRGCTXDataType)2, 2014 },
	{ (Il2CppRGCTXDataType)2, 2934 },
	{ (Il2CppRGCTXDataType)3, 16804 },
	{ (Il2CppRGCTXDataType)3, 8878 },
	{ (Il2CppRGCTXDataType)2, 1616 },
	{ (Il2CppRGCTXDataType)2, 1704 },
	{ (Il2CppRGCTXDataType)3, 6829 },
	{ (Il2CppRGCTXDataType)3, 19102 },
	{ (Il2CppRGCTXDataType)2, 2945 },
	{ (Il2CppRGCTXDataType)3, 16869 },
	{ (Il2CppRGCTXDataType)3, 8870 },
	{ (Il2CppRGCTXDataType)2, 2013 },
	{ (Il2CppRGCTXDataType)2, 2932 },
	{ (Il2CppRGCTXDataType)3, 16797 },
	{ (Il2CppRGCTXDataType)3, 6828 },
	{ (Il2CppRGCTXDataType)3, 8871 },
	{ (Il2CppRGCTXDataType)3, 19101 },
	{ (Il2CppRGCTXDataType)2, 2941 },
	{ (Il2CppRGCTXDataType)3, 16843 },
	{ (Il2CppRGCTXDataType)3, 8884 },
	{ (Il2CppRGCTXDataType)2, 2015 },
	{ (Il2CppRGCTXDataType)2, 2939 },
	{ (Il2CppRGCTXDataType)3, 16836 },
	{ (Il2CppRGCTXDataType)3, 9570 },
	{ (Il2CppRGCTXDataType)3, 5224 },
	{ (Il2CppRGCTXDataType)3, 6830 },
	{ (Il2CppRGCTXDataType)3, 5223 },
	{ (Il2CppRGCTXDataType)3, 8885 },
	{ (Il2CppRGCTXDataType)3, 19103 },
	{ (Il2CppRGCTXDataType)2, 2949 },
	{ (Il2CppRGCTXDataType)3, 16900 },
	{ (Il2CppRGCTXDataType)3, 8898 },
	{ (Il2CppRGCTXDataType)2, 2017 },
	{ (Il2CppRGCTXDataType)2, 2947 },
	{ (Il2CppRGCTXDataType)3, 16871 },
	{ (Il2CppRGCTXDataType)3, 8899 },
	{ (Il2CppRGCTXDataType)2, 1619 },
	{ (Il2CppRGCTXDataType)2, 1707 },
	{ (Il2CppRGCTXDataType)3, 6834 },
	{ (Il2CppRGCTXDataType)3, 6833 },
	{ (Il2CppRGCTXDataType)2, 2936 },
	{ (Il2CppRGCTXDataType)3, 16806 },
	{ (Il2CppRGCTXDataType)3, 19110 },
	{ (Il2CppRGCTXDataType)2, 2946 },
	{ (Il2CppRGCTXDataType)3, 16870 },
	{ (Il2CppRGCTXDataType)3, 8891 },
	{ (Il2CppRGCTXDataType)2, 2016 },
	{ (Il2CppRGCTXDataType)2, 2943 },
	{ (Il2CppRGCTXDataType)3, 16845 },
	{ (Il2CppRGCTXDataType)3, 6832 },
	{ (Il2CppRGCTXDataType)3, 6831 },
	{ (Il2CppRGCTXDataType)3, 8892 },
	{ (Il2CppRGCTXDataType)2, 2935 },
	{ (Il2CppRGCTXDataType)3, 16805 },
	{ (Il2CppRGCTXDataType)3, 19109 },
	{ (Il2CppRGCTXDataType)2, 2942 },
	{ (Il2CppRGCTXDataType)3, 16844 },
	{ (Il2CppRGCTXDataType)3, 8905 },
	{ (Il2CppRGCTXDataType)2, 2018 },
	{ (Il2CppRGCTXDataType)2, 2951 },
	{ (Il2CppRGCTXDataType)3, 16902 },
	{ (Il2CppRGCTXDataType)3, 9571 },
	{ (Il2CppRGCTXDataType)3, 5226 },
	{ (Il2CppRGCTXDataType)3, 6836 },
	{ (Il2CppRGCTXDataType)3, 6835 },
	{ (Il2CppRGCTXDataType)3, 5225 },
	{ (Il2CppRGCTXDataType)3, 8906 },
	{ (Il2CppRGCTXDataType)2, 2937 },
	{ (Il2CppRGCTXDataType)3, 16807 },
	{ (Il2CppRGCTXDataType)3, 19111 },
	{ (Il2CppRGCTXDataType)2, 2950 },
	{ (Il2CppRGCTXDataType)3, 16901 },
	{ (Il2CppRGCTXDataType)3, 155 },
	{ (Il2CppRGCTXDataType)2, 1608 },
	{ (Il2CppRGCTXDataType)2, 1698 },
	{ (Il2CppRGCTXDataType)3, 6950 },
	{ (Il2CppRGCTXDataType)3, 157 },
	{ (Il2CppRGCTXDataType)2, 625 },
	{ (Il2CppRGCTXDataType)2, 713 },
	{ (Il2CppRGCTXDataType)3, 154 },
	{ (Il2CppRGCTXDataType)3, 156 },
	{ (Il2CppRGCTXDataType)3, 6825 },
	{ (Il2CppRGCTXDataType)3, 6826 },
	{ (Il2CppRGCTXDataType)3, 6837 },
	{ (Il2CppRGCTXDataType)3, 179 },
	{ (Il2CppRGCTXDataType)3, 178 },
	{ (Il2CppRGCTXDataType)2, 1611 },
	{ (Il2CppRGCTXDataType)2, 1700 },
	{ (Il2CppRGCTXDataType)3, 6827 },
	{ (Il2CppRGCTXDataType)2, 1630 },
	{ (Il2CppRGCTXDataType)2, 1720 },
	{ (Il2CppRGCTXDataType)3, 181 },
	{ (Il2CppRGCTXDataType)2, 627 },
	{ (Il2CppRGCTXDataType)2, 715 },
	{ (Il2CppRGCTXDataType)3, 177 },
	{ (Il2CppRGCTXDataType)3, 180 },
	{ (Il2CppRGCTXDataType)3, 89 },
	{ (Il2CppRGCTXDataType)2, 2662 },
	{ (Il2CppRGCTXDataType)3, 14649 },
	{ (Il2CppRGCTXDataType)2, 1605 },
	{ (Il2CppRGCTXDataType)2, 1696 },
	{ (Il2CppRGCTXDataType)3, 14650 },
	{ (Il2CppRGCTXDataType)3, 91 },
	{ (Il2CppRGCTXDataType)2, 472 },
	{ (Il2CppRGCTXDataType)2, 707 },
	{ (Il2CppRGCTXDataType)3, 88 },
	{ (Il2CppRGCTXDataType)3, 90 },
	{ (Il2CppRGCTXDataType)2, 673 },
	{ (Il2CppRGCTXDataType)3, 1 },
	{ (Il2CppRGCTXDataType)2, 1302 },
	{ (Il2CppRGCTXDataType)3, 6824 },
	{ (Il2CppRGCTXDataType)2, 682 },
	{ (Il2CppRGCTXDataType)3, 10 },
	{ (Il2CppRGCTXDataType)2, 682 },
	{ (Il2CppRGCTXDataType)2, 2453 },
	{ (Il2CppRGCTXDataType)3, 11979 },
	{ (Il2CppRGCTXDataType)3, 11981 },
	{ (Il2CppRGCTXDataType)3, 7467 },
	{ (Il2CppRGCTXDataType)3, 6192 },
	{ (Il2CppRGCTXDataType)2, 1165 },
	{ (Il2CppRGCTXDataType)2, 3536 },
	{ (Il2CppRGCTXDataType)2, 709 },
	{ (Il2CppRGCTXDataType)3, 108 },
	{ (Il2CppRGCTXDataType)3, 11980 },
	{ (Il2CppRGCTXDataType)2, 373 },
	{ (Il2CppRGCTXDataType)2, 1772 },
	{ (Il2CppRGCTXDataType)3, 11982 },
	{ (Il2CppRGCTXDataType)3, 11983 },
	{ (Il2CppRGCTXDataType)2, 1422 },
	{ (Il2CppRGCTXDataType)3, 7466 },
	{ (Il2CppRGCTXDataType)2, 3522 },
	{ (Il2CppRGCTXDataType)2, 1567 },
	{ (Il2CppRGCTXDataType)2, 1678 },
	{ (Il2CppRGCTXDataType)3, 6819 },
	{ (Il2CppRGCTXDataType)3, 6820 },
	{ (Il2CppRGCTXDataType)3, 18755 },
	{ (Il2CppRGCTXDataType)2, 711 },
	{ (Il2CppRGCTXDataType)3, 140 },
	{ (Il2CppRGCTXDataType)3, 7468 },
	{ (Il2CppRGCTXDataType)3, 17036 },
	{ (Il2CppRGCTXDataType)2, 640 },
	{ (Il2CppRGCTXDataType)3, 6200 },
	{ (Il2CppRGCTXDataType)2, 1168 },
	{ (Il2CppRGCTXDataType)2, 3565 },
	{ (Il2CppRGCTXDataType)3, 14646 },
	{ (Il2CppRGCTXDataType)3, 14647 },
	{ (Il2CppRGCTXDataType)2, 1776 },
	{ (Il2CppRGCTXDataType)3, 14648 },
	{ (Il2CppRGCTXDataType)2, 403 },
	{ (Il2CppRGCTXDataType)3, 11984 },
	{ (Il2CppRGCTXDataType)2, 2455 },
	{ (Il2CppRGCTXDataType)3, 11985 },
	{ (Il2CppRGCTXDataType)3, 7459 },
	{ (Il2CppRGCTXDataType)2, 708 },
	{ (Il2CppRGCTXDataType)3, 101 },
	{ (Il2CppRGCTXDataType)3, 13162 },
	{ (Il2CppRGCTXDataType)2, 2563 },
	{ (Il2CppRGCTXDataType)3, 13176 },
	{ (Il2CppRGCTXDataType)2, 831 },
	{ (Il2CppRGCTXDataType)3, 1095 },
	{ (Il2CppRGCTXDataType)3, 13168 },
	{ (Il2CppRGCTXDataType)3, 5197 },
	{ (Il2CppRGCTXDataType)2, 510 },
	{ (Il2CppRGCTXDataType)3, 13163 },
	{ (Il2CppRGCTXDataType)2, 2559 },
	{ (Il2CppRGCTXDataType)3, 1509 },
	{ (Il2CppRGCTXDataType)2, 850 },
	{ (Il2CppRGCTXDataType)2, 1127 },
	{ (Il2CppRGCTXDataType)3, 5203 },
	{ (Il2CppRGCTXDataType)3, 13164 },
	{ (Il2CppRGCTXDataType)3, 5192 },
	{ (Il2CppRGCTXDataType)3, 5193 },
	{ (Il2CppRGCTXDataType)3, 5191 },
	{ (Il2CppRGCTXDataType)3, 5194 },
	{ (Il2CppRGCTXDataType)2, 1123 },
	{ (Il2CppRGCTXDataType)2, 3520 },
	{ (Il2CppRGCTXDataType)3, 6823 },
	{ (Il2CppRGCTXDataType)3, 5196 },
	{ (Il2CppRGCTXDataType)2, 1533 },
	{ (Il2CppRGCTXDataType)3, 5195 },
	{ (Il2CppRGCTXDataType)2, 1454 },
	{ (Il2CppRGCTXDataType)2, 3473 },
	{ (Il2CppRGCTXDataType)2, 1582 },
	{ (Il2CppRGCTXDataType)2, 1679 },
	{ (Il2CppRGCTXDataType)3, 6182 },
	{ (Il2CppRGCTXDataType)2, 1161 },
	{ (Il2CppRGCTXDataType)3, 7507 },
	{ (Il2CppRGCTXDataType)3, 7508 },
	{ (Il2CppRGCTXDataType)3, 7513 },
	{ (Il2CppRGCTXDataType)2, 1769 },
	{ (Il2CppRGCTXDataType)3, 7510 },
	{ (Il2CppRGCTXDataType)3, 19519 },
	{ (Il2CppRGCTXDataType)2, 1129 },
	{ (Il2CppRGCTXDataType)3, 5217 },
	{ (Il2CppRGCTXDataType)1, 1530 },
	{ (Il2CppRGCTXDataType)2, 3483 },
	{ (Il2CppRGCTXDataType)3, 7509 },
	{ (Il2CppRGCTXDataType)1, 3483 },
	{ (Il2CppRGCTXDataType)1, 1769 },
	{ (Il2CppRGCTXDataType)2, 3563 },
	{ (Il2CppRGCTXDataType)2, 3483 },
	{ (Il2CppRGCTXDataType)3, 7514 },
	{ (Il2CppRGCTXDataType)3, 7512 },
	{ (Il2CppRGCTXDataType)3, 7511 },
	{ (Il2CppRGCTXDataType)2, 335 },
	{ (Il2CppRGCTXDataType)3, 5227 },
	{ (Il2CppRGCTXDataType)2, 486 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	206,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	61,
	s_rgctxIndices,
	296,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
