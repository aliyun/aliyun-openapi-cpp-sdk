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

#include <alibabacloud/dataworks-public/model/DsgUserGroupAddOrUpdateRequest.h>

using AlibabaCloud::Dataworks_public::Model::DsgUserGroupAddOrUpdateRequest;

DsgUserGroupAddOrUpdateRequest::DsgUserGroupAddOrUpdateRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "DsgUserGroupAddOrUpdate") {
  setMethod(HttpRequest::Method::Post);
}

DsgUserGroupAddOrUpdateRequest::~DsgUserGroupAddOrUpdateRequest() {}

std::vector<DsgUserGroupAddOrUpdateRequest::UserGroups> DsgUserGroupAddOrUpdateRequest::getUserGroups() const {
  return userGroups_;
}

void DsgUserGroupAddOrUpdateRequest::setUserGroups(const std::vector<DsgUserGroupAddOrUpdateRequest::UserGroups> &userGroups) {
  userGroups_ = userGroups;
  for(int dep1 = 0; dep1 != userGroups.size(); dep1++) {
    setParameter(std::string("UserGroups") + "." + std::to_string(dep1 + 1) + ".Owner", userGroups[dep1].owner);
    setParameter(std::string("UserGroups") + "." + std::to_string(dep1 + 1) + ".ProjectName", userGroups[dep1].projectName);
    setParameter(std::string("UserGroups") + "." + std::to_string(dep1 + 1) + ".UserGroupType", std::to_string(userGroups[dep1].userGroupType));
    setParameter(std::string("UserGroups") + "." + std::to_string(dep1 + 1) + ".Name", userGroups[dep1].name);
    setParameter(std::string("UserGroups") + "." + std::to_string(dep1 + 1) + ".Id", std::to_string(userGroups[dep1].id));
    for(int dep2 = 0; dep2 != userGroups[dep1].accounts.size(); dep2++) {
      setParameter(std::string("UserGroups") + "." + std::to_string(dep1 + 1) + ".Accounts." + std::to_string(dep2 + 1), userGroups[dep1].accounts[dep2]);
    }
  }
}

