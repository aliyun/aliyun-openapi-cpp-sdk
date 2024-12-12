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

#include <alibabacloud/dms-enterprise/model/CreateAbacAuthorizationRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateAbacAuthorizationRequest;

CreateAbacAuthorizationRequest::CreateAbacAuthorizationRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateAbacAuthorization") {
  setMethod(HttpRequest::Method::Post);
}

CreateAbacAuthorizationRequest::~CreateAbacAuthorizationRequest() {}

long CreateAbacAuthorizationRequest::getRoleId() const {
  return roleId_;
}

void CreateAbacAuthorizationRequest::setRoleId(long roleId) {
  roleId_ = roleId;
  setParameter(std::string("RoleId"), std::to_string(roleId));
}

long CreateAbacAuthorizationRequest::getUserId() const {
  return userId_;
}

void CreateAbacAuthorizationRequest::setUserId(long userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), std::to_string(userId));
}

long CreateAbacAuthorizationRequest::getTid() const {
  return tid_;
}

void CreateAbacAuthorizationRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long CreateAbacAuthorizationRequest::getPolicyId() const {
  return policyId_;
}

void CreateAbacAuthorizationRequest::setPolicyId(long policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), std::to_string(policyId));
}

std::string CreateAbacAuthorizationRequest::getIdentityType() const {
  return identityType_;
}

void CreateAbacAuthorizationRequest::setIdentityType(const std::string &identityType) {
  identityType_ = identityType;
  setParameter(std::string("IdentityType"), identityType);
}

