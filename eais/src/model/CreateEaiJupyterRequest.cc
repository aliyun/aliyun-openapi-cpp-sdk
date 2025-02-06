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

#include <alibabacloud/eais/model/CreateEaiJupyterRequest.h>

using AlibabaCloud::Eais::Model::CreateEaiJupyterRequest;

CreateEaiJupyterRequest::CreateEaiJupyterRequest()
    : RpcServiceRequest("eais", "2019-06-24", "CreateEaiJupyter") {
  setMethod(HttpRequest::Method::Post);
}

CreateEaiJupyterRequest::~CreateEaiJupyterRequest() {}

std::string CreateEaiJupyterRequest::getClientToken() const {
  return clientToken_;
}

void CreateEaiJupyterRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateEaiJupyterRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void CreateEaiJupyterRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string CreateEaiJupyterRequest::getEaisType() const {
  return eaisType_;
}

void CreateEaiJupyterRequest::setEaisType(const std::string &eaisType) {
  eaisType_ = eaisType;
  setParameter(std::string("EaisType"), eaisType);
}

std::string CreateEaiJupyterRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateEaiJupyterRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateEaiJupyterRequest::getRegionId() const {
  return regionId_;
}

void CreateEaiJupyterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateEaiJupyterRequest::getEaisName() const {
  return eaisName_;
}

void CreateEaiJupyterRequest::setEaisName(const std::string &eaisName) {
  eaisName_ = eaisName;
  setParameter(std::string("EaisName"), eaisName);
}

std::vector<CreateEaiJupyterRequest::Tag> CreateEaiJupyterRequest::getTag() const {
  return tag_;
}

void CreateEaiJupyterRequest::setTag(const std::vector<CreateEaiJupyterRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateEaiJupyterRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateEaiJupyterRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::vector<CreateEaiJupyterRequest::EnvironmentVar> CreateEaiJupyterRequest::getEnvironmentVar() const {
  return environmentVar_;
}

void CreateEaiJupyterRequest::setEnvironmentVar(const std::vector<CreateEaiJupyterRequest::EnvironmentVar> &environmentVar) {
  environmentVar_ = environmentVar;
  for(int dep1 = 0; dep1 != environmentVar.size(); dep1++) {
    setParameter(std::string("EnvironmentVar") + "." + std::to_string(dep1 + 1) + ".Value", environmentVar[dep1].value);
    setParameter(std::string("EnvironmentVar") + "." + std::to_string(dep1 + 1) + ".Key", environmentVar[dep1].key);
  }
}

