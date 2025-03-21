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

#include <alibabacloud/eiam/model/GetIdentityProviderUdPullConfigurationRequest.h>

using AlibabaCloud::Eiam::Model::GetIdentityProviderUdPullConfigurationRequest;

GetIdentityProviderUdPullConfigurationRequest::GetIdentityProviderUdPullConfigurationRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "GetIdentityProviderUdPullConfiguration") {
  setMethod(HttpRequest::Method::Post);
}

GetIdentityProviderUdPullConfigurationRequest::~GetIdentityProviderUdPullConfigurationRequest() {}

std::string GetIdentityProviderUdPullConfigurationRequest::getInstanceId() const {
  return instanceId_;
}

void GetIdentityProviderUdPullConfigurationRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetIdentityProviderUdPullConfigurationRequest::getIdentityProviderId() const {
  return identityProviderId_;
}

void GetIdentityProviderUdPullConfigurationRequest::setIdentityProviderId(const std::string &identityProviderId) {
  identityProviderId_ = identityProviderId;
  setParameter(std::string("IdentityProviderId"), identityProviderId);
}

