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

#include <alibabacloud/ververica/model/ListFunctionsRequest.h>

using AlibabaCloud::Ververica::Model::ListFunctionsRequest;

ListFunctionsRequest::ListFunctionsRequest()
    : RoaServiceRequest("ververica", "2020-05-01") {
  setResourcePath("/pop/workspaces/[workspace]/catalog/v1beta2/namespaces/[namespace]/catalogs/[cat]:listFunctions"};
  setMethod(HttpRequest::Method::Get);
}

ListFunctionsRequest::~ListFunctionsRequest() {}

std::string ListFunctionsRequest::getWorkspace() const {
  return workspace_;
}

void ListFunctionsRequest::setWorkspace(const std::string &workspace) {
  workspace_ = workspace;
  setParameter(std::string("workspace"), workspace);
}

std::string ListFunctionsRequest::getDatabase() const {
  return database_;
}

void ListFunctionsRequest::setDatabase(const std::string &database) {
  database_ = database;
  setParameter(std::string("database"), database);
}

std::string ListFunctionsRequest::getCat() const {
  return cat_;
}

void ListFunctionsRequest::setCat(const std::string &cat) {
  cat_ = cat;
  setParameter(std::string("cat"), cat);
}

std::string ListFunctionsRequest::get_Namespace() const {
  return _namespace_;
}

void ListFunctionsRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("namespace"), _namespace);
}

