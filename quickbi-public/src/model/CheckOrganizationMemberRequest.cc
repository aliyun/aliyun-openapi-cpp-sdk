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

#include <alibabacloud/quickbi-public/model/CheckOrganizationMemberRequest.h>

using AlibabaCloud::Quickbi_public::Model::CheckOrganizationMemberRequest;

CheckOrganizationMemberRequest::CheckOrganizationMemberRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "CheckOrganizationMember") {
  setMethod(HttpRequest::Method::Post);
}

CheckOrganizationMemberRequest::~CheckOrganizationMemberRequest() {}

std::string CheckOrganizationMemberRequest::getAccessPoint() const {
  return accessPoint_;
}

void CheckOrganizationMemberRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string CheckOrganizationMemberRequest::getSignType() const {
  return signType_;
}

void CheckOrganizationMemberRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string CheckOrganizationMemberRequest::getUserId() const {
  return userId_;
}

void CheckOrganizationMemberRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

