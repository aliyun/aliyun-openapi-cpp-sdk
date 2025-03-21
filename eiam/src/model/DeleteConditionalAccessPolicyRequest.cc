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

#include <alibabacloud/eiam/model/DeleteConditionalAccessPolicyRequest.h>

using AlibabaCloud::Eiam::Model::DeleteConditionalAccessPolicyRequest;

DeleteConditionalAccessPolicyRequest::DeleteConditionalAccessPolicyRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "DeleteConditionalAccessPolicy") {
  setMethod(HttpRequest::Method::Post);
}

DeleteConditionalAccessPolicyRequest::~DeleteConditionalAccessPolicyRequest() {}

std::string DeleteConditionalAccessPolicyRequest::getConditionalAccessPolicyId() const {
  return conditionalAccessPolicyId_;
}

void DeleteConditionalAccessPolicyRequest::setConditionalAccessPolicyId(const std::string &conditionalAccessPolicyId) {
  conditionalAccessPolicyId_ = conditionalAccessPolicyId;
  setParameter(std::string("ConditionalAccessPolicyId"), conditionalAccessPolicyId);
}

std::string DeleteConditionalAccessPolicyRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteConditionalAccessPolicyRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

