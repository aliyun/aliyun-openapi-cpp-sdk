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

#include <alibabacloud/eiam/model/RemoveCustomPrivacyPoliciesFromBrandRequest.h>

using AlibabaCloud::Eiam::Model::RemoveCustomPrivacyPoliciesFromBrandRequest;

RemoveCustomPrivacyPoliciesFromBrandRequest::RemoveCustomPrivacyPoliciesFromBrandRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "RemoveCustomPrivacyPoliciesFromBrand") {
  setMethod(HttpRequest::Method::Post);
}

RemoveCustomPrivacyPoliciesFromBrandRequest::~RemoveCustomPrivacyPoliciesFromBrandRequest() {}

std::string RemoveCustomPrivacyPoliciesFromBrandRequest::getBrandId() const {
  return brandId_;
}

void RemoveCustomPrivacyPoliciesFromBrandRequest::setBrandId(const std::string &brandId) {
  brandId_ = brandId;
  setParameter(std::string("BrandId"), brandId);
}

std::vector<RemoveCustomPrivacyPoliciesFromBrandRequest::std::string> RemoveCustomPrivacyPoliciesFromBrandRequest::getCustomPrivacyPolicyIds() const {
  return customPrivacyPolicyIds_;
}

void RemoveCustomPrivacyPoliciesFromBrandRequest::setCustomPrivacyPolicyIds(const std::vector<RemoveCustomPrivacyPoliciesFromBrandRequest::std::string> &customPrivacyPolicyIds) {
  customPrivacyPolicyIds_ = customPrivacyPolicyIds;
  for(int dep1 = 0; dep1 != customPrivacyPolicyIds.size(); dep1++) {
    setParameter(std::string("CustomPrivacyPolicyIds") + "." + std::to_string(dep1 + 1), customPrivacyPolicyIds[dep1]);
  }
}

std::string RemoveCustomPrivacyPoliciesFromBrandRequest::getInstanceId() const {
  return instanceId_;
}

void RemoveCustomPrivacyPoliciesFromBrandRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

