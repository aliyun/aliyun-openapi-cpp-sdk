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

#include <alibabacloud/live/model/ModifyLiveMessageGroupRequest.h>

using AlibabaCloud::Live::Model::ModifyLiveMessageGroupRequest;

ModifyLiveMessageGroupRequest::ModifyLiveMessageGroupRequest()
    : RpcServiceRequest("live", "2016-11-01", "ModifyLiveMessageGroup") {
  setMethod(HttpRequest::Method::Post);
}

ModifyLiveMessageGroupRequest::~ModifyLiveMessageGroupRequest() {}

std::string ModifyLiveMessageGroupRequest::getGroupId() const {
  return groupId_;
}

void ModifyLiveMessageGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string ModifyLiveMessageGroupRequest::getGroupInfo() const {
  return groupInfo_;
}

void ModifyLiveMessageGroupRequest::setGroupInfo(const std::string &groupInfo) {
  groupInfo_ = groupInfo;
  setParameter(std::string("GroupInfo"), groupInfo);
}

std::string ModifyLiveMessageGroupRequest::getDataCenter() const {
  return dataCenter_;
}

void ModifyLiveMessageGroupRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

bool ModifyLiveMessageGroupRequest::getModifyInfo() const {
  return modifyInfo_;
}

void ModifyLiveMessageGroupRequest::setModifyInfo(bool modifyInfo) {
  modifyInfo_ = modifyInfo;
  setParameter(std::string("ModifyInfo"), modifyInfo ? "true" : "false");
}

std::vector<ModifyLiveMessageGroupRequest::std::string> ModifyLiveMessageGroupRequest::getAdminList() const {
  return adminList_;
}

void ModifyLiveMessageGroupRequest::setAdminList(const std::vector<ModifyLiveMessageGroupRequest::std::string> &adminList) {
  adminList_ = adminList;
  for(int dep1 = 0; dep1 != adminList.size(); dep1++) {
    setParameter(std::string("AdminList") + "." + std::to_string(dep1 + 1), adminList[dep1]);
  }
}

std::string ModifyLiveMessageGroupRequest::getAppId() const {
  return appId_;
}

void ModifyLiveMessageGroupRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

bool ModifyLiveMessageGroupRequest::getModifyAdmin() const {
  return modifyAdmin_;
}

void ModifyLiveMessageGroupRequest::setModifyAdmin(bool modifyAdmin) {
  modifyAdmin_ = modifyAdmin;
  setParameter(std::string("ModifyAdmin"), modifyAdmin ? "true" : "false");
}

