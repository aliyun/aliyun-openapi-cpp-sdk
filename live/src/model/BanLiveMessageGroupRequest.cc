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

#include <alibabacloud/live/model/BanLiveMessageGroupRequest.h>

using AlibabaCloud::Live::Model::BanLiveMessageGroupRequest;

BanLiveMessageGroupRequest::BanLiveMessageGroupRequest()
    : RpcServiceRequest("live", "2016-11-01", "BanLiveMessageGroup") {
  setMethod(HttpRequest::Method::Post);
}

BanLiveMessageGroupRequest::~BanLiveMessageGroupRequest() {}

std::string BanLiveMessageGroupRequest::getGroupId() const {
  return groupId_;
}

void BanLiveMessageGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::vector<BanLiveMessageGroupRequest::std::string> BanLiveMessageGroupRequest::getExceptUsers() const {
  return exceptUsers_;
}

void BanLiveMessageGroupRequest::setExceptUsers(const std::vector<BanLiveMessageGroupRequest::std::string> &exceptUsers) {
  exceptUsers_ = exceptUsers;
  for(int dep1 = 0; dep1 != exceptUsers.size(); dep1++) {
    setParameter(std::string("ExceptUsers") + "." + std::to_string(dep1 + 1), exceptUsers[dep1]);
  }
}

std::string BanLiveMessageGroupRequest::getDataCenter() const {
  return dataCenter_;
}

void BanLiveMessageGroupRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

std::string BanLiveMessageGroupRequest::getAppId() const {
  return appId_;
}

void BanLiveMessageGroupRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

