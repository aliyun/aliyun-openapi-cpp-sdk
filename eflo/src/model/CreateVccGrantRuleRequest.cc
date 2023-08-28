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

#include <alibabacloud/eflo/model/CreateVccGrantRuleRequest.h>

using AlibabaCloud::Eflo::Model::CreateVccGrantRuleRequest;

CreateVccGrantRuleRequest::CreateVccGrantRuleRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "CreateVccGrantRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateVccGrantRuleRequest::~CreateVccGrantRuleRequest() {}

std::string CreateVccGrantRuleRequest::getErId() const {
  return erId_;
}

void CreateVccGrantRuleRequest::setErId(const std::string &erId) {
  erId_ = erId;
  setBodyParameter(std::string("ErId"), erId);
}

std::string CreateVccGrantRuleRequest::getGrantTenantId() const {
  return grantTenantId_;
}

void CreateVccGrantRuleRequest::setGrantTenantId(const std::string &grantTenantId) {
  grantTenantId_ = grantTenantId;
  setBodyParameter(std::string("GrantTenantId"), grantTenantId);
}

std::string CreateVccGrantRuleRequest::getInstanceId() const {
  return instanceId_;
}

void CreateVccGrantRuleRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string CreateVccGrantRuleRequest::getRegionId() const {
  return regionId_;
}

void CreateVccGrantRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

