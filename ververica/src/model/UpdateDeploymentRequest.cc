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

#include <alibabacloud/ververica/model/UpdateDeploymentRequest.h>

using AlibabaCloud::Ververica::Model::UpdateDeploymentRequest;

UpdateDeploymentRequest::UpdateDeploymentRequest()
    : RoaServiceRequest("ververica", "2020-05-01") {
  setResourcePath("/pop/workspaces/[workspace]/api/v1/namespaces/[namespace]/deployments/[deploymentId]/patch"};
  setMethod(HttpRequest::Method::Put);
}

UpdateDeploymentRequest::~UpdateDeploymentRequest() {}

std::string UpdateDeploymentRequest::getWorkspace() const {
  return workspace_;
}

void UpdateDeploymentRequest::setWorkspace(const std::string &workspace) {
  workspace_ = workspace;
  setParameter(std::string("workspace"), workspace);
}

std::string UpdateDeploymentRequest::getParamsJson() const {
  return paramsJson_;
}

void UpdateDeploymentRequest::setParamsJson(const std::string &paramsJson) {
  paramsJson_ = paramsJson;
  setBodyParameter(std::string("paramsJson"), paramsJson);
}

std::string UpdateDeploymentRequest::getDeploymentId() const {
  return deploymentId_;
}

void UpdateDeploymentRequest::setDeploymentId(const std::string &deploymentId) {
  deploymentId_ = deploymentId;
  setParameter(std::string("deploymentId"), deploymentId);
}

std::string UpdateDeploymentRequest::get_Namespace() const {
  return _namespace_;
}

void UpdateDeploymentRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("namespace"), _namespace);
}

