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

#include <alibabacloud/eais/model/CreateEaisEiRequest.h>

using AlibabaCloud::Eais::Model::CreateEaisEiRequest;

CreateEaisEiRequest::CreateEaisEiRequest()
    : RpcServiceRequest("eais", "2019-06-24", "CreateEaisEi") {
  setMethod(HttpRequest::Method::Post);
}

CreateEaisEiRequest::~CreateEaisEiRequest() {}

std::string CreateEaisEiRequest::getClientToken() const {
  return clientToken_;
}

void CreateEaisEiRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateEaisEiRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void CreateEaisEiRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string CreateEaisEiRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateEaisEiRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateEaisEiRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateEaisEiRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateEaisEiRequest::getInstanceName() const {
  return instanceName_;
}

void CreateEaisEiRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string CreateEaisEiRequest::getRegionId() const {
  return regionId_;
}

void CreateEaisEiRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateEaisEiRequest::getInstanceType() const {
  return instanceType_;
}

void CreateEaisEiRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

