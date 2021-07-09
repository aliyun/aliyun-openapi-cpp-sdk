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

#include <alibabacloud/devops-rdc/model/CreateServiceConnectionRequest.h>

using AlibabaCloud::Devops_rdc::Model::CreateServiceConnectionRequest;

CreateServiceConnectionRequest::CreateServiceConnectionRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "CreateServiceConnection") {
  setMethod(HttpRequest::Method::Post);
}

CreateServiceConnectionRequest::~CreateServiceConnectionRequest() {}

std::string CreateServiceConnectionRequest::getServiceConnectionType() const {
  return serviceConnectionType_;
}

void CreateServiceConnectionRequest::setServiceConnectionType(const std::string &serviceConnectionType) {
  serviceConnectionType_ = serviceConnectionType;
  setBodyParameter(std::string("ServiceConnectionType"), serviceConnectionType);
}

std::string CreateServiceConnectionRequest::getUserPk() const {
  return userPk_;
}

void CreateServiceConnectionRequest::setUserPk(const std::string &userPk) {
  userPk_ = userPk;
  setBodyParameter(std::string("UserPk"), userPk);
}

std::string CreateServiceConnectionRequest::getOrgId() const {
  return orgId_;
}

void CreateServiceConnectionRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

