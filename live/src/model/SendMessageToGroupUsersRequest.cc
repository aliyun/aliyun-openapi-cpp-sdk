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

#include <alibabacloud/live/model/SendMessageToGroupUsersRequest.h>

using AlibabaCloud::Live::Model::SendMessageToGroupUsersRequest;

SendMessageToGroupUsersRequest::SendMessageToGroupUsersRequest()
    : RpcServiceRequest("live", "2016-11-01", "SendMessageToGroupUsers") {
  setMethod(HttpRequest::Method::Post);
}

SendMessageToGroupUsersRequest::~SendMessageToGroupUsersRequest() {}

std::string SendMessageToGroupUsersRequest::getData() const {
  return data_;
}

void SendMessageToGroupUsersRequest::setData(const std::string &data) {
  data_ = data;
  setBodyParameter(std::string("Data"), data);
}

bool SendMessageToGroupUsersRequest::getSkipAudit() const {
  return skipAudit_;
}

void SendMessageToGroupUsersRequest::setSkipAudit(bool skipAudit) {
  skipAudit_ = skipAudit;
  setParameter(std::string("SkipAudit"), skipAudit ? "true" : "false");
}

int SendMessageToGroupUsersRequest::getType() const {
  return type_;
}

void SendMessageToGroupUsersRequest::setType(int type) {
  type_ = type;
  setBodyParameter(std::string("Type"), std::to_string(type));
}

std::string SendMessageToGroupUsersRequest::getOperatorUserId() const {
  return operatorUserId_;
}

void SendMessageToGroupUsersRequest::setOperatorUserId(const std::string &operatorUserId) {
  operatorUserId_ = operatorUserId;
  setBodyParameter(std::string("OperatorUserId"), operatorUserId);
}

std::vector<SendMessageToGroupUsersRequest::std::string> SendMessageToGroupUsersRequest::getReceiverIdList() const {
  return receiverIdList_;
}

void SendMessageToGroupUsersRequest::setReceiverIdList(const std::vector<SendMessageToGroupUsersRequest::std::string> &receiverIdList) {
  receiverIdList_ = receiverIdList;
  for(int dep1 = 0; dep1 != receiverIdList.size(); dep1++) {
    setBodyParameter(std::string("ReceiverIdList") + "." + std::to_string(dep1 + 1), receiverIdList[dep1]);
  }
}

std::string SendMessageToGroupUsersRequest::getGroupId() const {
  return groupId_;
}

void SendMessageToGroupUsersRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

std::string SendMessageToGroupUsersRequest::getAppId() const {
  return appId_;
}

void SendMessageToGroupUsersRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setBodyParameter(std::string("AppId"), appId);
}

