// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from battery_state:msg/BatteryMsg.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "battery_state/msg/detail/battery_msg__struct.h"
#include "battery_state/msg/detail/battery_msg__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool battery_state__msg__battery_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("battery_state.msg._battery_msg.BatteryMsg", full_classname_dest, 41) == 0);
  }
  battery_state__msg__BatteryMsg * ros_message = _ros_message;
  {  // leds_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "leds_on");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->leds_on = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * battery_state__msg__battery_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BatteryMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("battery_state.msg._battery_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BatteryMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  battery_state__msg__BatteryMsg * ros_message = (battery_state__msg__BatteryMsg *)raw_ros_message;
  {  // leds_on
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->leds_on);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leds_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
