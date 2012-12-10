/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSInt8Array.h"

#include "Lookup.h"
#include "GlobalDataHelper.h"

#include "JSInt8Array.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>
#include <wtf/Int8Array.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSInt8Array);
/* Hash table */

static const HashTableValue JSInt8ArrayTableValues[] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsInt8ArrayLength), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsInt8ArrayConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSInt8ArrayTable = { 5, 3, JSInt8ArrayTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSInt8ArrayConstructorTableValues[] =
{
    { "BYTES_PER_ELEMENT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsInt8ArrayBYTES_PER_ELEMENT), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSInt8ArrayConstructorTable = { 2, 1, JSInt8ArrayConstructorTableValues, 0 };
const ClassInfo JSInt8ArrayConstructor::s_info = { "Int8ArrayConstructor", &Base::s_info, &JSInt8ArrayConstructorTable, 0, CREATE_METHOD_TABLE(JSInt8ArrayConstructor) };

JSInt8ArrayConstructor::JSInt8ArrayConstructor(Structure* structure, JSGlobalObject* globalObject)
    : InternalFunction(globalObject, structure)
{
}

void JSInt8ArrayConstructor::finishCreation(ExecState* exec, JSGlobalObject* globalObject)
{
	JSC::JSObject * proto = JSInt8ArrayPrototype::self(exec, globalObject);
    Base::finishCreation(exec->globalData(), Identifier(exec, proto->classInfo()->className));
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, proto, DontDelete | ReadOnly);
	putDirect(exec->globalData(), exec->propertyNames().length, jsNumber(1), ReadOnly | DontDelete | DontEnum);
}

bool JSInt8ArrayConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
	return getStaticFunctionSlot<InternalFunction>(exec, &JSInt8ArrayConstructorTable, jsCast<JSInt8ArrayConstructor*>(cell), propertyName, slot);
}

bool JSInt8ArrayConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
	return getStaticFunctionDescriptor<InternalFunction>(exec, &JSInt8ArrayConstructorTable, jsCast<JSInt8ArrayConstructor*>(object), propertyName, descriptor);
}

ConstructType JSInt8ArrayConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSInt8Array;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSInt8ArrayPrototypeTableValues[] =
{
    { "BYTES_PER_ELEMENT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsInt8ArrayBYTES_PER_ELEMENT), (intptr_t)0, NoIntrinsic },
    { "subarray", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsInt8ArrayPrototypeFunctionSubarray), (intptr_t)2, NoIntrinsic },
    { "set", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsInt8ArrayPrototypeFunctionSet), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSInt8ArrayPrototypeTable = { 8, 7, JSInt8ArrayPrototypeTableValues, 0 };
static const HashTable* getJSInt8ArrayPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSInt8ArrayPrototypeTable);
}

const ClassInfo JSInt8ArrayPrototype::s_info = { "Int8ArrayPrototype", &Base::s_info, 0, getJSInt8ArrayPrototypeTable, CREATE_METHOD_TABLE(JSInt8ArrayPrototype) };

JSObject* JSInt8ArrayPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSInt8ArrayPrototype>(exec, globalObject);
}

bool JSInt8ArrayPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    JSInt8ArrayPrototype* thisObject = jsCast<JSInt8ArrayPrototype*>(cell);
    return getStaticPropertySlot<JSInt8ArrayPrototype, JSObject>(exec, getJSInt8ArrayPrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSInt8ArrayPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    JSInt8ArrayPrototype* thisObject = jsCast<JSInt8ArrayPrototype*>(object);
    return getStaticPropertyDescriptor<JSInt8ArrayPrototype, JSObject>(exec, getJSInt8ArrayPrototypeTable(exec), thisObject, propertyName, descriptor);
}

static const HashTable* getJSInt8ArrayTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSInt8ArrayTable);
}

const ClassInfo JSInt8Array::s_info = { "Int8Array", &Base::s_info, 0, getJSInt8ArrayTable , CREATE_METHOD_TABLE(JSInt8Array) };

JSInt8Array::JSInt8Array(Structure* structure, JSGlobalObject* globalObject, PassRefPtr<Int8Array> impl)
    : JSArrayBufferView(structure, globalObject, impl)
{
}

void JSInt8Array::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    TypedArrayDescriptor descriptor(&JSInt8Array::s_info, OBJECT_OFFSETOF(JSInt8Array, m_storage), OBJECT_OFFSETOF(JSInt8Array, m_storageLength));
    globalData.registerTypedArrayDescriptor(impl(), descriptor);
    m_storage = impl()->data();
    m_storageLength = impl()->length();
    ASSERT(inherits(&s_info));
}

