// Author  : Lewis Ward
// Program : 3D Render Engine
// Date    : 06/02/2016
#pragma once
#include "Texture.h"
#include <vector>

//----------------------------------------------------------------------------------------------------------------------
/// \brief  Vertex with just position and normal
//----------------------------------------------------------------------------------------------------------------------
struct vertexNormal
{
	glm::vec3 v; ///< Vertex
	glm::vec3 n; ///< Normal
};

//----------------------------------------------------------------------------------------------------------------------
/// \brief  Vertex with just position and UV
//----------------------------------------------------------------------------------------------------------------------
struct vertexUV
{
	glm::vec3 v; ///< Vertex
	glm::vec2 u; ///< Texture coordinates (UV)
};

//----------------------------------------------------------------------------------------------------------------------
/// \brief  Vertex with just position, normal and UV
//----------------------------------------------------------------------------------------------------------------------
struct vertexNormalUV
{
	glm::vec3 v; ///< Vertex
	glm::vec3 n; ///< Normal
	glm::vec2 u; ///< Texture coordinates (UV)
};

//----------------------------------------------------------------------------------------------------------------------
/// \brief  Vertex with position, normal, bi-normal, tagent and UV
//----------------------------------------------------------------------------------------------------------------------
struct vertex
{
	glm::vec3 v; ///< Vertex
	glm::vec3 n; ///< Normal
	glm::vec3 b; ///< Bi-Normal
	glm::vec3 t; ///< Tangent
	glm::vec2 u; ///< Texture coordinates (UV)
};

namespace gl
{
	//----------------------------------------------------------------------------------------------------------------------
	/// \brief  Vertex Buffer - Vertex/Normal/UV
	//----------------------------------------------------------------------------------------------------------------------
	class VertexBuffer
	{
	public:

		//----------------------------------------------------------------------------------------------------------------------
		/// \brief  Constructor
		/// \parma	std::vector vertexNormalUV vertices
		/// \parma	std::vector int indices
		//----------------------------------------------------------------------------------------------------------------------
		VertexBuffer(const std::vector<vertexNormalUV>& vertices, const std::vector<int>& indices);

		//----------------------------------------------------------------------------------------------------------------------
		/// \brief  Destructor
		//----------------------------------------------------------------------------------------------------------------------
		~VertexBuffer();

		//----------------------------------------------------------------------------------------------------------------------
		/// \brief  get the VBO id
		/// \return uint32_t 
		//----------------------------------------------------------------------------------------------------------------------
		inline uint32_t getVBO() { return m_vbo; }

		//----------------------------------------------------------------------------------------------------------------------
		/// \brief  get the IBO id
		/// \return uint32_t 
		//----------------------------------------------------------------------------------------------------------------------
		inline uint32_t getIBO() { return m_ibo; }

	private:
		uint32_t m_vbo; ///< Vertex Buffer Object
		uint32_t m_ibo; ///< Index Buffer Object
	};
}; ///< end of namespace
