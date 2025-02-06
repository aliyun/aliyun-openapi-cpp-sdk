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

#include <alibabacloud/eais/model/CreateEaiEcsRequest.h>

using AlibabaCloud::Eais::Model::CreateEaiEcsRequest;

CreateEaiEcsRequest::CreateEaiEcsRequest()
    : RpcServiceRequest("eais", "2019-06-24", "CreateEaiEcs") {
  setMethod(HttpRequest::Method::Post);
}

CreateEaiEcsRequest::~CreateEaiEcsRequest() {}

std::string CreateEaiEcsRequest::getClientToken() const {
  return clientToken_;
}

void CreateEaiEcsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateEaiEcsRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void CreateEaiEcsRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string CreateEaiEcsRequest::getEaisType() const {
  return eaisType_;
}

void CreateEaiEcsRequest::setEaisType(const std::string &eaisType) {
  eaisType_ = eaisType;
  setParameter(std::string("EaisType"), eaisType);
}

std::string CreateEaiEcsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateEaiEcsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

CreateEaiEcsRequest::Ecs CreateEaiEcsRequest::getEcs() const {
  return ecs_;
}

void CreateEaiEcsRequest::setEcs(const CreateEaiEcsRequest::Ecs &ecs) {
  ecs_ = ecs;
  setParameter(std::string("Ecs") + ".Password", ecs.password);
  setParameter(std::string("Ecs") + ".ImageId", ecs.imageId);
  setParameter(std::string("Ecs") + ".SystemDiskCategory", ecs.systemDiskCategory);
  setParameter(std::string("Ecs") + ".InternetMaxBandwidthOut", ecs.internetMaxBandwidthOut);
  setParameter(std::string("Ecs") + ".Name", ecs.name);
  setParameter(std::string("Ecs") + ".SystemDiskSize", std::to_string(ecs.systemDiskSize));
  setParameter(std::string("Ecs") + ".ZoneId", ecs.zoneId);
  setParameter(std::string("Ecs") + ".Type", ecs.type);
  setParameter(std::string("Ecs") + ".InternetMaxBandwidthIn", ecs.internetMaxBandwidthIn);
}

std::string CreateEaiEcsRequest::getRegionId() const {
  return regionId_;
}

void CreateEaiEcsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateEaiEcsRequest::getEaisName() const {
  return eaisName_;
}

void CreateEaiEcsRequest::setEaisName(const std::string &eaisName) {
  eaisName_ = eaisName;
  setParameter(std::string("EaisName"), eaisName);
}

std::vector<CreateEaiEcsRequest::Tag> CreateEaiEcsRequest::getTag() const {
  return tag_;
}

void CreateEaiEcsRequest::setTag(const std::vector<CreateEaiEcsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateEaiEcsRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateEaiEcsRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

