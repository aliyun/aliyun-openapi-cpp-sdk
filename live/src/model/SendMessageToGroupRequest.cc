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

#include <alibabacloud/live/model/SendMessageToGroupRequest.h>

using AlibabaCloud::Live::Model::SendMessageToGroupRequest;

SendMessageToGroupRequest::SendMessageToGroupRequest()
    : RpcServiceRequest("live", "2016-11-01", "SendMessageToGroup") {
  setMethod(HttpRequest::Method::Post);
}

SendMessageToGroupRequest::~SendMessageToGroupRequest() {}

std::string SendMessageToGroupRequest::getData() const {
  return data_;
}

void SendMessageToGroupRequest::setData(const std::string &data) {
  data_ = data;
  setBodyParameter(std::string("Data"), data);
}

bool SendMessageToGroupRequest::getSkipAudit() const {
  return skipAudit_;
}

void SendMessageToGroupRequest::setSkipAudit(bool skipAudit) {
  skipAudit_ = skipAudit;
  setParameter(std::string("SkipAudit"), skipAudit ? "true" : "false");
}

int SendMessageToGroupRequest::getType() const {
  return type_;
}

void SendMessageToGroupRequest::setType(int type) {
  type_ = type;
  setBodyParameter(std::string("Type"), std::to_string(type));
}

std::string SendMessageToGroupRequest::getOperatorUserId() const {
  return operatorUserId_;
}

void SendMessageToGroupRequest::setOperatorUserId(const std::string &operatorUserId) {
  operatorUserId_ = operatorUserId;
  setBodyParameter(std::string("OperatorUserId"), operatorUserId);
}

std::string SendMessageToGroupRequest::getGroupId() const {
  return groupId_;
}

void SendMessageToGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

std::string SendMessageToGroupRequest::getAppId() const {
  return appId_;
}

void SendMessageToGroupRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setBodyParameter(std::string("AppId"), appId);
}

