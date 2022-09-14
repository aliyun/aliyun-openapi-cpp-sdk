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

#include <alibabacloud/ons/model/OnsConsumerStatusRequest.h>

using AlibabaCloud::Ons::Model::OnsConsumerStatusRequest;

OnsConsumerStatusRequest::OnsConsumerStatusRequest()
    : RpcServiceRequest("ons", "2019-02-14", "OnsConsumerStatus") {
  setMethod(HttpRequest::Method::Post);
}

OnsConsumerStatusRequest::~OnsConsumerStatusRequest() {}

std::string OnsConsumerStatusRequest::getGroupId() const {
  return groupId_;
}

void OnsConsumerStatusRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string OnsConsumerStatusRequest::getInstanceId() const {
  return instanceId_;
}

void OnsConsumerStatusRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

bool OnsConsumerStatusRequest::getNeedJstack() const {
  return needJstack_;
}

void OnsConsumerStatusRequest::setNeedJstack(bool needJstack) {
  needJstack_ = needJstack;
  setParameter(std::string("NeedJstack"), needJstack ? "true" : "false");
}

bool OnsConsumerStatusRequest::getDetail() const {
  return detail_;
}

void OnsConsumerStatusRequest::setDetail(bool detail) {
  detail_ = detail;
  setParameter(std::string("Detail"), detail ? "true" : "false");
}

