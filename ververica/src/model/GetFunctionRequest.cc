/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/ververica/model/GetFunctionRequest.h>

using AlibabaCloud::Ververica::Model::GetFunctionRequest;

GetFunctionRequest::GetFunctionRequest()
    : RoaServiceRequest("ververica", "2020-05-01") {
  setResourcePath("/pop/workspaces/[workspace]/catalog/v1beta2/namespaces/[namespace]/catalogs/[cat]:getFunction"};
  setMethod(HttpRequest::Method::Get);
}

GetFunctionRequest::~GetFunctionRequest() {}

std::string GetFunctionRequest::getWorkspace() const {
  return workspace_;
}

void GetFunctionRequest::setWorkspace(const std::string &workspace) {
  workspace_ = workspace;
  setParameter(std::string("workspace"), workspace);
}

std::string GetFunctionRequest::getDatabase() const {
  return database_;
}

void GetFunctionRequest::setDatabase(const std::string &database) {
  database_ = database;
  setParameter(std::string("database"), database);
}

std::string GetFunctionRequest::getCat() const {
  return cat_;
}

void GetFunctionRequest::setCat(const std::string &cat) {
  cat_ = cat;
  setParameter(std::string("cat"), cat);
}

std::string GetFunctionRequest::getFunction() const {
  return function_;
}

void GetFunctionRequest::setFunction(const std::string &function) {
  function_ = function;
  setParameter(std::string("function"), function);
}

std::string GetFunctionRequest::get_Namespace() const {
  return _namespace_;
}

void GetFunctionRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("namespace"), _namespace);
}

