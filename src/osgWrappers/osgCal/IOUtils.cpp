// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osgCal/IOUtils>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_VALUE_REFLECTOR(osgCal::VBOs)
	I_ConstructorWithDefaults2(IN, int, maxVertices, OSGCAL_MAX_VERTEX_PER_MODEL, IN, int, maxFaces, OSGCAL_MAX_VERTEX_PER_MODEL *3);
	I_PublicMemberProperty(int, vertexCount);
	I_PublicMemberProperty(int, faceCount);
	I_PublicMemberProperty(osg::ref_ptr< osgCal::VertexBuffer >, vertexBuffer);
	I_PublicMemberProperty(osg::ref_ptr< osgCal::WeightBuffer >, weightBuffer);
	I_PublicMemberProperty(osg::ref_ptr< osgCal::MatrixIndexBuffer >, matrixIndexBuffer);
	I_PublicMemberProperty(osg::ref_ptr< osgCal::NormalBuffer >, normalBuffer);
	I_PublicMemberProperty(osg::ref_ptr< osgCal::TangentBuffer >, tangentBuffer);
	I_PublicMemberProperty(osg::ref_ptr< osgCal::BinormalBuffer >, binormalBuffer);
	I_PublicMemberProperty(osg::ref_ptr< osgCal::TexCoordBuffer >, texCoordBuffer);
	I_PublicMemberProperty(osg::ref_ptr< osgCal::IndexBuffer >, indexBuffer);
END_REFLECTOR

TYPE_NAME_ALIAS(osg::Vec3Array, osgCal::VertexBuffer);

TYPE_NAME_ALIAS(osg::Vec4Array, osgCal::WeightBuffer);

TYPE_NAME_ALIAS(osg::Vec4sArray, osgCal::MatrixIndexBuffer);

TYPE_NAME_ALIAS(osg::Vec3Array, osgCal::NormalBuffer);

TYPE_NAME_ALIAS(osg::Vec3Array, osgCal::TangentBuffer);

TYPE_NAME_ALIAS(osg::Vec3Array, osgCal::BinormalBuffer);

TYPE_NAME_ALIAS(osg::Vec2Array, osgCal::TexCoordBuffer);

TYPE_NAME_ALIAS(osg::UIntArray, osgCal::IndexBuffer);

