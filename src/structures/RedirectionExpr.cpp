#include "RedirectionExpr.h"

RedirectionExpr::RedirectionExpr() {
    this->type = NodeType::REDIRECTION_EXPR;
}
RedirectionExpr::RedirectionExpr(Node* command, Node* input, Node* output) {
    this->command = command;
    this->type = NodeType::REDIRECTION_EXPR;
    this->input = input;
    this->output = output;
}
RedirectionExpr::~RedirectionExpr(){}
Node* RedirectionExpr::getCommand(){
    return this->command;
}
void RedirectionExpr::setCommand(Node* command){
    this->command = command;
}
Node* RedirectionExpr::getInput(){
    return this->input;
}
void RedirectionExpr::setInput(Node* input){
    this->input = input;
}
Node* RedirectionExpr::getOutput(){
    return this->output;
}
void RedirectionExpr::setOutput(Node* output){
    this->output = output;
}
NodeType RedirectionExpr::getType() {
    return this->type;
}

std::string RedirectionExpr::toString() {
    std::string ans;
    if (this->input && this->output)
        ans = this->command->toString() + " > " + this->output->toString() + " < " + this->input->toString();
    else if (this->input)
        ans = this->command->toString() + " < " + this->input->toString();
    else if (this->output)
        ans = this->command->toString() + " > " + this->output->toString();
    else
        ans = this->command->toString();
    return ans;
}
