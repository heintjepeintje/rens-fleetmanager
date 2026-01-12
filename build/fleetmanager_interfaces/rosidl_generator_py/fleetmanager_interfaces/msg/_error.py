# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fleetmanager_interfaces:msg/Error.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Error(type):
    """Metaclass of message 'Error'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SEVERITY_INFO': 1,
        'SEVERITY_WARNING': 2,
        'SEVERITY_ERROR': 3,
        'SEVERITY_FATAL': 4,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('fleetmanager_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fleetmanager_interfaces.msg.Error')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__error
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__error
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__error
            cls._TYPE_SUPPORT = module.type_support_msg__msg__error
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__error

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SEVERITY_INFO': cls.__constants['SEVERITY_INFO'],
            'SEVERITY_WARNING': cls.__constants['SEVERITY_WARNING'],
            'SEVERITY_ERROR': cls.__constants['SEVERITY_ERROR'],
            'SEVERITY_FATAL': cls.__constants['SEVERITY_FATAL'],
        }

    @property
    def SEVERITY_INFO(self):
        """Message constant 'SEVERITY_INFO'."""
        return Metaclass_Error.__constants['SEVERITY_INFO']

    @property
    def SEVERITY_WARNING(self):
        """Message constant 'SEVERITY_WARNING'."""
        return Metaclass_Error.__constants['SEVERITY_WARNING']

    @property
    def SEVERITY_ERROR(self):
        """Message constant 'SEVERITY_ERROR'."""
        return Metaclass_Error.__constants['SEVERITY_ERROR']

    @property
    def SEVERITY_FATAL(self):
        """Message constant 'SEVERITY_FATAL'."""
        return Metaclass_Error.__constants['SEVERITY_FATAL']


class Error(metaclass=Metaclass_Error):
    """
    Message class 'Error'.

    Constants:
      SEVERITY_INFO
      SEVERITY_WARNING
      SEVERITY_ERROR
      SEVERITY_FATAL
    """

    __slots__ = [
        '_severity',
        '_timepoint',
        '_description',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'severity': 'uint32',
        'timepoint': 'uint64',
        'description': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.severity = kwargs.get('severity', int())
        self.timepoint = kwargs.get('timepoint', int())
        self.description = kwargs.get('description', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.severity != other.severity:
            return False
        if self.timepoint != other.timepoint:
            return False
        if self.description != other.description:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def severity(self):
        """Message field 'severity'."""
        return self._severity

    @severity.setter
    def severity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'severity' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'severity' field must be an unsigned integer in [0, 4294967295]"
        self._severity = value

    @builtins.property
    def timepoint(self):
        """Message field 'timepoint'."""
        return self._timepoint

    @timepoint.setter
    def timepoint(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'timepoint' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timepoint' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timepoint = value

    @builtins.property
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'description' field must be of type 'str'"
        self._description = value
