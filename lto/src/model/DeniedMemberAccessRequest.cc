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

#include <alibabacloud/lto/model/DeniedMemberAccessRequest.h>

using AlibabaCloud::Lto::Model::DeniedMemberAccessRequest;

DeniedMemberAccessRequest::DeniedMemberAccessRequest()
    : RpcServiceRequest("lto", "2021-07-07", "DeniedMemberAccess") {
  setMethod(HttpRequest::Method::Post);
}

DeniedMemberAccessRequest::~DeniedMemberAccessRequest() {}

std::string DeniedMemberAccessRequest::getMemberAccountId() const {
  return memberAccountId_;
}

void DeniedMemberAccessRequest::setMemberAccountId(const std::string &memberAccountId) {
  memberAccountId_ = memberAccountId;
  setParameter(std::string("MemberAccountId"), memberAccountId);
}

std::string DeniedMemberAccessRequest::getRegionId() const {
  return regionId_;
}

void DeniedMemberAccessRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

