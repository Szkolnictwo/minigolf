#pragma once
/*
    #version:1# (machine generated, don't edit!)

    Generated by sokol-shdc (https://github.com/floooh/sokol-tools)

    Overview:

        Shader program 'pass_through':
            Get shader desc: pass_through_shader_desc()
            Vertex shader: pass_through_vs
                Attribute slots:
                    ATTR_pass_through_vs_position = 0
                Uniform block 'pass_through_vs_params':
                    C struct: pass_through_vs_params_t
                    Bind slot: SLOT_pass_through_vs_params = 0
            Fragment shader: pass_through_fs


    Shader descriptor structs:

        sg_shader pass_through = sg_make_shader(pass_through_shader_desc());

    Vertex attribute locations for vertex shader 'pass_through_vs':

        sg_pipeline pip = sg_make_pipeline(&(sg_pipeline_desc){
            .layout = {
                .attrs = {
                    [ATTR_pass_through_vs_position] = { ... },
                },
            },
            ...});

    Image bind slots, use as index in sg_bindings.vs_images[] or .fs_images[]


    Bind slot and C-struct for uniform block 'pass_through_vs_params':

        pass_through_vs_params_t pass_through_vs_params = {
            .mvp_mat = ...;
        };
        sg_apply_uniforms(SG_SHADERSTAGE_[VS|FS], SLOT_pass_through_vs_params, &pass_through_vs_params, sizeof(pass_through_vs_params));

*/
#include <stdint.h>
#include <stdbool.h>
#if !defined(SOKOL_SHDC_ALIGN)
  #if defined(_MSC_VER)
    #define SOKOL_SHDC_ALIGN(a) __declspec(align(a))
  #else
    #define SOKOL_SHDC_ALIGN(a) __attribute__((aligned(a)))
  #endif
