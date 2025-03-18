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

#include <alibabacloud/ens/model/CreateSecurityGroupRequest.h>

using AlibabaCloud::Ens::Model::CreateSecurityGroupRequest;

CreateSecurityGroupRequest::CreateSecurityGroupRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateSecurityGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateSecurityGroupRequest::~CreateSecurityGroupRequest() {}

std::string CreateSecurityGroupRequest::getDescription() const {
  return description_;
}

void CreateSecurityGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateSecurityGroupRequest::getSecurityGroupName() const {
  return securityGroupName_;
}

void CreateSecurityGroupRequest::setSecurityGroupName(const std::string &securityGroupName) {
  securityGroupName_ = securityGroupName;
  setParameter(std::string("SecurityGroupName"), securityGroupName);
}

std::vector<CreateSecurityGroupRequest::Permissions> CreateSecurityGroupRequest::getPermissions() const {
  return permissions_;
}

void CreateSecurityGroupRequest::setPermissions(const std::vector<CreateSecurityGroupRequest::Permissions> &permissions) {
  permissions_ = permissions;
  for(int dep1 = 0; dep1 != permissions.size(); dep1++) {
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".SourcePortRange", permissions[dep1].sourcePortRange);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".PortRange", permissions[dep1].portRange);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".IpProtocol", permissions[dep1].ipProtocol);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".SourceCidrIp", permissions[dep1].sourceCidrIp);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".Description", permissions[dep1].description);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".Priority", std::to_string(permissions[dep1].priority));
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".DestCidrIp", permissions[dep1].destCidrIp);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".Direction", permissions[dep1].direction);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".Policy", permissions[dep1].policy);
  }
}

