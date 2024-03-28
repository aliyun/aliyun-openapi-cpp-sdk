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

#include <alibabacloud/devops/model/GetCodeupOrganizationRequest.h>

using AlibabaCloud::Devops::Model::GetCodeupOrganizationRequest;

GetCodeupOrganizationRequest::GetCodeupOrganizationRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/organization/[identity]"};
  setMethod(HttpRequest::Method::Get);
}

GetCodeupOrganizationRequest::~GetCodeupOrganizationRequest() {}

std::string GetCodeupOrganizationRequest::getIdentity() const {
  return identity_;
}

void GetCodeupOrganizationRequest::setIdentity(const std::string &identity) {
  identity_ = identity;
  setParameter(std::string("identity"), identity);
}

std::string GetCodeupOrganizationRequest::getAccessToken() const {
  return accessToken_;
}

void GetCodeupOrganizationRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

