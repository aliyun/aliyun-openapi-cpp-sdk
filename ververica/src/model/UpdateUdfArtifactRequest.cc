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

#include <alibabacloud/ververica/model/UpdateUdfArtifactRequest.h>

using AlibabaCloud::Ververica::Model::UpdateUdfArtifactRequest;

UpdateUdfArtifactRequest::UpdateUdfArtifactRequest()
    : RoaServiceRequest("ververica", "2020-05-01") {
  setResourcePath("/pop/workspaces/[workspace]/sql/v1beta1/namespaces/[namespace]/udfartifacts/[udfArtifactName]"};
  setMethod(HttpRequest::Method::Put);
}

UpdateUdfArtifactRequest::~UpdateUdfArtifactRequest() {}

std::string UpdateUdfArtifactRequest::getWorkspace() const {
  return workspace_;
}

void UpdateUdfArtifactRequest::setWorkspace(const std::string &workspace) {
  workspace_ = workspace;
  setParameter(std::string("workspace"), workspace);
}

std::string UpdateUdfArtifactRequest::getParamsJson() const {
  return paramsJson_;
}

void UpdateUdfArtifactRequest::setParamsJson(const std::string &paramsJson) {
  paramsJson_ = paramsJson;
  setBodyParameter(std::string("paramsJson"), paramsJson);
}

std::string UpdateUdfArtifactRequest::get_Namespace() const {
  return _namespace_;
}

void UpdateUdfArtifactRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("namespace"), _namespace);
}

std::string UpdateUdfArtifactRequest::getUdfArtifactName() const {
  return udfArtifactName_;
}

void UpdateUdfArtifactRequest::setUdfArtifactName(const std::string &udfArtifactName) {
  udfArtifactName_ = udfArtifactName;
  setParameter(std::string("udfArtifactName"), udfArtifactName);
}

