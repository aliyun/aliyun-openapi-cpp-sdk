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

#include <alibabacloud/ververica/model/DeleteDeploymentRequest.h>

using AlibabaCloud::Ververica::Model::DeleteDeploymentRequest;

DeleteDeploymentRequest::DeleteDeploymentRequest()
    : RoaServiceRequest("ververica", "2020-05-01") {
  setResourcePath("/pop/workspaces/[workspace]/api/v1/namespaces/[namespace]/deployments/[deploymentId]"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteDeploymentRequest::~DeleteDeploymentRequest() {}

std::string DeleteDeploymentRequest::getWorkspace() const {
  return workspace_;
}

void DeleteDeploymentRequest::setWorkspace(const std::string &workspace) {
  workspace_ = workspace;
  setParameter(std::string("workspace"), workspace);
}

std::string DeleteDeploymentRequest::getDeploymentId() const {
  return deploymentId_;
}

void DeleteDeploymentRequest::setDeploymentId(const std::string &deploymentId) {
  deploymentId_ = deploymentId;
  setParameter(std::string("deploymentId"), deploymentId);
}

std::string DeleteDeploymentRequest::get_Namespace() const {
  return _namespace_;
}

void DeleteDeploymentRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("namespace"), _namespace);
}

