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

#include <alibabacloud/resourcemanager/model/DeregisterDelegatedAdministratorRequest.h>

using AlibabaCloud::ResourceManager::Model::DeregisterDelegatedAdministratorRequest;

DeregisterDelegatedAdministratorRequest::DeregisterDelegatedAdministratorRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "DeregisterDelegatedAdministrator") {
  setMethod(HttpRequest::Method::Post);
}

DeregisterDelegatedAdministratorRequest::~DeregisterDelegatedAdministratorRequest() {}

std::string DeregisterDelegatedAdministratorRequest::getAccountId() const {
  return accountId_;
}

void DeregisterDelegatedAdministratorRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setParameter(std::string("AccountId"), accountId);
}

std::string DeregisterDelegatedAdministratorRequest::getServicePrincipal() const {
  return servicePrincipal_;
}

void DeregisterDelegatedAdministratorRequest::setServicePrincipal(const std::string &servicePrincipal) {
  servicePrincipal_ = servicePrincipal;
  setParameter(std::string("ServicePrincipal"), servicePrincipal);
}

