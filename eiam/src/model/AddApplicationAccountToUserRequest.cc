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

#include <alibabacloud/eiam/model/AddApplicationAccountToUserRequest.h>

using AlibabaCloud::Eiam::Model::AddApplicationAccountToUserRequest;

AddApplicationAccountToUserRequest::AddApplicationAccountToUserRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "AddApplicationAccountToUser") {
  setMethod(HttpRequest::Method::Post);
}

AddApplicationAccountToUserRequest::~AddApplicationAccountToUserRequest() {}

std::string AddApplicationAccountToUserRequest::getUserId() const {
  return userId_;
}

void AddApplicationAccountToUserRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string AddApplicationAccountToUserRequest::getApplicationId() const {
  return applicationId_;
}

void AddApplicationAccountToUserRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::vector<AddApplicationAccountToUserRequest::ApplicationUserAttributes> AddApplicationAccountToUserRequest::getApplicationUserAttributes() const {
  return applicationUserAttributes_;
}

void AddApplicationAccountToUserRequest::setApplicationUserAttributes(const std::vector<AddApplicationAccountToUserRequest::ApplicationUserAttributes> &applicationUserAttributes) {
  applicationUserAttributes_ = applicationUserAttributes;
  for(int dep1 = 0; dep1 != applicationUserAttributes.size(); dep1++) {
    setParameter(std::string("ApplicationUserAttributes") + "." + std::to_string(dep1 + 1) + ".AttributeValueExpression", applicationUserAttributes[dep1].attributeValueExpression);
    setParameter(std::string("ApplicationUserAttributes") + "." + std::to_string(dep1 + 1) + ".AttributeType", applicationUserAttributes[dep1].attributeType);
    setParameter(std::string("ApplicationUserAttributes") + "." + std::to_string(dep1 + 1) + ".AttributeName", applicationUserAttributes[dep1].attributeName);
  }
}

std::string AddApplicationAccountToUserRequest::getInstanceId() const {
  return instanceId_;
}

void AddApplicationAccountToUserRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string AddApplicationAccountToUserRequest::getApplicationUsername() const {
  return applicationUsername_;
}

void AddApplicationAccountToUserRequest::setApplicationUsername(const std::string &applicationUsername) {
  applicationUsername_ = applicationUsername;
  setParameter(std::string("ApplicationUsername"), applicationUsername);
}

