#ifndef NODE_TYPE_H
#define NODE_TYPE_H

enum class NodeType {
    NONE,
    PROGRAM,
    PIPE_EXPR,
    REDIRECTION_EXPR,
    IDENTIFIER,
    BACKTICK_EXPR,
    VARIABLE_CALL,
    COMMAND,
    VARIABLE_ASSIGNMENT
};

#endif