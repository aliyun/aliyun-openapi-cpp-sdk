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

#include <alibabacloud/live/model/DeleteLiveMessageGroupRequest.h>

using AlibabaCloud::Live::Model::DeleteLiveMessageGroupRequest;

DeleteLiveMessageGroupRequest::DeleteLiveMessageGroupRequest()
    : RpcServiceRequest("live", "2016-11-01", "DeleteLiveMessageGroup") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLiveMessageGroupRequest::~DeleteLiveMessageGroupRequest() {}

std::string DeleteLiveMessageGroupRequest::getGroupId() const {
  return groupId_;
}

void DeleteLiveMessageGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DeleteLiveMessageGroupRequest::getDataCenter() const {
  return dataCenter_;
}

void DeleteLiveMessageGroupRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

std::string DeleteLiveMessageGroupRequest::getAppId() const {
  return appId_;
}

void DeleteLiveMessageGroupRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string DeleteLiveMessageGroupRequest::getOperatorId() const {
  return operatorId_;
}

void DeleteLiveMessageGroupRequest::setOperatorId(const std::string &operatorId) {
  operatorId_ = operatorId;
  setParameter(std::string("OperatorId"), operatorId);
}

