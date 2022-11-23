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

#include <alibabacloud/ververica/model/UpdateFormatRequest.h>

using AlibabaCloud::Ververica::Model::UpdateFormatRequest;

UpdateFormatRequest::UpdateFormatRequest()
    : RoaServiceRequest("ververica", "2020-05-01") {
  setResourcePath("/pop/workspaces/[workspace]/sql/v1beta1/namespaces/[namespace]/formats/[name]"};
  setMethod(HttpRequest::Method::Put);
}

UpdateFormatRequest::~UpdateFormatRequest() {}

std::string UpdateFormatRequest::getWorkspace() const {
  return workspace_;
}

void UpdateFormatRequest::setWorkspace(const std::string &workspace) {
  workspace_ = workspace;
  setParameter(std::string("workspace"), workspace);
}

std::string UpdateFormatRequest::getParamsJson() const {
  return paramsJson_;
}

void UpdateFormatRequest::setParamsJson(const std::string &paramsJson) {
  paramsJson_ = paramsJson;
  setBodyParameter(std::string("paramsJson"), paramsJson);
}

std::string UpdateFormatRequest::getName() const {
  return name_;
}

void UpdateFormatRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("name"), name);
}

std::string UpdateFormatRequest::get_Namespace() const {
  return _namespace_;
}

void UpdateFormatRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("namespace"), _namespace);
}

