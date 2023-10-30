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

#include <alibabacloud/live/model/ModifyLiveMessageGroupBandRequest.h>

using AlibabaCloud::Live::Model::ModifyLiveMessageGroupBandRequest;

ModifyLiveMessageGroupBandRequest::ModifyLiveMessageGroupBandRequest()
    : RpcServiceRequest("live", "2016-11-01", "ModifyLiveMessageGroupBand") {
  setMethod(HttpRequest::Method::Post);
}

ModifyLiveMessageGroupBandRequest::~ModifyLiveMessageGroupBandRequest() {}

bool ModifyLiveMessageGroupBandRequest::getBannedAll() const {
  return bannedAll_;
}

void ModifyLiveMessageGroupBandRequest::setBannedAll(bool bannedAll) {
  bannedAll_ = bannedAll;
  setParameter(std::string("BannedAll"), bannedAll ? "true" : "false");
}

std::string ModifyLiveMessageGroupBandRequest::getGroupId() const {
  return groupId_;
}

void ModifyLiveMessageGroupBandRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::vector<ModifyLiveMessageGroupBandRequest::std::string> ModifyLiveMessageGroupBandRequest::getExceptUsers() const {
  return exceptUsers_;
}

void ModifyLiveMessageGroupBandRequest::setExceptUsers(const std::vector<ModifyLiveMessageGroupBandRequest::std::string> &exceptUsers) {
  exceptUsers_ = exceptUsers;
  for(int dep1 = 0; dep1 != exceptUsers.size(); dep1++) {
    setParameter(std::string("ExceptUsers") + "." + std::to_string(dep1 + 1), exceptUsers[dep1]);
  }
}

std::string ModifyLiveMessageGroupBandRequest::getDataCenter() const {
  return dataCenter_;
}

void ModifyLiveMessageGroupBandRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

std::string ModifyLiveMessageGroupBandRequest::getAppId() const {
  return appId_;
}

void ModifyLiveMessageGroupBandRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::vector<ModifyLiveMessageGroupBandRequest::std::string> ModifyLiveMessageGroupBandRequest::getBannnedUsers() const {
  return bannnedUsers_;
}

void ModifyLiveMessageGroupBandRequest::setBannnedUsers(const std::vector<ModifyLiveMessageGroupBandRequest::std::string> &bannnedUsers) {
  bannnedUsers_ = bannnedUsers;
  for(int dep1 = 0; dep1 != bannnedUsers.size(); dep1++) {
    setParameter(std::string("BannnedUsers") + "." + std::to_string(dep1 + 1), bannnedUsers[dep1]);
  }
}

