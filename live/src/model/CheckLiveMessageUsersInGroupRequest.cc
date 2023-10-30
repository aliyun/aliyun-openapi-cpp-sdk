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

#include <alibabacloud/live/model/CheckLiveMessageUsersInGroupRequest.h>

using AlibabaCloud::Live::Model::CheckLiveMessageUsersInGroupRequest;

CheckLiveMessageUsersInGroupRequest::CheckLiveMessageUsersInGroupRequest()
    : RpcServiceRequest("live", "2016-11-01", "CheckLiveMessageUsersInGroup") {
  setMethod(HttpRequest::Method::Post);
}

CheckLiveMessageUsersInGroupRequest::~CheckLiveMessageUsersInGroupRequest() {}

std::string CheckLiveMessageUsersInGroupRequest::getGroupId() const {
  return groupId_;
}

void CheckLiveMessageUsersInGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string CheckLiveMessageUsersInGroupRequest::getDataCenter() const {
  return dataCenter_;
}

void CheckLiveMessageUsersInGroupRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

std::vector<CheckLiveMessageUsersInGroupRequest::std::string> CheckLiveMessageUsersInGroupRequest::getUserIds() const {
  return userIds_;
}

void CheckLiveMessageUsersInGroupRequest::setUserIds(const std::vector<CheckLiveMessageUsersInGroupRequest::std::string> &userIds) {
  userIds_ = userIds;
  for(int dep1 = 0; dep1 != userIds.size(); dep1++) {
    setParameter(std::string("UserIds") + "." + std::to_string(dep1 + 1), userIds[dep1]);
  }
}

std::string CheckLiveMessageUsersInGroupRequest::getAppId() const {
  return appId_;
}

void CheckLiveMessageUsersInGroupRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

