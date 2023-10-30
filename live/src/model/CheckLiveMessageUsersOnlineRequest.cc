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

#include <alibabacloud/live/model/CheckLiveMessageUsersOnlineRequest.h>

using AlibabaCloud::Live::Model::CheckLiveMessageUsersOnlineRequest;

CheckLiveMessageUsersOnlineRequest::CheckLiveMessageUsersOnlineRequest()
    : RpcServiceRequest("live", "2016-11-01", "CheckLiveMessageUsersOnline") {
  setMethod(HttpRequest::Method::Post);
}

CheckLiveMessageUsersOnlineRequest::~CheckLiveMessageUsersOnlineRequest() {}

std::string CheckLiveMessageUsersOnlineRequest::getDataCenter() const {
  return dataCenter_;
}

void CheckLiveMessageUsersOnlineRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

std::vector<CheckLiveMessageUsersOnlineRequest::std::string> CheckLiveMessageUsersOnlineRequest::getUserIds() const {
  return userIds_;
}

void CheckLiveMessageUsersOnlineRequest::setUserIds(const std::vector<CheckLiveMessageUsersOnlineRequest::std::string> &userIds) {
  userIds_ = userIds;
  for(int dep1 = 0; dep1 != userIds.size(); dep1++) {
    setParameter(std::string("UserIds") + "." + std::to_string(dep1 + 1), userIds[dep1]);
  }
}

std::string CheckLiveMessageUsersOnlineRequest::getAppId() const {
  return appId_;
}

void CheckLiveMessageUsersOnlineRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

