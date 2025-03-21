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

#include <alibabacloud/eiam/model/AuthorizeApplicationToOrganizationalUnitsRequest.h>

using AlibabaCloud::Eiam::Model::AuthorizeApplicationToOrganizationalUnitsRequest;

AuthorizeApplicationToOrganizationalUnitsRequest::AuthorizeApplicationToOrganizationalUnitsRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "AuthorizeApplicationToOrganizationalUnits") {
  setMethod(HttpRequest::Method::Post);
}

AuthorizeApplicationToOrganizationalUnitsRequest::~AuthorizeApplicationToOrganizationalUnitsRequest() {}

std::string AuthorizeApplicationToOrganizationalUnitsRequest::getApplicationId() const {
  return applicationId_;
}

void AuthorizeApplicationToOrganizationalUnitsRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::vector<AuthorizeApplicationToOrganizationalUnitsRequest::std::string> AuthorizeApplicationToOrganizationalUnitsRequest::getOrganizationalUnitIds() const {
  return organizationalUnitIds_;
}

void AuthorizeApplicationToOrganizationalUnitsRequest::setOrganizationalUnitIds(const std::vector<AuthorizeApplicationToOrganizationalUnitsRequest::std::string> &organizationalUnitIds) {
  organizationalUnitIds_ = organizationalUnitIds;
  for(int dep1 = 0; dep1 != organizationalUnitIds.size(); dep1++) {
    setParameter(std::string("OrganizationalUnitIds") + "." + std::to_string(dep1 + 1), organizationalUnitIds[dep1]);
  }
}

std::string AuthorizeApplicationToOrganizationalUnitsRequest::getInstanceId() const {
  return instanceId_;
}

void AuthorizeApplicationToOrganizationalUnitsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

