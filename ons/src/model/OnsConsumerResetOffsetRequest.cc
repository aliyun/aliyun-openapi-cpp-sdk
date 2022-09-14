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

#include <alibabacloud/ons/model/OnsConsumerResetOffsetRequest.h>

using AlibabaCloud::Ons::Model::OnsConsumerResetOffsetRequest;

OnsConsumerResetOffsetRequest::OnsConsumerResetOffsetRequest()
    : RpcServiceRequest("ons", "2019-02-14", "OnsConsumerResetOffset") {
  setMethod(HttpRequest::Method::Post);
}

OnsConsumerResetOffsetRequest::~OnsConsumerResetOffsetRequest() {}

std::string OnsConsumerResetOffsetRequest::getGroupId() const {
  return groupId_;
}

void OnsConsumerResetOffsetRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

long OnsConsumerResetOffsetRequest::getResetTimestamp() const {
  return resetTimestamp_;
}

void OnsConsumerResetOffsetRequest::setResetTimestamp(long resetTimestamp) {
  resetTimestamp_ = resetTimestamp;
  setParameter(std::string("ResetTimestamp"), std::to_string(resetTimestamp));
}

int OnsConsumerResetOffsetRequest::getType() const {
  return type_;
}

void OnsConsumerResetOffsetRequest::setType(int type) {
  type_ = type;
  setParameter(std::string("Type"), std::to_string(type));
}

std::string OnsConsumerResetOffsetRequest::getInstanceId() const {
  return instanceId_;
}

void OnsConsumerResetOffsetRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string OnsConsumerResetOffsetRequest::getTopic() const {
  return topic_;
}

void OnsConsumerResetOffsetRequest::setTopic(const std::string &topic) {
  topic_ = topic;
  setParameter(std::string("Topic"), topic);
}

