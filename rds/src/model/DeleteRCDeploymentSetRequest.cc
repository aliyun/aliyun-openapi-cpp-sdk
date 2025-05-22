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

#include <alibabacloud/rds/model/DeleteRCDeploymentSetRequest.h>

using AlibabaCloud::Rds::Model::DeleteRCDeploymentSetRequest;

DeleteRCDeploymentSetRequest::DeleteRCDeploymentSetRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DeleteRCDeploymentSet") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRCDeploymentSetRequest::~DeleteRCDeploymentSetRequest() {}

std::string DeleteRCDeploymentSetRequest::getDeploymentSetId() const {
  return deploymentSetId_;
}

void DeleteRCDeploymentSetRequest::setDeploymentSetId(const std::string &deploymentSetId) {
  deploymentSetId_ = deploymentSetId;
  setParameter(std::string("DeploymentSetId"), deploymentSetId);
}

std::string DeleteRCDeploymentSetRequest::getRegionId() const {
  return regionId_;
}

void DeleteRCDeploymentSetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

