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

#include <alibabacloud/live/model/CreateLiveMessageGroupRequest.h>

using AlibabaCloud::Live::Model::CreateLiveMessageGroupRequest;

CreateLiveMessageGroupRequest::CreateLiveMessageGroupRequest()
    : RpcServiceRequest("live", "2016-11-01", "CreateLiveMessageGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateLiveMessageGroupRequest::~CreateLiveMessageGroupRequest() {}

std::string CreateLiveMessageGroupRequest::getGroupId() const {
  return groupId_;
}

void CreateLiveMessageGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string CreateLiveMessageGroupRequest::getGroupInfo() const {
  return groupInfo_;
}

void CreateLiveMessageGroupRequest::setGroupInfo(const std::string &groupInfo) {
  groupInfo_ = groupInfo;
  setParameter(std::string("GroupInfo"), groupInfo);
}

std::string CreateLiveMessageGroupRequest::getCreatorId() const {
  return creatorId_;
}

void CreateLiveMessageGroupRequest::setCreatorId(const std::string &creatorId) {
  creatorId_ = creatorId;
  setParameter(std::string("CreatorId"), creatorId);
}

std::string CreateLiveMessageGroupRequest::getDataCenter() const {
  return dataCenter_;
}

void CreateLiveMessageGroupRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

std::string CreateLiveMessageGroupRequest::getGroupName() const {
  return groupName_;
}

void CreateLiveMessageGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string CreateLiveMessageGroupRequest::getAppId() const {
  return appId_;
}

void CreateLiveMessageGroupRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::vector<CreateLiveMessageGroupRequest::std::string> CreateLiveMessageGroupRequest::getAdministrators() const {
  return administrators_;
}

void CreateLiveMessageGroupRequest::setAdministrators(const std::vector<CreateLiveMessageGroupRequest::std::string> &administrators) {
  administrators_ = administrators;
  for(int dep1 = 0; dep1 != administrators.size(); dep1++) {
    setParameter(std::string("Administrators") + "." + std::to_string(dep1 + 1), administrators[dep1]);
  }
}

