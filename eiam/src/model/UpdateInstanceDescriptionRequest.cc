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

#include <alibabacloud/eiam/model/UpdateInstanceDescriptionRequest.h>

using AlibabaCloud::Eiam::Model::UpdateInstanceDescriptionRequest;

UpdateInstanceDescriptionRequest::UpdateInstanceDescriptionRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "UpdateInstanceDescription") {
  setMethod(HttpRequest::Method::Post);
}

UpdateInstanceDescriptionRequest::~UpdateInstanceDescriptionRequest() {}

std::string UpdateInstanceDescriptionRequest::getDescription() const {
  return description_;
}

void UpdateInstanceDescriptionRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateInstanceDescriptionRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateInstanceDescriptionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

