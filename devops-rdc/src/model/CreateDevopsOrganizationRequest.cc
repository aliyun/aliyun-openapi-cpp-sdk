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

#include <alibabacloud/devops-rdc/model/CreateDevopsOrganizationRequest.h>

using AlibabaCloud::Devops_rdc::Model::CreateDevopsOrganizationRequest;

CreateDevopsOrganizationRequest::CreateDevopsOrganizationRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "CreateDevopsOrganization") {
  setMethod(HttpRequest::Method::Post);
}

CreateDevopsOrganizationRequest::~CreateDevopsOrganizationRequest() {}

std::string CreateDevopsOrganizationRequest::getOrgName() const {
  return orgName_;
}

void CreateDevopsOrganizationRequest::setOrgName(const std::string &orgName) {
  orgName_ = orgName;
  setBodyParameter(std::string("OrgName"), orgName);
}

std::string CreateDevopsOrganizationRequest::getSource() const {
  return source_;
}

void CreateDevopsOrganizationRequest::setSource(const std::string &source) {
  source_ = source;
  setBodyParameter(std::string("Source"), source);
}

std::string CreateDevopsOrganizationRequest::getRealPk() const {
  return realPk_;
}

void CreateDevopsOrganizationRequest::setRealPk(const std::string &realPk) {
  realPk_ = realPk;
  setBodyParameter(std::string("RealPk"), realPk);
}

int CreateDevopsOrganizationRequest::getDesiredMemberCount() const {
  return desiredMemberCount_;
}

void CreateDevopsOrganizationRequest::setDesiredMemberCount(int desiredMemberCount) {
  desiredMemberCount_ = desiredMemberCount;
  setBodyParameter(std::string("DesiredMemberCount"), std::to_string(desiredMemberCount));
}

