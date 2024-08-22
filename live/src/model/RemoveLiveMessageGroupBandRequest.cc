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

#include <alibabacloud/live/model/RemoveLiveMessageGroupBandRequest.h>

using AlibabaCloud::Live::Model::RemoveLiveMessageGroupBandRequest;

RemoveLiveMessageGroupBandRequest::RemoveLiveMessageGroupBandRequest()
    : RpcServiceRequest("live", "2016-11-01", "RemoveLiveMessageGroupBand") {
  setMethod(HttpRequest::Method::Post);
}

RemoveLiveMessageGroupBandRequest::~RemoveLiveMessageGroupBandRequest() {}

std::string RemoveLiveMessageGroupBandRequest::getGroupId() const {
  return groupId_;
}

void RemoveLiveMessageGroupBandRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string RemoveLiveMessageGroupBandRequest::getDataCenter() const {
  return dataCenter_;
}

void RemoveLiveMessageGroupBandRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

std::vector<RemoveLiveMessageGroupBandRequest::std::string> RemoveLiveMessageGroupBandRequest::getUnbannedUsers() const {
  return unbannedUsers_;
}

void RemoveLiveMessageGroupBandRequest::setUnbannedUsers(const std::vector<RemoveLiveMessageGroupBandRequest::std::string> &unbannedUsers) {
  unbannedUsers_ = unbannedUsers;
  for(int dep1 = 0; dep1 != unbannedUsers.size(); dep1++) {
    setParameter(std::string("UnbannedUsers") + "." + std::to_string(dep1 + 1), unbannedUsers[dep1]);
  }
}

std::string RemoveLiveMessageGroupBandRequest::getAppId() const {
  return appId_;
}

void RemoveLiveMessageGroupBandRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

