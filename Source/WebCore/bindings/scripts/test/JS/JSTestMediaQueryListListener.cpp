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
#include "JSTestMediaQueryListListener.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "MediaQueryListListener.h"
#include "TestMediaQueryListListener.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSTestMediaQueryListListener);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif
#if ENABLE(DFG_JIT)
#define INTRINSIC(intrinsic) , intrinsic
#else
#define INTRINSIC(intrinsic)
#endif

static const HashTableValue JSTestMediaQueryListListenerTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestMediaQueryListListenerConstructor), (intptr_t)0 THUNK_GENERATOR(0) INTRINSIC(DFG::NoIntrinsic) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) INTRINSIC(DFG::NoIntrinsic) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSTestMediaQueryListListenerTable = { 2, 1, JSTestMediaQueryListListenerTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif
#if ENABLE(DFG_JIT)
#define INTRINSIC(intrinsic) , intrinsic
#else
#define INTRINSIC(intrinsic)
#endif

static const HashTableValue JSTestMediaQueryListListenerConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) INTRINSIC(DFG::NoIntrinsic) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSTestMediaQueryListListenerConstructorTable = { 1, 0, JSTestMediaQueryListListenerConstructorTableValues, 0 };
class JSTestMediaQueryListListenerConstructor : public DOMConstructorObject {
private:
    JSTestMediaQueryListListenerConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSTestMediaQueryListListenerConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSTestMediaQueryListListenerConstructor* ptr = new (JSC::allocateCell<JSTestMediaQueryListListenerConstructor>(*exec->heap())) JSTestMediaQueryListListenerConstructor(structure, globalObject);
        ptr->finishCreation(exec, globalObject);
        return ptr;
    }

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSTestMediaQueryListListenerConstructor::s_info = { "TestMediaQueryListListenerConstructor", &DOMConstructorObject::s_info, &JSTestMediaQueryListListenerConstructorTable, 0 };

JSTestMediaQueryListListenerConstructor::JSTestMediaQueryListListenerConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSTestMediaQueryListListenerConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSTestMediaQueryListListenerPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSTestMediaQueryListListenerConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSTestMediaQueryListListenerConstructor, JSDOMWrapper>(exec, &JSTestMediaQueryListListenerConstructorTable, this, propertyName, slot);
}

bool JSTestMediaQueryListListenerConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSTestMediaQueryListListenerConstructor, JSDOMWrapper>(exec, &JSTestMediaQueryListListenerConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif
#if ENABLE(DFG_JIT)
#define INTRINSIC(intrinsic) , intrinsic
#else
#define INTRINSIC(intrinsic)
#endif

static const HashTableValue JSTestMediaQueryListListenerPrototypeTableValues[] =
{
    { "method", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsTestMediaQueryListListenerPrototypeFunctionMethod), (intptr_t)1 THUNK_GENERATOR(0) INTRINSIC(DFG::NoIntrinsic) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) INTRINSIC(DFG::NoIntrinsic) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSTestMediaQueryListListenerPrototypeTable = { 2, 1, JSTestMediaQueryListListenerPrototypeTableValues, 0 };
const ClassInfo JSTestMediaQueryListListenerPrototype::s_info = { "TestMediaQueryListListenerPrototype", &JSC::JSNonFinalObject::s_info, &JSTestMediaQueryListListenerPrototypeTable, 0 };

JSObject* JSTestMediaQueryListListenerPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSTestMediaQueryListListener>(exec, globalObject);
}

bool JSTestMediaQueryListListenerPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSTestMediaQueryListListenerPrototypeTable, this, propertyName, slot);
}

bool JSTestMediaQueryListListenerPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSTestMediaQueryListListenerPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSTestMediaQueryListListener::s_info = { "TestMediaQueryListListener", &JSDOMWrapper::s_info, &JSTestMediaQueryListListenerTable, 0 };

JSTestMediaQueryListListener::JSTestMediaQueryListListener(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<TestMediaQueryListListener> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
}

void JSTestMediaQueryListListener::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSTestMediaQueryListListener::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSTestMediaQueryListListenerPrototype::create(exec->globalData(), globalObject, JSTestMediaQueryListListenerPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

bool JSTestMediaQueryListListener::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSTestMediaQueryListListener, Base>(exec, &JSTestMediaQueryListListenerTable, this, propertyName, slot);
}

bool JSTestMediaQueryListListener::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSTestMediaQueryListListener, Base>(exec, &JSTestMediaQueryListListenerTable, this, propertyName, descriptor);
}

JSValue jsTestMediaQueryListListenerConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSTestMediaQueryListListener* domObject = static_cast<JSTestMediaQueryListListener*>(asObject(slotBase));
    return JSTestMediaQueryListListener::getConstructor(exec, domObject->globalObject());
}

JSValue JSTestMediaQueryListListener::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTestMediaQueryListListenerConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsTestMediaQueryListListenerPrototypeFunctionMethod(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSTestMediaQueryListListener::s_info))
        return throwVMTypeError(exec);
    JSTestMediaQueryListListener* castedThis = static_cast<JSTestMediaQueryListListener*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSTestMediaQueryListListener::s_info);
    TestMediaQueryListListener* imp = static_cast<TestMediaQueryListListener*>(castedThis->impl());
    RefPtr<MediaQueryListListener> listener(MediaQueryListListener::create(ScriptValue(exec->globalData(), exec->argument(0))));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->method(listener);
    return JSValue::encode(jsUndefined());
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, TestMediaQueryListListener* impl)
{
    return wrap<JSTestMediaQueryListListener>(exec, globalObject, impl);
}

TestMediaQueryListListener* toTestMediaQueryListListener(JSC::JSValue value)
{
    return value.inherits(&JSTestMediaQueryListListener::s_info) ? static_cast<JSTestMediaQueryListListener*>(asObject(value))->impl() : 0;
}

}
