#pragma once
#include <vector>
#include <string>

struct tokenizer_status
{
  bool in_single_quotes;
  bool in_double_quotes;
  bool in_backslash;
  bool take_input_again;
  std::string token;
};

extern const char PATH_DELIMITER;

void print_prompt();
std::vector<std::string> take_input();
tokenizer_status tokenize_string(std::vector<std::string> &args, tokenizer_status status, const std::string &input);
void process_input(std::vector<std::string> &args);
bool is_executable(const std::string &path_str);
std::string find_in_path(const std::string &cmd);