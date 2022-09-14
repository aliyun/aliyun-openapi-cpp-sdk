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

#include <alibabacloud/ons/model/OnsGroupConsumerUpdateRequest.h>

using AlibabaCloud::Ons::Model::OnsGroupConsumerUpdateRequest;

OnsGroupConsumerUpdateRequest::OnsGroupConsumerUpdateRequest()
    : RpcServiceRequest("ons", "2019-02-14", "OnsGroupConsumerUpdate") {
  setMethod(HttpRequest::Method::Post);
}

OnsGroupConsumerUpdateRequest::~OnsGroupConsumerUpdateRequest() {}

std::string OnsGroupConsumerUpdateRequest::getGroupId() const {
  return groupId_;
}

void OnsGroupConsumerUpdateRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

bool OnsGroupConsumerUpdateRequest::getReadEnable() const {
  return readEnable_;
}

void OnsGroupConsumerUpdateRequest::setReadEnable(bool readEnable) {
  readEnable_ = readEnable;
  setParameter(std::string("ReadEnable"), readEnable ? "true" : "false");
}

std::string OnsGroupConsumerUpdateRequest::getInstanceId() const {
  return instanceId_;
}

void OnsGroupConsumerUpdateRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

