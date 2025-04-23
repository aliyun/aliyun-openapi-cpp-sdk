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

#include <alibabacloud/eds-user/model/ModifyOrgRequest.h>

using AlibabaCloud::Eds_user::Model::ModifyOrgRequest;

ModifyOrgRequest::ModifyOrgRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "ModifyOrg") {
  setMethod(HttpRequest::Method::Post);
}

ModifyOrgRequest::~ModifyOrgRequest() {}

std::string ModifyOrgRequest::getIcon() const {
  return icon_;
}

void ModifyOrgRequest::setIcon(const std::string &icon) {
  icon_ = icon;
  setParameter(std::string("Icon"), icon);
}

std::string ModifyOrgRequest::getOrgId() const {
  return orgId_;
}

void ModifyOrgRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setParameter(std::string("OrgId"), orgId);
}

std::string ModifyOrgRequest::getOrgName() const {
  return orgName_;
}

void ModifyOrgRequest::setOrgName(const std::string &orgName) {
  orgName_ = orgName;
  setParameter(std::string("OrgName"), orgName);
}

