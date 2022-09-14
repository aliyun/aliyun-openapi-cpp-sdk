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

#include <alibabacloud/ons/model/OnsDLQMessageGetByIdRequest.h>

using AlibabaCloud::Ons::Model::OnsDLQMessageGetByIdRequest;

OnsDLQMessageGetByIdRequest::OnsDLQMessageGetByIdRequest()
    : RpcServiceRequest("ons", "2019-02-14", "OnsDLQMessageGetById") {
  setMethod(HttpRequest::Method::Post);
}

OnsDLQMessageGetByIdRequest::~OnsDLQMessageGetByIdRequest() {}

std::string OnsDLQMessageGetByIdRequest::getGroupId() const {
  return groupId_;
}

void OnsDLQMessageGetByIdRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string OnsDLQMessageGetByIdRequest::getMsgId() const {
  return msgId_;
}

void OnsDLQMessageGetByIdRequest::setMsgId(const std::string &msgId) {
  msgId_ = msgId;
  setParameter(std::string("MsgId"), msgId);
}

std::string OnsDLQMessageGetByIdRequest::getInstanceId() const {
  return instanceId_;
}

void OnsDLQMessageGetByIdRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