JSObject* JSInt8Array::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSInt8ArrayPrototype::create(exec->globalData(), globalObject, JSInt8ArrayPrototype::createStructure(exec->globalData(), globalObject, JSArrayBufferViewPrototype::self(exec, globalObject)));
}

bool JSInt8Array::getOwnPropertySlot(JSCell* cell, ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    JSInt8Array* thisObject = jsCast<JSInt8Array*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<Int8Array*>(thisObject->impl())->length()) {
        slot.setValue(thisObject->getByIndex(exec, index));
        return true;
    }
    return getStaticValueSlot<JSInt8Array, Base>(exec, getJSInt8ArrayTable(exec), thisObject, propertyName, slot);
}

bool JSInt8Array::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    JSInt8Array* thisObject = jsCast<JSInt8Array*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok && index < static_cast<Int8Array*>(thisObject->impl())->length()) {
        descriptor.setDescriptor(thisObject->getByIndex(exec, index), DontDelete);
        return true;
    }
    return getStaticValueDescriptor<JSInt8Array, Base>(exec, getJSInt8ArrayTable(exec), thisObject, propertyName, descriptor);
}

bool JSInt8Array::getOwnPropertySlotByIndex(JSCell* cell, ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    JSInt8Array* thisObject = jsCast<JSInt8Array*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    if (propertyName < static_cast<Int8Array*>(thisObject->impl())->length()) {
        slot.setValue(thisObject->getByIndex(exec, propertyName));
        return true;
    }
    return thisObject->methodTable()->getOwnPropertySlot(thisObject, exec, Identifier::from(exec, propertyName), slot);
}

JSValue jsInt8ArrayLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSInt8Array* castedThis = jsCast<JSInt8Array*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Int8Array* impl = static_cast<Int8Array*>(castedThis->impl());
    JSValue result = jsNumber(impl->length());
    return result;
}


JSValue jsInt8ArrayConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSInt8Array* domObject = jsCast<JSInt8Array*>(asObject(slotBase));
    return JSInt8Array::getConstructor(exec, domObject->globalObject());
}

void JSInt8Array::put(JSCell* cell, ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    JSInt8Array* thisObject = jsCast<JSInt8Array*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    bool ok;
    unsigned index = propertyName.toUInt32(ok);
    if (ok) {
        thisObject->indexSetter(exec, index, value);
        return;
    }
    Base::put(thisObject, exec, propertyName, value, slot);
}

void JSInt8Array::putByIndex(JSCell* cell, ExecState* exec, unsigned propertyName, JSValue value, bool)
{
    JSInt8Array* thisObject = jsCast<JSInt8Array*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    thisObject->indexSetter(exec, propertyName, value);
    return;
}

void JSInt8Array::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    JSInt8Array* thisObject = jsCast<JSInt8Array*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    for (unsigned i = 0; i < static_cast<Int8Array*>(thisObject->impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

JSValue JSInt8Array::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSInt8ArrayConstructor>(exec, jsCast<JSGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsInt8ArrayPrototypeFunctionSubarray(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSInt8Array::s_info))
        return throwVMTypeError(exec);
    JSInt8Array* castedThis = jsCast<JSInt8Array*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSInt8Array::s_info);
    Int8Array* impl = static_cast<Int8Array*>(castedThis->impl());
    int start(MAYBE_MISSING_PARAMETER(exec, 0, DefaultIsUndefined).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 1) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->subarray(start)));
        return JSValue::encode(result);
    }

    int end(MAYBE_MISSING_PARAMETER(exec, 1, DefaultIsUndefined).toInt32(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->subarray(start, end)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsInt8ArrayPrototypeFunctionSet(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSInt8Array::s_info))
        return throwVMTypeError(exec);
    JSInt8Array* castedThis = jsCast<JSInt8Array*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSInt8Array::s_info);
    return JSValue::encode(castedThis->set(exec));
}

// Constant getters

JSValue jsInt8ArrayBYTES_PER_ELEMENT(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}


JSValue JSInt8Array::getByIndex(ExecState*, unsigned index)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    double result = static_cast<Int8Array*>(impl())->item(index);
    if (isnan(result))
        return jsNaN();
    return JSValue(result);
}

Int8Array* toInt8Array(JSC::JSValue value)
{
    return value.inherits(&JSInt8Array::s_info) ? jsCast<JSInt8Array*>(asObject(value))->impl() : 0;
}

}