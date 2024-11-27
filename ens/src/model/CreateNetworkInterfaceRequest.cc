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

#include <alibabacloud/ens/model/CreateNetworkInterfaceRequest.h>

using AlibabaCloud::Ens::Model::CreateNetworkInterfaceRequest;

CreateNetworkInterfaceRequest::CreateNetworkInterfaceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateNetworkInterface") {
  setMethod(HttpRequest::Method::Post);
}

CreateNetworkInterfaceRequest::~CreateNetworkInterfaceRequest() {}

std::string CreateNetworkInterfaceRequest::getDescription() const {
  return description_;
}

void CreateNetworkInterfaceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::vector<CreateNetworkInterfaceRequest::std::string> CreateNetworkInterfaceRequest::getSecurityGroupIds() const {
  return securityGroupIds_;
}

void CreateNetworkInterfaceRequest::setSecurityGroupIds(const std::vector<CreateNetworkInterfaceRequest::std::string> &securityGroupIds) {
  securityGroupIds_ = securityGroupIds;
  for(int dep1 = 0; dep1 != securityGroupIds.size(); dep1++) {
    setParameter(std::string("SecurityGroupIds") + "." + std::to_string(dep1 + 1), securityGroupIds[dep1]);
  }
}

std::string CreateNetworkInterfaceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateNetworkInterfaceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateNetworkInterfaceRequest::getName() const {
  return name_;
}

void CreateNetworkInterfaceRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

