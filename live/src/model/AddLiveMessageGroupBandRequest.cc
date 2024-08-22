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

#include <alibabacloud/live/model/AddLiveMessageGroupBandRequest.h>

using AlibabaCloud::Live::Model::AddLiveMessageGroupBandRequest;

AddLiveMessageGroupBandRequest::AddLiveMessageGroupBandRequest()
    : RpcServiceRequest("live", "2016-11-01", "AddLiveMessageGroupBand") {
  setMethod(HttpRequest::Method::Post);
}

AddLiveMessageGroupBandRequest::~AddLiveMessageGroupBandRequest() {}

std::vector<AddLiveMessageGroupBandRequest::std::string> AddLiveMessageGroupBandRequest::getBannedUsers() const {
  return bannedUsers_;
}

void AddLiveMessageGroupBandRequest::setBannedUsers(const std::vector<AddLiveMessageGroupBandRequest::std::string> &bannedUsers) {
  bannedUsers_ = bannedUsers;
  for(int dep1 = 0; dep1 != bannedUsers.size(); dep1++) {
    setParameter(std::string("BannedUsers") + "." + std::to_string(dep1 + 1), bannedUsers[dep1]);
  }
}

std::string AddLiveMessageGroupBandRequest::getGroupId() const {
  return groupId_;
}

void AddLiveMessageGroupBandRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string AddLiveMessageGroupBandRequest::getDataCenter() const {
  return dataCenter_;
}

void AddLiveMessageGroupBandRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

std::string AddLiveMessageGroupBandRequest::getAppId() const {
  return appId_;
}

void AddLiveMessageGroupBandRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