#endif
#define ATTR_pass_through_vs_position (0)
#define SLOT_pass_through_vs_params (0)
#pragma pack(push,1)
SOKOL_SHDC_ALIGN(16) typedef struct pass_through_vs_params_t {
    mat4 mvp_mat;
} pass_through_vs_params_t;
#pragma pack(pop)
#if defined(SOKOL_GLCORE33)
/*
    #version 330
    
    uniform vec4 pass_through_vs_params[4];
    layout(location = 0) in vec3 position;
    
    void main()
    {
        gl_Position = mat4(pass_through_vs_params[0], pass_through_vs_params[1], pass_through_vs_params[2], pass_through_vs_params[3]) * vec4(position, 1.0);
    }
    
*/
static const char pass_through_vs_source_glsl330[266] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x33,0x33,0x30,0x0a,0x0a,0x75,0x6e,
    0x69,0x66,0x6f,0x72,0x6d,0x20,0x76,0x65,0x63,0x34,0x20,0x70,0x61,0x73,0x73,0x5f,
    0x74,0x68,0x72,0x6f,0x75,0x67,0x68,0x5f,0x76,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,
    0x73,0x5b,0x34,0x5d,0x3b,0x0a,0x6c,0x61,0x79,0x6f,0x75,0x74,0x28,0x6c,0x6f,0x63,
    0x61,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x30,0x29,0x20,0x69,0x6e,0x20,0x76,0x65,
    0x63,0x33,0x20,0x70,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x3b,0x0a,0x0a,0x76,0x6f,
    0x69,0x64,0x20,0x6d,0x61,0x69,0x6e,0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,
    0x67,0x6c,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x6d,0x61,
    0x74,0x34,0x28,0x70,0x61,0x73,0x73,0x5f,0x74,0x68,0x72,0x6f,0x75,0x67,0x68,0x5f,
    0x76,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x30,0x5d,0x2c,0x20,0x70,0x61,
    0x73,0x73,0x5f,0x74,0x68,0x72,0x6f,0x75,0x67,0x68,0x5f,0x76,0x73,0x5f,0x70,0x61,
    0x72,0x61,0x6d,0x73,0x5b,0x31,0x5d,0x2c,0x20,0x70,0x61,0x73,0x73,0x5f,0x74,0x68,
    0x72,0x6f,0x75,0x67,0x68,0x5f,0x76,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,
    0x32,0x5d,0x2c,0x20,0x70,0x61,0x73,0x73,0x5f,0x74,0x68,0x72,0x6f,0x75,0x67,0x68,
    0x5f,0x76,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x33,0x5d,0x29,0x20,0x2a,
    0x20,0x76,0x65,0x63,0x34,0x28,0x70,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x2c,0x20,
    0x31,0x2e,0x30,0x29,0x3b,0x0a,0x7d,0x0a,0x0a,0x00,
};
/*
    #version 330
    
    layout(location = 0) out vec4 g_frag_color;
    
    void main()
    {
        g_frag_color = vec4(1.0);
    }
    
*/
static const char pass_through_fs_source_glsl330[107] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x33,0x33,0x30,0x0a,0x0a,0x6c,0x61,
    0x79,0x6f,0x75,0x74,0x28,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,
    0x30,0x29,0x20,0x6f,0x75,0x74,0x20,0x76,0x65,0x63,0x34,0x20,0x67,0x5f,0x66,0x72,
    0x61,0x67,0x5f,0x63,0x6f,0x6c,0x6f,0x72,0x3b,0x0a,0x0a,0x76,0x6f,0x69,0x64,0x20,
    0x6d,0x61,0x69,0x6e,0x28,0x29,0x0a,0x7b,0x0a,0x20,0x20,0x20,0x20,0x67,0x5f,0x66,
    0x72,0x61,0x67,0x5f,0x63,0x6f,0x6c,0x6f,0x72,0x20,0x3d,0x20,0x76,0x65,0x63,0x34,
    0x28,0x31,0x2e,0x30,0x29,0x3b,0x0a,0x7d,0x0a,0x0a,0x00,
};
#endif /* SOKOL_GLCORE33 */
#if defined(SOKOL_GLES3)
/*
    #version 300 es
    
    uniform vec4 pass_through_vs_params[4];
    layout(location = 0) in vec3 position;
    
    void main()
    {
        gl_Position = mat4(pass_through_vs_params[0], pass_through_vs_params[1], pass_through_vs_params[2], pass_through_vs_params[3]) * vec4(position, 1.0);
    }
    
*/
static const char pass_through_vs_source_glsl300es[269] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x33,0x30,0x30,0x20,0x65,0x73,0x0a,
    0x0a,0x75,0x6e,0x69,0x66,0x6f,0x72,0x6d,0x20,0x76,0x65,0x63,0x34,0x20,0x70,0x61,
    0x73,0x73,0x5f,0x74,0x68,0x72,0x6f,0x75,0x67,0x68,0x5f,0x76,0x73,0x5f,0x70,0x61,
    0x72,0x61,0x6d,0x73,0x5b,0x34,0x5d,0x3b,0x0a,0x6c,0x61,0x79,0x6f,0x75,0x74,0x28,
    0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x3d,0x20,0x30,0x29,0x20,0x69,0x6e,
    0x20,0x76,0x65,0x63,0x33,0x20,0x70,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x3b,0x0a,
    0x0a,0x76,0x6f,0x69,0x64,0x20,0x6d,0x61,0x69,0x6e,0x28,0x29,0x0a,0x7b,0x0a,0x20,
    0x20,0x20,0x20,0x67,0x6c,0x5f,0x50,0x6f,0x73,0x69,0x74,0x69,0x6f,0x6e,0x20,0x3d,
    0x20,0x6d,0x61,0x74,0x34,0x28,0x70,0x61,0x73,0x73,0x5f,0x74,0x68,0x72,0x6f,0x75,
    0x67,0x68,0x5f,0x76,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x30,0x5d,0x2c,
    0x20,0x70,0x61,0x73,0x73,0x5f,0x74,0x68,0x72,0x6f,0x75,0x67,0x68,0x5f,0x76,0x73,
    0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x31,0x5d,0x2c,0x20,0x70,0x61,0x73,0x73,
    0x5f,0x74,0x68,0x72,0x6f,0x75,0x67,0x68,0x5f,0x76,0x73,0x5f,0x70,0x61,0x72,0x61,
    0x6d,0x73,0x5b,0x32,0x5d,0x2c,0x20,0x70,0x61,0x73,0x73,0x5f,0x74,0x68,0x72,0x6f,
    0x75,0x67,0x68,0x5f,0x76,0x73,0x5f,0x70,0x61,0x72,0x61,0x6d,0x73,0x5b,0x33,0x5d,
    0x29,0x20,0x2a,0x20,0x76,0x65,0x63,0x34,0x28,0x70,0x6f,0x73,0x69,0x74,0x69,0x6f,
    0x6e,0x2c,0x20,0x31,0x2e,0x30,0x29,0x3b,0x0a,0x7d,0x0a,0x0a,0x00,
};
/*
    #version 300 es
    precision mediump float;
    precision highp int;
    
    layout(location = 0) out highp vec4 g_frag_color;
    
    void main()
    {
        g_frag_color = vec4(1.0);
    }
    
*/
static const char pass_through_fs_source_glsl300es[162] = {
    0x23,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x20,0x33,0x30,0x30,0x20,0x65,0x73,0x0a,
    0x70,0x72,0x65,0x63,0x69,0x73,0x69,0x6f,0x6e,0x20,0x6d,0x65,0x64,0x69,0x75,0x6d,
    0x70,0x20,0x66,0x6c,0x6f,0x61,0x74,0x3b,0x0a,0x70,0x72,0x65,0x63,0x69,0x73,0x69,
    0x6f,0x6e,0x20,0x68,0x69,0x67,0x68,0x70,0x20,0x69,0x6e,0x74,0x3b,0x0a,0x0a,0x6c,
    0x61,0x79,0x6f,0x75,0x74,0x28,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x3d,
    0x20,0x30,0x29,0x20,0x6f,0x75,0x74,0x20,0x68,0x69,0x67,0x68,0x70,0x20,0x76,0x65,
    0x63,0x34,0x20,0x67,0x5f,0x66,0x72,0x61,0x67,0x5f,0x63,0x6f,0x6c,0x6f,0x72,0x3b,
    0x0a,0x0a,0x76,0x6f,0x69,0x64,0x20,0x6d,0x61,0x69,0x6e,0x28,0x29,0x0a,0x7b,0x0a,
    0x20,0x20,0x20,0x20,0x67,0x5f,0x66,0x72,0x61,0x67,0x5f,0x63,0x6f,0x6c,0x6f,0x72,
    0x20,0x3d,0x20,0x76,0x65,0x63,0x34,0x28,0x31,0x2e,0x30,0x29,0x3b,0x0a,0x7d,0x0a,
    0x0a,0x00,
};
#endif /* SOKOL_GLES3 */
#if !defined(SOKOL_GFX_INCLUDED)
  #error "Please include sokol_gfx.h before pass_through.h"
