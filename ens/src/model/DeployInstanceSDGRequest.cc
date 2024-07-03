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

#include <alibabacloud/ens/model/DeployInstanceSDGRequest.h>

using AlibabaCloud::Ens::Model::DeployInstanceSDGRequest;

DeployInstanceSDGRequest::DeployInstanceSDGRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DeployInstanceSDG") {
  setMethod(HttpRequest::Method::Post);
}

DeployInstanceSDGRequest::~DeployInstanceSDGRequest() {}

std::string DeployInstanceSDGRequest::getDeploymentType() const {
  return deploymentType_;
}

void DeployInstanceSDGRequest::setDeploymentType(const std::string &deploymentType) {
  deploymentType_ = deploymentType;
  setParameter(std::string("DeploymentType"), deploymentType);
}

std::string DeployInstanceSDGRequest::getSDGId() const {
  return sDGId_;
}

void DeployInstanceSDGRequest::setSDGId(const std::string &sDGId) {
  sDGId_ = sDGId;
  setParameter(std::string("SDGId"), sDGId);
}

std::vector<DeployInstanceSDGRequest::std::string> DeployInstanceSDGRequest::getInstanceIds() const {
  return instanceIds_;
}

void DeployInstanceSDGRequest::setInstanceIds(const std::vector<DeployInstanceSDGRequest::std::string> &instanceIds) {
  instanceIds_ = instanceIds;
  for(int dep1 = 0; dep1 != instanceIds.size(); dep1++) {
    setParameter(std::string("InstanceIds") + "." + std::to_string(dep1 + 1), instanceIds[dep1]);
  }
}

