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

#include <alibabacloud/live/model/ListMessageGroupUserByIdRequest.h>

using AlibabaCloud::Live::Model::ListMessageGroupUserByIdRequest;

ListMessageGroupUserByIdRequest::ListMessageGroupUserByIdRequest()
    : RpcServiceRequest("live", "2016-11-01", "ListMessageGroupUserById") {
  setMethod(HttpRequest::Method::Post);
}

ListMessageGroupUserByIdRequest::~ListMessageGroupUserByIdRequest() {}

std::vector<ListMessageGroupUserByIdRequest::std::string> ListMessageGroupUserByIdRequest::getUserIdList() const {
  return userIdList_;
}

void ListMessageGroupUserByIdRequest::setUserIdList(const std::vector<ListMessageGroupUserByIdRequest::std::string> &userIdList) {
  userIdList_ = userIdList;
  for(int dep1 = 0; dep1 != userIdList.size(); dep1++) {
    setBodyParameter(std::string("UserIdList") + "." + std::to_string(dep1 + 1), userIdList[dep1]);
  }
}

std::string ListMessageGroupUserByIdRequest::getGroupId() const {
  return groupId_;
}

void ListMessageGroupUserByIdRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

std::string ListMessageGroupUserByIdRequest::getAppId() const {
  return appId_;
}

void ListMessageGroupUserByIdRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setBodyParameter(std::string("AppId"), appId);
}