#endif
static inline const sg_shader_desc* pass_through_shader_desc(void) {
  #if defined(SOKOL_GLCORE33)
  if (sg_query_backend() == SG_BACKEND_GLCORE33) {
    static sg_shader_desc desc;
    static bool valid;
    if (!valid) {
      valid = true;
      desc.attrs[0].name = "position";
      desc.vs.source = pass_through_vs_source_glsl330;
      desc.vs.entry = "main";
      desc.vs.uniform_blocks[0].size = 64;
      desc.vs.uniform_blocks[0].uniforms[0].name = "pass_through_vs_params";
      desc.vs.uniform_blocks[0].uniforms[0].type = SG_UNIFORMTYPE_FLOAT4;
      desc.vs.uniform_blocks[0].uniforms[0].array_count = 4;
      desc.fs.source = pass_through_fs_source_glsl330;
      desc.fs.entry = "main";
      desc.label = "pass_through_shader";
    };
    return &desc;
  }
  #endif /* SOKOL_GLCORE33 */
  #if defined(SOKOL_GLES3)
  if (sg_query_backend() == SG_BACKEND_GLES3) {
    static sg_shader_desc desc;
    static bool valid;
    if (!valid) {
      valid = true;
      desc.attrs[0].name = "position";
      desc.vs.source = pass_through_vs_source_glsl300es;
      desc.vs.entry = "main";
      desc.vs.uniform_blocks[0].size = 64;
      desc.vs.uniform_blocks[0].uniforms[0].name = "pass_through_vs_params";
      desc.vs.uniform_blocks[0].uniforms[0].type = SG_UNIFORMTYPE_FLOAT4;
      desc.vs.uniform_blocks[0].uniforms[0].array_count = 4;
      desc.fs.source = pass_through_fs_source_glsl300es;
      desc.fs.entry = "main";
      desc.label = "pass_through_shader";
    };
    return &desc;
  }
  #endif /* SOKOL_GLES3 */
  return 0; /* can't happen */
}
