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

#include <alibabacloud/adcp/model/GrantUserPermissionsRequest.h>

using AlibabaCloud::Adcp::Model::GrantUserPermissionsRequest;

GrantUserPermissionsRequest::GrantUserPermissionsRequest()
    : RpcServiceRequest("adcp", "2022-01-01", "GrantUserPermissions") {
  setMethod(HttpRequest::Method::Post);
}

GrantUserPermissionsRequest::~GrantUserPermissionsRequest() {}

std::string GrantUserPermissionsRequest::getUserId() const {
  return userId_;
}

void GrantUserPermissionsRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::vector<GrantUserPermissionsRequest::Permissions> GrantUserPermissionsRequest::getPermissions() const {
  return permissions_;
}

void GrantUserPermissionsRequest::setPermissions(const std::vector<GrantUserPermissionsRequest::Permissions> &permissions) {
  permissions_ = permissions;
  for(int dep1 = 0; dep1 != permissions.size(); dep1++) {
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".IsRamRole", permissions[dep1].isRamRole ? "true" : "false");
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".RoleName", permissions[dep1].roleName);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".Namespace", permissions[dep1]._namespace);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".RoleType", permissions[dep1].roleType);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".ClusterId", permissions[dep1].clusterId);
  }
}

