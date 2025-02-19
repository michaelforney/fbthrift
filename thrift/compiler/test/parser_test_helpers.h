/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <memory>
#include <string>

#include <boost/lexical_cast.hpp>

#include <thrift/compiler/ast/t_base_type.h>
#include <thrift/compiler/ast/t_enum.h>
#include <thrift/compiler/ast/t_function.h>
#include <thrift/compiler/ast/t_service.h>

#include <thrift/compiler/test/parser_test_helpers-inl.h>

/**
 * Helper function to instantiate fake t_functions of the form:
 * f = create_fake_function<type(param, ...)>("function_name")
 */
template <typename T>
std::unique_ptr<t_function> create_fake_function(
    std::string name, t_program* program = nullptr) {
  using signature = func_signature<T>;
  std::unique_ptr<t_paramlist> args(new t_paramlist(program, "args"));

  std::size_t index = 0;
  for (auto& arg : signature::args_types()) {
    args->append(std::make_unique<t_field>(
        arg.release(), "arg_" + boost::lexical_cast<std::string>(index++)));
  }

  return std::unique_ptr<t_function>(new t_function(
      signature::return_type().release(), std::move(name), std::move(args)));
}

/**
 * Helper function to instantiate fake t_services
 */
std::unique_ptr<t_service> create_fake_service(
    std::string name, t_program* program = nullptr) {
  std::unique_ptr<t_service> service(new t_service(program));
  service->set_name(std::move(name));
  return service;
}

/**
 * Helper function to instantiate fake t_enums
 */
std::unique_ptr<t_enum> create_fake_enum(
    std::string name, t_program* program = nullptr) {
  std::unique_ptr<t_enum> tenum(new t_enum(program));
  tenum->set_name(std::move(name));
  return tenum;
}
