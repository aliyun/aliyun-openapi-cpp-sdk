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

#include <alibabacloud/eflo/model/DeleteVpdGrantRuleRequest.h>

using AlibabaCloud::Eflo::Model::DeleteVpdGrantRuleRequest;

DeleteVpdGrantRuleRequest::DeleteVpdGrantRuleRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "DeleteVpdGrantRule") {
  setMethod(HttpRequest::Method::Post);
}

DeleteVpdGrantRuleRequest::~DeleteVpdGrantRuleRequest() {}

std::string DeleteVpdGrantRuleRequest::getErId() const {
  return erId_;
}

void DeleteVpdGrantRuleRequest::setErId(const std::string &erId) {
  erId_ = erId;
  setBodyParameter(std::string("ErId"), erId);
}

std::string DeleteVpdGrantRuleRequest::getGrantTenantId() const {
  return grantTenantId_;
}

void DeleteVpdGrantRuleRequest::setGrantTenantId(const std::string &grantTenantId) {
  grantTenantId_ = grantTenantId;
  setBodyParameter(std::string("GrantTenantId"), grantTenantId);
}

std::string DeleteVpdGrantRuleRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteVpdGrantRuleRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteVpdGrantRuleRequest::getRegionId() const {
  return regionId_;
}

void DeleteVpdGrantRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string DeleteVpdGrantRuleRequest::getGrantRuleId() const {
  return grantRuleId_;
}

void DeleteVpdGrantRuleRequest::setGrantRuleId(const std::string &grantRuleId) {
  grantRuleId_ = grantRuleId;
  setBodyParameter(std::string("GrantRuleId"), grantRuleId);
}

