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

#include <alibabacloud/eais/model/CreateEaiEciRequest.h>

using AlibabaCloud::Eais::Model::CreateEaiEciRequest;

CreateEaiEciRequest::CreateEaiEciRequest()
    : RpcServiceRequest("eais", "2019-06-24", "CreateEaiEci") {
  setMethod(HttpRequest::Method::Post);
}

CreateEaiEciRequest::~CreateEaiEciRequest() {}

std::string CreateEaiEciRequest::getClientToken() const {
  return clientToken_;
}

void CreateEaiEciRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateEaiEciRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void CreateEaiEciRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

CreateEaiEciRequest::Eci CreateEaiEciRequest::getEci() const {
  return eci_;
}

void CreateEaiEciRequest::setEci(const CreateEaiEciRequest::Eci &eci) {
  eci_ = eci;
  setParameter(std::string("Eci") + ".Container.Image", eci.container.image);
  setParameter(std::string("Eci") + ".Container.Arg", eci.container.arg);
  setParameter(std::string("Eci") + ".Container.Name", eci.container.name);
  setParameter(std::string("Eci") + ".Container.Volumes", eci.container.volumes);
  setParameter(std::string("Eci") + ".Container.Command", eci.container.command);
  setParameter(std::string("Eci") + ".Volume", eci.volume);
  setParameter(std::string("Eci") + ".EipId", eci.eipId);
  setParameter(std::string("Eci") + ".Name", eci.name);
  setParameter(std::string("Eci") + ".Type", eci.type);
}

std::string CreateEaiEciRequest::getEaisType() const {
  return eaisType_;
}

void CreateEaiEciRequest::setEaisType(const std::string &eaisType) {
  eaisType_ = eaisType;
  setParameter(std::string("EaisType"), eaisType);
}

std::string CreateEaiEciRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateEaiEciRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateEaiEciRequest::getRegionId() const {
  return regionId_;
}

void CreateEaiEciRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateEaiEciRequest::getEaisName() const {
  return eaisName_;
}

void CreateEaiEciRequest::setEaisName(const std::string &eaisName) {
  eaisName_ = eaisName;
  setParameter(std::string("EaisName"), eaisName);
}

std::vector<CreateEaiEciRequest::Tag> CreateEaiEciRequest::getTag() const {
  return tag_;
}

void CreateEaiEciRequest::setTag(const std::vector<CreateEaiEciRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateEaiEciRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateEaiEciRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

