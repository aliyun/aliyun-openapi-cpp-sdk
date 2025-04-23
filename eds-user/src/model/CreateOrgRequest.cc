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

#include <alibabacloud/eds-user/model/CreateOrgRequest.h>

using AlibabaCloud::Eds_user::Model::CreateOrgRequest;

CreateOrgRequest::CreateOrgRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "CreateOrg") {
  setMethod(HttpRequest::Method::Post);
}

CreateOrgRequest::~CreateOrgRequest() {}

std::string CreateOrgRequest::getIcon() const {
  return icon_;
}

void CreateOrgRequest::setIcon(const std::string &icon) {
  icon_ = icon;
  setParameter(std::string("Icon"), icon);
}

std::string CreateOrgRequest::getOrgName() const {
  return orgName_;
}

void CreateOrgRequest::setOrgName(const std::string &orgName) {
  orgName_ = orgName;
  setParameter(std::string("OrgName"), orgName);
}

std::string CreateOrgRequest::getParentOrgId() const {
  return parentOrgId_;
}

void CreateOrgRequest::setParentOrgId(const std::string &parentOrgId) {
  parentOrgId_ = parentOrgId;
  setParameter(std::string("ParentOrgId"), parentOrgId);
}

