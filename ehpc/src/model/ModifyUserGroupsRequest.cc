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

#include <alibabacloud/ehpc/model/ModifyUserGroupsRequest.h>

using AlibabaCloud::EHPC::Model::ModifyUserGroupsRequest;

ModifyUserGroupsRequest::ModifyUserGroupsRequest()
    : RpcServiceRequest("ehpc", "2017-07-14", "ModifyUserGroups") {
  setMethod(HttpRequest::Method::Get);
}

ModifyUserGroupsRequest::~ModifyUserGroupsRequest() {}

std::string ModifyUserGroupsRequest::getClusterId() const {
  return clusterId_;
}

void ModifyUserGroupsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ModifyUserGroupsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyUserGroupsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::vector<ModifyUserGroupsRequest::User> ModifyUserGroupsRequest::getUser() const {
  return user_;
}

void ModifyUserGroupsRequest::setUser(const std::vector<ModifyUserGroupsRequest::User> &user) {
  user_ = user;
  for(int dep1 = 0; dep1 != user.size(); dep1++) {
  auto userObj = user.at(dep1);
  std::string userObjStr = std::string("User") + "." + std::to_string(dep1 + 1);
    setParameter(userObjStr + ".Name", userObj.name);
    setParameter(userObjStr + ".Group", userObj.group);
  }
}

