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

#include <alibabacloud/ons/model/OnsInstanceUpdateRequest.h>

using AlibabaCloud::Ons::Model::OnsInstanceUpdateRequest;

OnsInstanceUpdateRequest::OnsInstanceUpdateRequest()
    : RpcServiceRequest("ons", "2019-02-14", "OnsInstanceUpdate") {
  setMethod(HttpRequest::Method::Post);
}

OnsInstanceUpdateRequest::~OnsInstanceUpdateRequest() {}

std::string OnsInstanceUpdateRequest::getRemark() const {
  return remark_;
}

void OnsInstanceUpdateRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string OnsInstanceUpdateRequest::getInstanceName() const {
  return instanceName_;
}

void OnsInstanceUpdateRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string OnsInstanceUpdateRequest::getInstanceId() const {
  return instanceId_;
}

void OnsInstanceUpdateRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

