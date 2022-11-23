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

#include <alibabacloud/ververica/model/DeleteFormatRequest.h>

using AlibabaCloud::Ververica::Model::DeleteFormatRequest;

DeleteFormatRequest::DeleteFormatRequest()
    : RoaServiceRequest("ververica", "2020-05-01") {
  setResourcePath("/pop/workspaces/[workspace]/sql/v1beta1/namespaces/[namespace]/formats/[name]"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteFormatRequest::~DeleteFormatRequest() {}

std::string DeleteFormatRequest::getWorkspace() const {
  return workspace_;
}

void DeleteFormatRequest::setWorkspace(const std::string &workspace) {
  workspace_ = workspace;
  setParameter(std::string("workspace"), workspace);
}

std::string DeleteFormatRequest::getName() const {
  return name_;
}

void DeleteFormatRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("name"), name);
}

std::string DeleteFormatRequest::get_Namespace() const {
  return _namespace_;
}

void DeleteFormatRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("namespace"), _namespace);
}

