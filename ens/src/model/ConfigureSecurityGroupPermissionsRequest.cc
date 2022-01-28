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

#include <alibabacloud/ens/model/ConfigureSecurityGroupPermissionsRequest.h>

using AlibabaCloud::Ens::Model::ConfigureSecurityGroupPermissionsRequest;

ConfigureSecurityGroupPermissionsRequest::ConfigureSecurityGroupPermissionsRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ConfigureSecurityGroupPermissions") {
  setMethod(HttpRequest::Method::Post);
}

ConfigureSecurityGroupPermissionsRequest::~ConfigureSecurityGroupPermissionsRequest() {}

std::string ConfigureSecurityGroupPermissionsRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void ConfigureSecurityGroupPermissionsRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::vector<ConfigureSecurityGroupPermissionsRequest::RevokePermissions> ConfigureSecurityGroupPermissionsRequest::getRevokePermissions() const {
  return revokePermissions_;
}

void ConfigureSecurityGroupPermissionsRequest::setRevokePermissions(const std::vector<ConfigureSecurityGroupPermissionsRequest::RevokePermissions> &revokePermissions) {
  revokePermissions_ = revokePermissions;
  for(int dep1 = 0; dep1 != revokePermissions.size(); dep1++) {
    setParameter(std::string("RevokePermissions") + "." + std::to_string(dep1 + 1) + ".SourcePortRange", revokePermissions[dep1].sourcePortRange);
    setParameter(std::string("RevokePermissions") + "." + std::to_string(dep1 + 1) + ".PortRange", revokePermissions[dep1].portRange);
    setParameter(std::string("RevokePermissions") + "." + std::to_string(dep1 + 1) + ".IpProtocol", revokePermissions[dep1].ipProtocol);
    setParameter(std::string("RevokePermissions") + "." + std::to_string(dep1 + 1) + ".SourceCidrIp", revokePermissions[dep1].sourceCidrIp);
    setParameter(std::string("RevokePermissions") + "." + std::to_string(dep1 + 1) + ".Priority", std::to_string(revokePermissions[dep1].priority));
    setParameter(std::string("RevokePermissions") + "." + std::to_string(dep1 + 1) + ".DestCidrIp", revokePermissions[dep1].destCidrIp);
    setParameter(std::string("RevokePermissions") + "." + std::to_string(dep1 + 1) + ".Direction", revokePermissions[dep1].direction);
    setParameter(std::string("RevokePermissions") + "." + std::to_string(dep1 + 1) + ".Policy", revokePermissions[dep1].policy);
  }
}

std::vector<ConfigureSecurityGroupPermissionsRequest::AuthorizePermissions> ConfigureSecurityGroupPermissionsRequest::getAuthorizePermissions() const {
  return authorizePermissions_;
}

void ConfigureSecurityGroupPermissionsRequest::setAuthorizePermissions(const std::vector<ConfigureSecurityGroupPermissionsRequest::AuthorizePermissions> &authorizePermissions) {
  authorizePermissions_ = authorizePermissions;
  for(int dep1 = 0; dep1 != authorizePermissions.size(); dep1++) {
    setParameter(std::string("AuthorizePermissions") + "." + std::to_string(dep1 + 1) + ".SourcePortRange", authorizePermissions[dep1].sourcePortRange);
    setParameter(std::string("AuthorizePermissions") + "." + std::to_string(dep1 + 1) + ".PortRange", authorizePermissions[dep1].portRange);
    setParameter(std::string("AuthorizePermissions") + "." + std::to_string(dep1 + 1) + ".IpProtocol", authorizePermissions[dep1].ipProtocol);
    setParameter(std::string("AuthorizePermissions") + "." + std::to_string(dep1 + 1) + ".SourceCidrIp", authorizePermissions[dep1].sourceCidrIp);
    setParameter(std::string("AuthorizePermissions") + "." + std::to_string(dep1 + 1) + ".Description", authorizePermissions[dep1].description);
    setParameter(std::string("AuthorizePermissions") + "." + std::to_string(dep1 + 1) + ".Priority", std::to_string(authorizePermissions[dep1].priority));
    setParameter(std::string("AuthorizePermissions") + "." + std::to_string(dep1 + 1) + ".DestCidrIp", authorizePermissions[dep1].destCidrIp);
    setParameter(std::string("AuthorizePermissions") + "." + std::to_string(dep1 + 1) + ".Direction", authorizePermissions[dep1].direction);
    setParameter(std::string("AuthorizePermissions") + "." + std::to_string(dep1 + 1) + ".Policy", authorizePermissions[dep1].policy);
  }
}

