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

#include <alibabacloud/eiam/model/UpdateApplicationDescriptionRequest.h>

using AlibabaCloud::Eiam::Model::UpdateApplicationDescriptionRequest;

UpdateApplicationDescriptionRequest::UpdateApplicationDescriptionRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "UpdateApplicationDescription") {
  setMethod(HttpRequest::Method::Post);
}

UpdateApplicationDescriptionRequest::~UpdateApplicationDescriptionRequest() {}

std::string UpdateApplicationDescriptionRequest::getDescription() const {
  return description_;
}

void UpdateApplicationDescriptionRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateApplicationDescriptionRequest::getApplicationId() const {
  return applicationId_;
}

void UpdateApplicationDescriptionRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string UpdateApplicationDescriptionRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateApplicationDescriptionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

