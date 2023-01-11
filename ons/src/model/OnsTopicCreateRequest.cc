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

#include <alibabacloud/ons/model/OnsTopicCreateRequest.h>

using AlibabaCloud::Ons::Model::OnsTopicCreateRequest;

OnsTopicCreateRequest::OnsTopicCreateRequest()
    : RpcServiceRequest("ons", "2019-02-14", "OnsTopicCreate") {
  setMethod(HttpRequest::Method::Post);
}

OnsTopicCreateRequest::~OnsTopicCreateRequest() {}

int OnsTopicCreateRequest::getMessageType() const {
  return messageType_;
}

void OnsTopicCreateRequest::setMessageType(int messageType) {
  messageType_ = messageType;
  setParameter(std::string("MessageType"), std::to_string(messageType));
}

std::string OnsTopicCreateRequest::getRemark() const {
  return remark_;
}

void OnsTopicCreateRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string OnsTopicCreateRequest::getUserId() const {
  return userId_;
}

void OnsTopicCreateRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string OnsTopicCreateRequest::getInstanceId() const {
  return instanceId_;
}

void OnsTopicCreateRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string OnsTopicCreateRequest::getTopic() const {
  return topic_;
}

void OnsTopicCreateRequest::setTopic(const std::string &topic) {
  topic_ = topic;
  setParameter(std::string("Topic"), topic);
}

