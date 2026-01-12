# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fleetmanager_interfaces:msg/MapRequest.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MapRequest(type):
    """Metaclass of message 'MapRequest'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'fleetmanager_interfaces.msg.MapRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__map_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__map_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__map_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__map_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__map_request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MapRequest(metaclass=Metaclass_MapRequest):
    """Message class 'MapRequest'."""

    __slots__ = [
        '_loc_x',
        '_loc_y',
        '_level',
        '_radius',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'loc_x': 'uint32',
        'loc_y': 'uint32',
        'level': 'uint32',
        'radius': 'uint32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.loc_x = kwargs.get('loc_x', int())
        self.loc_y = kwargs.get('loc_y', int())
        self.level = kwargs.get('level', int())
        self.radius = kwargs.get('radius', int())

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
        if self.loc_x != other.loc_x:
            return False
        if self.loc_y != other.loc_y:
            return False
        if self.level != other.level:
            return False
        if self.radius != other.radius:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def loc_x(self):
        """Message field 'loc_x'."""
        return self._loc_x

    @loc_x.setter
    def loc_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'loc_x' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'loc_x' field must be an unsigned integer in [0, 4294967295]"
        self._loc_x = value

    @builtins.property
    def loc_y(self):
        """Message field 'loc_y'."""
        return self._loc_y

    @loc_y.setter
    def loc_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'loc_y' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'loc_y' field must be an unsigned integer in [0, 4294967295]"
        self._loc_y = value

    @builtins.property
    def level(self):
        """Message field 'level'."""
        return self._level

    @level.setter
    def level(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'level' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'level' field must be an unsigned integer in [0, 4294967295]"
        self._level = value

    @builtins.property
    def radius(self):
        """Message field 'radius'."""
        return self._radius

    @radius.setter
    def radius(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'radius' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'radius' field must be an unsigned integer in [0, 4294967295]"
        self._radius = value
