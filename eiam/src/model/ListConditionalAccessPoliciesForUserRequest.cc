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

#include <alibabacloud/eiam/model/ListConditionalAccessPoliciesForUserRequest.h>

using AlibabaCloud::Eiam::Model::ListConditionalAccessPoliciesForUserRequest;

ListConditionalAccessPoliciesForUserRequest::ListConditionalAccessPoliciesForUserRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListConditionalAccessPoliciesForUser") {
  setMethod(HttpRequest::Method::Post);
}

ListConditionalAccessPoliciesForUserRequest::~ListConditionalAccessPoliciesForUserRequest() {}

std::string ListConditionalAccessPoliciesForUserRequest::getUserId() const {
  return userId_;
}

void ListConditionalAccessPoliciesForUserRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string ListConditionalAccessPoliciesForUserRequest::getInstanceId() const {
  return instanceId_;
}

void ListConditionalAccessPoliciesForUserRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

