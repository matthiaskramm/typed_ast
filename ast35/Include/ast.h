#ifndef Ta35_AST_H
#define Ta35_AST_H
#ifdef __cplusplus
extern "C" {
#endif

PyAPI_FUNC(int) Ta35AST_Validate(mod_ty);
PyAPI_FUNC(mod_ty) Ta35AST_FromNode(
    const node *n,
    PyCompilerFlags *flags,
    const char *filename,       /* decoded from the filesystem encoding */
    PyArena *arena);
PyAPI_FUNC(mod_ty) Ta35AST_FromNodeObject(
    const node *n,
    PyCompilerFlags *flags,
    PyObject *filename,
    PyArena *arena);

#ifdef __cplusplus
}
#endif
#endif /* !Ta35_AST_H */
