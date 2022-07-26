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

#include <alibabacloud/oos/model/ContinueDeployApplicationGroupRequest.h>

using AlibabaCloud::Oos::Model::ContinueDeployApplicationGroupRequest;

ContinueDeployApplicationGroupRequest::ContinueDeployApplicationGroupRequest()
    : RpcServiceRequest("oos", "2019-06-01", "ContinueDeployApplicationGroup") {
  setMethod(HttpRequest::Method::Post);
}

ContinueDeployApplicationGroupRequest::~ContinueDeployApplicationGroupRequest() {}

std::string ContinueDeployApplicationGroupRequest::getDeployParameters() const {
  return deployParameters_;
}

void ContinueDeployApplicationGroupRequest::setDeployParameters(const std::string &deployParameters) {
  deployParameters_ = deployParameters;
  setParameter(std::string("DeployParameters"), deployParameters);
}

std::string ContinueDeployApplicationGroupRequest::getRegionId() const {
  return regionId_;
}

void ContinueDeployApplicationGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ContinueDeployApplicationGroupRequest::getApplicationName() const {
  return applicationName_;
}

void ContinueDeployApplicationGroupRequest::setApplicationName(const std::string &applicationName) {
  applicationName_ = applicationName;
  setParameter(std::string("ApplicationName"), applicationName);
}

std::string ContinueDeployApplicationGroupRequest::getName() const {
  return name_;
}

void ContinueDeployApplicationGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

