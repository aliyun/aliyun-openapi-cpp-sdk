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

#include <alibabacloud/oceanbasepro/model/RemoveStandbyInstanceRequest.h>

using AlibabaCloud::OceanBasePro::Model::RemoveStandbyInstanceRequest;

RemoveStandbyInstanceRequest::RemoveStandbyInstanceRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "RemoveStandbyInstance") {
  setMethod(HttpRequest::Method::Post);
}

RemoveStandbyInstanceRequest::~RemoveStandbyInstanceRequest() {}

bool RemoveStandbyInstanceRequest::getForced() const {
  return forced_;
}

void RemoveStandbyInstanceRequest::setForced(bool forced) {
  forced_ = forced;
  setBodyParameter(std::string("Forced"), forced ? "true" : "false");
}

std::string RemoveStandbyInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void RemoveStandbyInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string RemoveStandbyInstanceRequest::getTargetInstanceId() const {
  return targetInstanceId_;
}

void RemoveStandbyInstanceRequest::setTargetInstanceId(const std::string &targetInstanceId) {
  targetInstanceId_ = targetInstanceId;
  setBodyParameter(std::string("TargetInstanceId"), targetInstanceId);
}

