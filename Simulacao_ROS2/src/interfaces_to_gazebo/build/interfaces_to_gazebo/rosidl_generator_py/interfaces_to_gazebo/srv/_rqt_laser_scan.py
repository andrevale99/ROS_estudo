# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces_to_gazebo:srv/RqtLaserScan.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RqtLaserScan_Request(type):
    """Metaclass of message 'RqtLaserScan_Request'."""

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
            module = import_type_support('interfaces_to_gazebo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces_to_gazebo.srv.RqtLaserScan_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rqt_laser_scan__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rqt_laser_scan__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rqt_laser_scan__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rqt_laser_scan__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rqt_laser_scan__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RqtLaserScan_Request(metaclass=Metaclass_RqtLaserScan_Request):
    """Message class 'RqtLaserScan_Request'."""

    __slots__ = [
        '_who',
    ]

    _fields_and_field_types = {
        'who': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.who = kwargs.get('who', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.who != other.who:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def who(self):
        """Message field 'who'."""
        return self._who

    @who.setter
    def who(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'who' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'who' field must be an integer in [-2147483648, 2147483647]"
        self._who = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_RqtLaserScan_Response(type):
    """Metaclass of message 'RqtLaserScan_Response'."""

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
            module = import_type_support('interfaces_to_gazebo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces_to_gazebo.srv.RqtLaserScan_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rqt_laser_scan__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rqt_laser_scan__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rqt_laser_scan__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rqt_laser_scan__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rqt_laser_scan__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RqtLaserScan_Response(metaclass=Metaclass_RqtLaserScan_Response):
    """Message class 'RqtLaserScan_Response'."""

    __slots__ = [
        '_range',
    ]

    _fields_and_field_types = {
        'range': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.range = kwargs.get('range', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.range != other.range:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def range(self):  # noqa: A003
        """Message field 'range'."""
        return self._range

    @range.setter  # noqa: A003
    def range(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._range = value


class Metaclass_RqtLaserScan(type):
    """Metaclass of service 'RqtLaserScan'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaces_to_gazebo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces_to_gazebo.srv.RqtLaserScan')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__rqt_laser_scan

            from interfaces_to_gazebo.srv import _rqt_laser_scan
            if _rqt_laser_scan.Metaclass_RqtLaserScan_Request._TYPE_SUPPORT is None:
                _rqt_laser_scan.Metaclass_RqtLaserScan_Request.__import_type_support__()
            if _rqt_laser_scan.Metaclass_RqtLaserScan_Response._TYPE_SUPPORT is None:
                _rqt_laser_scan.Metaclass_RqtLaserScan_Response.__import_type_support__()


class RqtLaserScan(metaclass=Metaclass_RqtLaserScan):
    from interfaces_to_gazebo.srv._rqt_laser_scan import RqtLaserScan_Request as Request
    from interfaces_to_gazebo.srv._rqt_laser_scan import RqtLaserScan_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
