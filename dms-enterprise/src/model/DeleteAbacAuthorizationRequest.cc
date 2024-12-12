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

#include <alibabacloud/dms-enterprise/model/DeleteAbacAuthorizationRequest.h>

using AlibabaCloud::Dms_enterprise::Model::DeleteAbacAuthorizationRequest;

DeleteAbacAuthorizationRequest::DeleteAbacAuthorizationRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "DeleteAbacAuthorization") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAbacAuthorizationRequest::~DeleteAbacAuthorizationRequest() {}

long DeleteAbacAuthorizationRequest::getTid() const {
  return tid_;
}

void DeleteAbacAuthorizationRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string DeleteAbacAuthorizationRequest::getIdentityType() const {
  return identityType_;
}

void DeleteAbacAuthorizationRequest::setIdentityType(const std::string &identityType) {
  identityType_ = identityType;
  setParameter(std::string("IdentityType"), identityType);
}

long DeleteAbacAuthorizationRequest::getAuthorizationId() const {
  return authorizationId_;
}

void DeleteAbacAuthorizationRequest::setAuthorizationId(long authorizationId) {
  authorizationId_ = authorizationId;
  setParameter(std::string("AuthorizationId"), std::to_string(authorizationId));
}

