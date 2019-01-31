#include <QMapbox>
#include <QtGlobal>

#include <QOpenGLContext>
#include <QOpenGLFunctions>

#include <mbgl/gl/gl.hpp>

namespace mbgl {
namespace gl {

void glLoader() {
    GLFunctionPointers fps = {
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glActiveTexture(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glAttachShader(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glBindAttribLocation(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glBindBuffer(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glBindFramebuffer(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glBindRenderbuffer(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glBindTexture(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glBlendColor(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glBlendEquation(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glBlendEquationSeparate(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glBlendFunc(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glBlendFuncSeparate(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glBufferData(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glBufferSubData(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glCheckFramebufferStatus(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glClear(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glClearColor(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glClearDepthf(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glClearStencil(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glColorMask(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glCompileShader(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glCompressedTexImage2D(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glCompressedTexSubImage2D(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glCopyTexImage2D(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glCopyTexSubImage2D(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glCreateProgram(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glCreateShader(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glCullFace(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glDeleteBuffers(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glDeleteFramebuffers(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glDeleteProgram(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glDeleteRenderbuffers(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glDeleteShader(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glDeleteTextures(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glDepthFunc(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glDepthMask(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glDepthRangef(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glDetachShader(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glDisable(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glDisableVertexAttribArray(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glDrawArrays(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glDrawElements(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glEnable(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glEnableVertexAttribArray(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glFinish(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glFlush(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glFramebufferRenderbuffer(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glFramebufferTexture2D(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glFrontFace(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGenBuffers(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGenerateMipmap(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGenFramebuffers(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGenRenderbuffers(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGenTextures(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetActiveAttrib(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetActiveUniform(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetAttachedShaders(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetAttribLocation(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetBooleanv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetBufferParameteriv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetError(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetFloatv(args...); },
        [](auto... args) {
            return QOpenGLContext::currentContext()->functions()->glGetFramebufferAttachmentParameteriv(args...);
        },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetIntegerv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetProgramInfoLog(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetProgramiv(args...); },
        [](auto... args) {
            return QOpenGLContext::currentContext()->functions()->glGetRenderbufferParameteriv(args...);
        },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetShaderInfoLog(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetShaderiv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetShaderSource(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetString(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetTexParameterfv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetTexParameteriv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetUniformfv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetUniformiv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetUniformLocation(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetVertexAttribfv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetVertexAttribiv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glGetVertexAttribPointerv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glHint(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glIsBuffer(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glIsEnabled(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glIsFramebuffer(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glIsProgram(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glIsRenderbuffer(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glIsShader(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glIsTexture(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glLineWidth(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glLinkProgram(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glPixelStorei(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glPolygonOffset(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glReadPixels(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glRenderbufferStorage(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glSampleCoverage(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glScissor(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glShaderSource(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glStencilFunc(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glStencilFuncSeparate(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glStencilMask(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glStencilMaskSeparate(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glStencilOp(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glStencilOpSeparate(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glTexImage2D(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glTexParameterf(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glTexParameterfv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glTexParameteri(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glTexParameteriv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glTexSubImage2D(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glUniform1f(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glUniform1fv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glUniform1i(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glUniform1iv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glUniform2f(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glUniform2fv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glUniform2i(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glUniform2iv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glUniform3f(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glUniform3fv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glUniform3i(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glUniform3iv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glUniform4f(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glUniform4fv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glUniform4i(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glUniform4iv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glUniformMatrix2fv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glUniformMatrix3fv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glUniformMatrix4fv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glUseProgram(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glValidateProgram(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glVertexAttrib1f(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glVertexAttrib1fv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glVertexAttrib2f(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glVertexAttrib2fv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glVertexAttrib3f(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glVertexAttrib3fv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glVertexAttrib4f(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glVertexAttrib4fv(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glVertexAttribPointer(args...); },
        [](auto... args) { return QOpenGLContext::currentContext()->functions()->glViewport(args...); },
    };

    setGLFunctionPointers(fps);
}

}  // gl
}  // mbgl