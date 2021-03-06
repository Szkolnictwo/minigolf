#version 330

uniform vec4 course_editor_water_fs_params[1];
uniform sampler2D ce_water_noise_tex1;
uniform sampler2D ce_water_noise_tex0;

in vec2 frag_texture_coord;
layout(location = 0) out vec4 g_frag_color;

void main()
{
    vec4 _53 = texture(ce_water_noise_tex1, vec2(frag_texture_coord.x, 0.100000001490116119384765625 * (frag_texture_coord.y + (16.0 * course_editor_water_fs_params[0].x))));
    vec3 color = vec3(0.0039215688593685626983642578125, 0.4862745106220245361328125, 0.56078433990478515625);
    if (texture(ce_water_noise_tex0, vec2(frag_texture_coord.x, frag_texture_coord.y + course_editor_water_fs_params[0].x)).w > 0.100000001490116119384765625)
    {
        color = vec3(0.60000002384185791015625);
    }
    if (_53.w > 0.100000001490116119384765625)
    {
        color = vec3(0.800000011920928955078125);
    }
    if (frag_texture_coord.x > 0.949999988079071044921875)
    {
        float _93 = (frag_texture_coord.x - 0.949999988079071044921875) * 20.0;
        color = (vec3(1.0) * _93) + (color * (1.0 - _93));
    }
    if (frag_texture_coord.x < 0.0500000007450580596923828125)
    {
        float _112 = (0.0500000007450580596923828125 - frag_texture_coord.x) * 20.0;
        color = (vec3(1.0) * _112) + (color * (1.0 - _112));
    }
    g_frag_color = vec4(color, 0.85000002384185791015625);
}

