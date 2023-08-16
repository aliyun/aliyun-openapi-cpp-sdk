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

#include <alibabacloud/csas/model/ListPolicesForUserGroupRequest.h>

using AlibabaCloud::Csas::Model::ListPolicesForUserGroupRequest;

ListPolicesForUserGroupRequest::ListPolicesForUserGroupRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListPolicesForUserGroup") {
  setMethod(HttpRequest::Method::Get);
}

ListPolicesForUserGroupRequest::~ListPolicesForUserGroupRequest() {}

std::vector<ListPolicesForUserGroupRequest::std::string> ListPolicesForUserGroupRequest::getUserGroupIds() const {
  return userGroupIds_;
}

void ListPolicesForUserGroupRequest::setUserGroupIds(const std::vector<ListPolicesForUserGroupRequest::std::string> &userGroupIds) {
  userGroupIds_ = userGroupIds;
  for(int dep1 = 0; dep1 != userGroupIds.size(); dep1++) {
    setParameter(std::string("UserGroupIds") + "." + std::to_string(dep1 + 1), userGroupIds[dep1]);
  }
}

std::string ListPolicesForUserGroupRequest::getSourceIp() const {
  return sourceIp_;
}

void ListPolicesForUserGroupRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

