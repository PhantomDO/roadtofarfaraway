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
// 0x00000015 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x00000016 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000017 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001A TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001B TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001C TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000001D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000001E System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001F System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000020 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000022 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000024 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000025 System.Single System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Single>)
extern void Enumerable_Sum_mDD75BD20F3C911C6B98B55E45061EE95A569E4B7 (void);
// 0x00000026 System.Single System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Single>)
// 0x00000027 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000028 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000029 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002A System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002B System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002C System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000002D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002F System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000030 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000031 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000032 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000033 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000034 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000035 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000036 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000037 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000038 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000039 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000043 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000044 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000045 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000046 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000047 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000048 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000049 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004A System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004D System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000004F System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000050 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000051 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000052 System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::.ctor(System.Int32)
// 0x00000053 System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::System.IDisposable.Dispose()
// 0x00000054 System.Boolean System.Linq.Enumerable/<SelectIterator>d__5`2::MoveNext()
// 0x00000055 System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::<>m__Finally1()
// 0x00000056 TResult System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000057 System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerator.Reset()
// 0x00000058 System.Object System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerator.get_Current()
// 0x00000059 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000005A System.Collections.IEnumerator System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005B System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000005C System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000005D System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000005E TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000005F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000060 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000061 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000062 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000063 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000064 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000065 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000066 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000067 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000068 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000069 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006A System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000006B System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000006C System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x0000006D TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006E System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x0000006F System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000070 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000071 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000072 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000073 System.Func`2<TElement,TElement> System.Linq.IdentityFunction`1::get_Instance()
// 0x00000074 System.Void System.Linq.IdentityFunction`1/<>c::.cctor()
// 0x00000075 System.Void System.Linq.IdentityFunction`1/<>c::.ctor()
// 0x00000076 TElement System.Linq.IdentityFunction`1/<>c::<get_Instance>b__1_0(TElement)
// 0x00000077 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000078 System.Linq.Lookup`2<TKey,TElement> System.Linq.Lookup`2::Create(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000079 System.Void System.Linq.Lookup`2::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000007A System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.Lookup`2::GetEnumerator()
// 0x0000007B System.Collections.IEnumerator System.Linq.Lookup`2::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007C System.Int32 System.Linq.Lookup`2::InternalGetHashCode(TKey)
// 0x0000007D System.Linq.Lookup`2/Grouping<TKey,TElement> System.Linq.Lookup`2::GetGrouping(TKey,System.Boolean)
// 0x0000007E System.Void System.Linq.Lookup`2::Resize()
// 0x0000007F System.Void System.Linq.Lookup`2/Grouping::Add(TElement)
// 0x00000080 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.Lookup`2/Grouping::GetEnumerator()
// 0x00000081 System.Collections.IEnumerator System.Linq.Lookup`2/Grouping::System.Collections.IEnumerable.GetEnumerator()
// 0x00000082 System.Int32 System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.get_Count()
// 0x00000083 System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.get_IsReadOnly()
// 0x00000084 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Add(TElement)
// 0x00000085 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Clear()
// 0x00000086 System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Contains(TElement)
// 0x00000087 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.CopyTo(TElement[],System.Int32)
// 0x00000088 System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Remove(TElement)
// 0x00000089 System.Int32 System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.IndexOf(TElement)
// 0x0000008A System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.Insert(System.Int32,TElement)
// 0x0000008B System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.RemoveAt(System.Int32)
// 0x0000008C TElement System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.get_Item(System.Int32)
// 0x0000008D System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.set_Item(System.Int32,TElement)
// 0x0000008E System.Void System.Linq.Lookup`2/Grouping::.ctor()
// 0x0000008F System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::.ctor(System.Int32)
// 0x00000090 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.IDisposable.Dispose()
// 0x00000091 System.Boolean System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::MoveNext()
// 0x00000092 TElement System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000093 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.IEnumerator.Reset()
// 0x00000094 System.Object System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.IEnumerator.get_Current()
// 0x00000095 System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::.ctor(System.Int32)
// 0x00000096 System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::System.IDisposable.Dispose()
// 0x00000097 System.Boolean System.Linq.Lookup`2/<GetEnumerator>d__12::MoveNext()
// 0x00000098 System.Linq.IGrouping`2<TKey,TElement> System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.Generic.IEnumerator<System.Linq.IGrouping<TKey,TElement>>.get_Current()
// 0x00000099 System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.IEnumerator.Reset()
// 0x0000009A System.Object System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.IEnumerator.get_Current()
// 0x0000009B System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x0000009C System.Boolean System.Linq.Set`1::Add(TElement)
// 0x0000009D System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x0000009E System.Void System.Linq.Set`1::Resize()
// 0x0000009F System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x000000A0 System.Void System.Linq.GroupedEnumerable`3::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x000000A1 System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.GroupedEnumerable`3::GetEnumerator()
// 0x000000A2 System.Collections.IEnumerator System.Linq.GroupedEnumerable`3::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A3 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x000000A4 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A5 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A6 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A7 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x000000A8 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x000000A9 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000AA System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000AB TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000AC System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000AD System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000AE System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000AF System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000B0 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000B1 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000B2 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000B3 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000B4 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000B5 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000B6 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000B7 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000B8 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000B9 TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000BA System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000BB System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000BC System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000BD System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000BE System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000BF System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000C0 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000C1 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000C2 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000C3 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000C4 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000C5 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000C6 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000C7 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000C8 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000C9 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000CA System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000CB System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000CC System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000CD System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000CE System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000CF System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000D0 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000D1 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000D2 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000D3 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000D4 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000D5 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000D6 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[214] = 
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
	Enumerable_Sum_mDD75BD20F3C911C6B98B55E45061EE95A569E4B7,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
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
static const int32_t s_InvokerIndices[214] = 
{
	5364,
	5364,
	5564,
	5564,
	5564,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	5438,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
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
static const Il2CppTokenRangePair s_rgctxIndices[68] = 
{
	{ 0x02000004, { 101, 4 } },
	{ 0x02000005, { 105, 9 } },
	{ 0x02000006, { 116, 7 } },
	{ 0x02000007, { 125, 10 } },
	{ 0x02000008, { 137, 11 } },
	{ 0x02000009, { 151, 9 } },
	{ 0x0200000A, { 163, 12 } },
	{ 0x0200000B, { 178, 9 } },
	{ 0x0200000C, { 187, 1 } },
	{ 0x0200000D, { 188, 2 } },
	{ 0x0200000E, { 190, 12 } },
	{ 0x0200000F, { 202, 11 } },
	{ 0x02000010, { 213, 2 } },
	{ 0x02000011, { 215, 4 } },
	{ 0x02000012, { 219, 3 } },
	{ 0x02000015, { 222, 17 } },
	{ 0x02000016, { 243, 5 } },
	{ 0x02000017, { 248, 1 } },
	{ 0x02000019, { 249, 8 } },
	{ 0x0200001B, { 257, 4 } },
	{ 0x0200001C, { 261, 3 } },
	{ 0x0200001D, { 266, 5 } },
	{ 0x0200001E, { 271, 7 } },
	{ 0x0200001F, { 278, 3 } },
	{ 0x02000020, { 281, 7 } },
	{ 0x02000021, { 288, 4 } },
	{ 0x02000022, { 292, 21 } },
	{ 0x02000024, { 313, 2 } },
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
	{ 0x06000015, { 51, 1 } },
	{ 0x06000016, { 52, 7 } },
	{ 0x06000017, { 59, 4 } },
	{ 0x06000018, { 63, 4 } },
	{ 0x06000019, { 67, 3 } },
	{ 0x0600001A, { 70, 4 } },
	{ 0x0600001B, { 74, 3 } },
	{ 0x0600001C, { 77, 3 } },
	{ 0x0600001D, { 80, 1 } },
	{ 0x0600001E, { 81, 1 } },
	{ 0x0600001F, { 82, 3 } },
	{ 0x06000020, { 85, 3 } },
	{ 0x06000021, { 88, 2 } },
	{ 0x06000022, { 90, 3 } },
	{ 0x06000023, { 93, 2 } },
	{ 0x06000024, { 95, 5 } },
	{ 0x06000026, { 100, 1 } },
	{ 0x06000036, { 114, 2 } },
	{ 0x0600003B, { 123, 2 } },
	{ 0x06000040, { 135, 2 } },
	{ 0x06000046, { 148, 3 } },
	{ 0x0600004B, { 160, 3 } },
	{ 0x06000050, { 175, 3 } },
	{ 0x06000078, { 239, 4 } },
	{ 0x060000A6, { 264, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[315] = 
{
	{ (Il2CppRGCTXDataType)2, 2713 },
	{ (Il2CppRGCTXDataType)3, 13229 },
	{ (Il2CppRGCTXDataType)2, 4510 },
	{ (Il2CppRGCTXDataType)2, 3834 },
	{ (Il2CppRGCTXDataType)3, 24867 },
	{ (Il2CppRGCTXDataType)2, 2860 },
	{ (Il2CppRGCTXDataType)2, 3841 },
	{ (Il2CppRGCTXDataType)3, 24945 },
	{ (Il2CppRGCTXDataType)2, 3836 },
	{ (Il2CppRGCTXDataType)3, 24889 },
	{ (Il2CppRGCTXDataType)2, 2714 },
	{ (Il2CppRGCTXDataType)3, 13230 },
	{ (Il2CppRGCTXDataType)2, 4538 },
	{ (Il2CppRGCTXDataType)2, 3843 },
	{ (Il2CppRGCTXDataType)3, 24967 },
	{ (Il2CppRGCTXDataType)2, 2880 },
	{ (Il2CppRGCTXDataType)2, 3851 },
	{ (Il2CppRGCTXDataType)3, 25222 },
	{ (Il2CppRGCTXDataType)2, 3847 },
	{ (Il2CppRGCTXDataType)3, 25083 },
	{ (Il2CppRGCTXDataType)3, 28888 },
	{ (Il2CppRGCTXDataType)2, 935 },
	{ (Il2CppRGCTXDataType)3, 229 },
	{ (Il2CppRGCTXDataType)2, 925 },
	{ (Il2CppRGCTXDataType)3, 76 },
	{ (Il2CppRGCTXDataType)3, 77 },
	{ (Il2CppRGCTXDataType)2, 1652 },
	{ (Il2CppRGCTXDataType)3, 9605 },
	{ (Il2CppRGCTXDataType)2, 926 },
	{ (Il2CppRGCTXDataType)3, 96 },
	{ (Il2CppRGCTXDataType)3, 97 },
	{ (Il2CppRGCTXDataType)2, 1673 },
	{ (Il2CppRGCTXDataType)3, 9616 },
	{ (Il2CppRGCTXDataType)3, 28893 },
	{ (Il2CppRGCTXDataType)2, 937 },
	{ (Il2CppRGCTXDataType)3, 252 },
	{ (Il2CppRGCTXDataType)2, 3399 },
	{ (Il2CppRGCTXDataType)3, 19997 },
	{ (Il2CppRGCTXDataType)3, 10829 },
	{ (Il2CppRGCTXDataType)3, 10840 },
	{ (Il2CppRGCTXDataType)2, 2589 },
	{ (Il2CppRGCTXDataType)2, 1858 },
	{ (Il2CppRGCTXDataType)3, 10575 },
	{ (Il2CppRGCTXDataType)3, 28835 },
	{ (Il2CppRGCTXDataType)2, 929 },
	{ (Il2CppRGCTXDataType)3, 163 },
	{ (Il2CppRGCTXDataType)2, 1098 },
	{ (Il2CppRGCTXDataType)3, 1673 },
	{ (Il2CppRGCTXDataType)3, 1674 },
	{ (Il2CppRGCTXDataType)2, 2861 },
	{ (Il2CppRGCTXDataType)3, 14126 },
	{ (Il2CppRGCTXDataType)3, 28921 },
	{ (Il2CppRGCTXDataType)2, 1249 },
	{ (Il2CppRGCTXDataType)3, 3077 },
	{ (Il2CppRGCTXDataType)2, 2058 },
	{ (Il2CppRGCTXDataType)2, 2189 },
	{ (Il2CppRGCTXDataType)3, 9614 },
	{ (Il2CppRGCTXDataType)3, 9615 },
	{ (Il2CppRGCTXDataType)3, 3078 },
	{ (Il2CppRGCTXDataType)2, 2510 },
	{ (Il2CppRGCTXDataType)2, 1895 },
	{ (Il2CppRGCTXDataType)2, 2034 },
	{ (Il2CppRGCTXDataType)2, 2181 },
	{ (Il2CppRGCTXDataType)2, 2511 },
	{ (Il2CppRGCTXDataType)2, 1896 },
	{ (Il2CppRGCTXDataType)2, 2035 },
	{ (Il2CppRGCTXDataType)2, 2182 },
	{ (Il2CppRGCTXDataType)2, 2036 },
	{ (Il2CppRGCTXDataType)2, 2183 },
	{ (Il2CppRGCTXDataType)3, 9607 },
	{ (Il2CppRGCTXDataType)2, 2512 },
	{ (Il2CppRGCTXDataType)2, 1897 },
	{ (Il2CppRGCTXDataType)2, 2037 },
	{ (Il2CppRGCTXDataType)2, 2184 },
	{ (Il2CppRGCTXDataType)2, 2038 },
	{ (Il2CppRGCTXDataType)2, 2185 },
	{ (Il2CppRGCTXDataType)3, 9608 },
	{ (Il2CppRGCTXDataType)2, 2509 },
	{ (Il2CppRGCTXDataType)2, 2033 },
	{ (Il2CppRGCTXDataType)2, 2180 },
	{ (Il2CppRGCTXDataType)2, 1423 },
	{ (Il2CppRGCTXDataType)2, 2021 },
	{ (Il2CppRGCTXDataType)2, 2022 },
	{ (Il2CppRGCTXDataType)2, 2177 },
	{ (Il2CppRGCTXDataType)3, 9604 },
	{ (Il2CppRGCTXDataType)2, 2020 },
	{ (Il2CppRGCTXDataType)2, 2176 },
	{ (Il2CppRGCTXDataType)3, 9603 },
	{ (Il2CppRGCTXDataType)2, 1894 },
	{ (Il2CppRGCTXDataType)2, 2030 },
	{ (Il2CppRGCTXDataType)2, 2031 },
	{ (Il2CppRGCTXDataType)2, 2179 },
	{ (Il2CppRGCTXDataType)3, 9606 },
	{ (Il2CppRGCTXDataType)2, 1893 },
	{ (Il2CppRGCTXDataType)3, 28807 },
	{ (Il2CppRGCTXDataType)3, 8707 },
	{ (Il2CppRGCTXDataType)2, 1518 },
	{ (Il2CppRGCTXDataType)2, 2024 },
	{ (Il2CppRGCTXDataType)2, 2178 },
	{ (Il2CppRGCTXDataType)2, 2305 },
	{ (Il2CppRGCTXDataType)3, 28862 },
	{ (Il2CppRGCTXDataType)3, 13231 },
	{ (Il2CppRGCTXDataType)3, 13233 },
	{ (Il2CppRGCTXDataType)2, 658 },
	{ (Il2CppRGCTXDataType)3, 13232 },
	{ (Il2CppRGCTXDataType)3, 13241 },
	{ (Il2CppRGCTXDataType)2, 2717 },
	{ (Il2CppRGCTXDataType)2, 3837 },
	{ (Il2CppRGCTXDataType)3, 24890 },
	{ (Il2CppRGCTXDataType)3, 13242 },
	{ (Il2CppRGCTXDataType)2, 2098 },
	{ (Il2CppRGCTXDataType)2, 2220 },
	{ (Il2CppRGCTXDataType)3, 9625 },
	{ (Il2CppRGCTXDataType)3, 28758 },
	{ (Il2CppRGCTXDataType)2, 3848 },
	{ (Il2CppRGCTXDataType)3, 25084 },
	{ (Il2CppRGCTXDataType)3, 13234 },
	{ (Il2CppRGCTXDataType)2, 2716 },
	{ (Il2CppRGCTXDataType)2, 3835 },
	{ (Il2CppRGCTXDataType)3, 24868 },
	{ (Il2CppRGCTXDataType)3, 9624 },
	{ (Il2CppRGCTXDataType)3, 13235 },
	{ (Il2CppRGCTXDataType)3, 28757 },
	{ (Il2CppRGCTXDataType)2, 3844 },
	{ (Il2CppRGCTXDataType)3, 24968 },
	{ (Il2CppRGCTXDataType)3, 13248 },
	{ (Il2CppRGCTXDataType)2, 2718 },
	{ (Il2CppRGCTXDataType)2, 3842 },
	{ (Il2CppRGCTXDataType)3, 24946 },
	{ (Il2CppRGCTXDataType)3, 14179 },
	{ (Il2CppRGCTXDataType)3, 7124 },
	{ (Il2CppRGCTXDataType)3, 9626 },
	{ (Il2CppRGCTXDataType)3, 7123 },
	{ (Il2CppRGCTXDataType)3, 13249 },
	{ (Il2CppRGCTXDataType)3, 28759 },
	{ (Il2CppRGCTXDataType)2, 3852 },
	{ (Il2CppRGCTXDataType)3, 25223 },
	{ (Il2CppRGCTXDataType)3, 13262 },
	{ (Il2CppRGCTXDataType)2, 2720 },
	{ (Il2CppRGCTXDataType)2, 3850 },
	{ (Il2CppRGCTXDataType)3, 25086 },
	{ (Il2CppRGCTXDataType)3, 13263 },
	{ (Il2CppRGCTXDataType)2, 2101 },
	{ (Il2CppRGCTXDataType)2, 2223 },
	{ (Il2CppRGCTXDataType)3, 9630 },
	{ (Il2CppRGCTXDataType)3, 9629 },
	{ (Il2CppRGCTXDataType)2, 3839 },
	{ (Il2CppRGCTXDataType)3, 24892 },
	{ (Il2CppRGCTXDataType)3, 28770 },
	{ (Il2CppRGCTXDataType)2, 3849 },
	{ (Il2CppRGCTXDataType)3, 25085 },
	{ (Il2CppRGCTXDataType)3, 13255 },
	{ (Il2CppRGCTXDataType)2, 2719 },
	{ (Il2CppRGCTXDataType)2, 3846 },
	{ (Il2CppRGCTXDataType)3, 24970 },
	{ (Il2CppRGCTXDataType)3, 9628 },
	{ (Il2CppRGCTXDataType)3, 9627 },
	{ (Il2CppRGCTXDataType)3, 13256 },
	{ (Il2CppRGCTXDataType)2, 3838 },
	{ (Il2CppRGCTXDataType)3, 24891 },
	{ (Il2CppRGCTXDataType)3, 28769 },
	{ (Il2CppRGCTXDataType)2, 3845 },
	{ (Il2CppRGCTXDataType)3, 24969 },
	{ (Il2CppRGCTXDataType)3, 13269 },
	{ (Il2CppRGCTXDataType)2, 2721 },
	{ (Il2CppRGCTXDataType)2, 3854 },
	{ (Il2CppRGCTXDataType)3, 25225 },
	{ (Il2CppRGCTXDataType)3, 14180 },
	{ (Il2CppRGCTXDataType)3, 7126 },
	{ (Il2CppRGCTXDataType)3, 9632 },
	{ (Il2CppRGCTXDataType)3, 9631 },
	{ (Il2CppRGCTXDataType)3, 7125 },
	{ (Il2CppRGCTXDataType)3, 13270 },
	{ (Il2CppRGCTXDataType)2, 3840 },
	{ (Il2CppRGCTXDataType)3, 24893 },
	{ (Il2CppRGCTXDataType)3, 28771 },
	{ (Il2CppRGCTXDataType)2, 3853 },
	{ (Il2CppRGCTXDataType)3, 25224 },
	{ (Il2CppRGCTXDataType)3, 231 },
	{ (Il2CppRGCTXDataType)2, 2090 },
	{ (Il2CppRGCTXDataType)2, 2214 },
	{ (Il2CppRGCTXDataType)3, 9884 },
	{ (Il2CppRGCTXDataType)3, 233 },
	{ (Il2CppRGCTXDataType)2, 836 },
	{ (Il2CppRGCTXDataType)2, 936 },
	{ (Il2CppRGCTXDataType)3, 230 },
	{ (Il2CppRGCTXDataType)3, 232 },
	{ (Il2CppRGCTXDataType)3, 9621 },
	{ (Il2CppRGCTXDataType)3, 9622 },
	{ (Il2CppRGCTXDataType)3, 9633 },
	{ (Il2CppRGCTXDataType)3, 255 },
	{ (Il2CppRGCTXDataType)3, 254 },
	{ (Il2CppRGCTXDataType)2, 2093 },
	{ (Il2CppRGCTXDataType)2, 2216 },
	{ (Il2CppRGCTXDataType)3, 9623 },
	{ (Il2CppRGCTXDataType)2, 2112 },
	{ (Il2CppRGCTXDataType)2, 2240 },
	{ (Il2CppRGCTXDataType)3, 257 },
	{ (Il2CppRGCTXDataType)2, 838 },
	{ (Il2CppRGCTXDataType)2, 938 },
	{ (Il2CppRGCTXDataType)3, 253 },
	{ (Il2CppRGCTXDataType)3, 256 },
	{ (Il2CppRGCTXDataType)3, 165 },
	{ (Il2CppRGCTXDataType)2, 3562 },
	{ (Il2CppRGCTXDataType)3, 22605 },
	{ (Il2CppRGCTXDataType)2, 2087 },
	{ (Il2CppRGCTXDataType)2, 2212 },
	{ (Il2CppRGCTXDataType)3, 22606 },
	{ (Il2CppRGCTXDataType)3, 167 },
	{ (Il2CppRGCTXDataType)2, 654 },
	{ (Il2CppRGCTXDataType)2, 930 },
	{ (Il2CppRGCTXDataType)3, 164 },
	{ (Il2CppRGCTXDataType)3, 166 },
	{ (Il2CppRGCTXDataType)2, 4550 },
	{ (Il2CppRGCTXDataType)2, 1424 },
	{ (Il2CppRGCTXDataType)2, 892 },
	{ (Il2CppRGCTXDataType)3, 1 },
	{ (Il2CppRGCTXDataType)2, 1682 },
	{ (Il2CppRGCTXDataType)3, 9619 },
	{ (Il2CppRGCTXDataType)2, 901 },
	{ (Il2CppRGCTXDataType)3, 10 },
	{ (Il2CppRGCTXDataType)2, 901 },
	{ (Il2CppRGCTXDataType)2, 3249 },
	{ (Il2CppRGCTXDataType)3, 18151 },
	{ (Il2CppRGCTXDataType)3, 18153 },
	{ (Il2CppRGCTXDataType)3, 10584 },
	{ (Il2CppRGCTXDataType)3, 8738 },
	{ (Il2CppRGCTXDataType)2, 1532 },
	{ (Il2CppRGCTXDataType)2, 4617 },
	{ (Il2CppRGCTXDataType)2, 932 },
	{ (Il2CppRGCTXDataType)3, 184 },
	{ (Il2CppRGCTXDataType)3, 18152 },
	{ (Il2CppRGCTXDataType)2, 543 },
	{ (Il2CppRGCTXDataType)2, 2318 },
	{ (Il2CppRGCTXDataType)3, 18154 },
	{ (Il2CppRGCTXDataType)3, 18155 },
	{ (Il2CppRGCTXDataType)2, 1859 },
	{ (Il2CppRGCTXDataType)3, 10583 },
	{ (Il2CppRGCTXDataType)2, 4601 },
	{ (Il2CppRGCTXDataType)2, 2040 },
	{ (Il2CppRGCTXDataType)2, 2186 },
	{ (Il2CppRGCTXDataType)3, 9610 },
	{ (Il2CppRGCTXDataType)3, 9611 },
	{ (Il2CppRGCTXDataType)3, 28051 },
	{ (Il2CppRGCTXDataType)2, 934 },
	{ (Il2CppRGCTXDataType)3, 216 },
	{ (Il2CppRGCTXDataType)3, 10585 },
	{ (Il2CppRGCTXDataType)3, 25455 },
	{ (Il2CppRGCTXDataType)2, 855 },
	{ (Il2CppRGCTXDataType)3, 8746 },
	{ (Il2CppRGCTXDataType)2, 1535 },
	{ (Il2CppRGCTXDataType)2, 4649 },
	{ (Il2CppRGCTXDataType)3, 22602 },
	{ (Il2CppRGCTXDataType)3, 22603 },
	{ (Il2CppRGCTXDataType)2, 2322 },
	{ (Il2CppRGCTXDataType)3, 22604 },
	{ (Il2CppRGCTXDataType)2, 580 },
	{ (Il2CppRGCTXDataType)3, 18156 },
	{ (Il2CppRGCTXDataType)2, 3251 },
	{ (Il2CppRGCTXDataType)3, 18157 },
	{ (Il2CppRGCTXDataType)3, 10576 },
	{ (Il2CppRGCTXDataType)2, 931 },
	{ (Il2CppRGCTXDataType)3, 177 },
	{ (Il2CppRGCTXDataType)3, 19984 },
	{ (Il2CppRGCTXDataType)2, 3400 },
	{ (Il2CppRGCTXDataType)3, 19998 },
	{ (Il2CppRGCTXDataType)2, 1099 },
	{ (Il2CppRGCTXDataType)3, 1675 },
	{ (Il2CppRGCTXDataType)3, 19990 },
	{ (Il2CppRGCTXDataType)3, 7094 },
	{ (Il2CppRGCTXDataType)2, 700 },
	{ (Il2CppRGCTXDataType)3, 19985 },
	{ (Il2CppRGCTXDataType)2, 3396 },
	{ (Il2CppRGCTXDataType)3, 2095 },
	{ (Il2CppRGCTXDataType)2, 1118 },
	{ (Il2CppRGCTXDataType)2, 1479 },
	{ (Il2CppRGCTXDataType)3, 7100 },
	{ (Il2CppRGCTXDataType)3, 19986 },
	{ (Il2CppRGCTXDataType)3, 7089 },
	{ (Il2CppRGCTXDataType)3, 7090 },
	{ (Il2CppRGCTXDataType)3, 7088 },
	{ (Il2CppRGCTXDataType)3, 7091 },
	{ (Il2CppRGCTXDataType)2, 1475 },
	{ (Il2CppRGCTXDataType)2, 4599 },
	{ (Il2CppRGCTXDataType)3, 9618 },
	{ (Il2CppRGCTXDataType)3, 7093 },
	{ (Il2CppRGCTXDataType)2, 1996 },
	{ (Il2CppRGCTXDataType)3, 7092 },
	{ (Il2CppRGCTXDataType)2, 1899 },
	{ (Il2CppRGCTXDataType)2, 4542 },
	{ (Il2CppRGCTXDataType)2, 2059 },
	{ (Il2CppRGCTXDataType)2, 2190 },
	{ (Il2CppRGCTXDataType)3, 8726 },
	{ (Il2CppRGCTXDataType)2, 1527 },
	{ (Il2CppRGCTXDataType)3, 10624 },
	{ (Il2CppRGCTXDataType)3, 10625 },
	{ (Il2CppRGCTXDataType)3, 10630 },
	{ (Il2CppRGCTXDataType)2, 2314 },
	{ (Il2CppRGCTXDataType)3, 10627 },
	{ (Il2CppRGCTXDataType)3, 29545 },
	{ (Il2CppRGCTXDataType)2, 1481 },
	{ (Il2CppRGCTXDataType)3, 7114 },
	{ (Il2CppRGCTXDataType)1, 1991 },
	{ (Il2CppRGCTXDataType)2, 4556 },
	{ (Il2CppRGCTXDataType)3, 10626 },
	{ (Il2CppRGCTXDataType)1, 4556 },
	{ (Il2CppRGCTXDataType)1, 2314 },
	{ (Il2CppRGCTXDataType)2, 4647 },
	{ (Il2CppRGCTXDataType)2, 4556 },
	{ (Il2CppRGCTXDataType)3, 10631 },
	{ (Il2CppRGCTXDataType)3, 10629 },
	{ (Il2CppRGCTXDataType)3, 10628 },
	{ (Il2CppRGCTXDataType)2, 497 },
	{ (Il2CppRGCTXDataType)3, 7127 },
	{ (Il2CppRGCTXDataType)2, 670 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	214,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	68,
	s_rgctxIndices,
	315,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
