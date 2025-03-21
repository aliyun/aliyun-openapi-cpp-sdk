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

#include <alibabacloud/eiam/model/UpdateConditionalAccessPolicyDescriptionRequest.h>

using AlibabaCloud::Eiam::Model::UpdateConditionalAccessPolicyDescriptionRequest;

UpdateConditionalAccessPolicyDescriptionRequest::UpdateConditionalAccessPolicyDescriptionRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "UpdateConditionalAccessPolicyDescription") {
  setMethod(HttpRequest::Method::Post);
}

UpdateConditionalAccessPolicyDescriptionRequest::~UpdateConditionalAccessPolicyDescriptionRequest() {}

std::string UpdateConditionalAccessPolicyDescriptionRequest::getDescription() const {
  return description_;
}

void UpdateConditionalAccessPolicyDescriptionRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateConditionalAccessPolicyDescriptionRequest::getConditionalAccessPolicyId() const {
  return conditionalAccessPolicyId_;
}

void UpdateConditionalAccessPolicyDescriptionRequest::setConditionalAccessPolicyId(const std::string &conditionalAccessPolicyId) {
  conditionalAccessPolicyId_ = conditionalAccessPolicyId;
  setParameter(std::string("ConditionalAccessPolicyId"), conditionalAccessPolicyId);
}

std::string UpdateConditionalAccessPolicyDescriptionRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateConditionalAccessPolicyDescriptionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

