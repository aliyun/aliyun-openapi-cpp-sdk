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

#include <alibabacloud/dataworks-public/model/QueryRecognizeRuleDetailRequest.h>

using AlibabaCloud::Dataworks_public::Model::QueryRecognizeRuleDetailRequest;

QueryRecognizeRuleDetailRequest::QueryRecognizeRuleDetailRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "QueryRecognizeRuleDetail") {
  setMethod(HttpRequest::Method::Post);
}

QueryRecognizeRuleDetailRequest::~QueryRecognizeRuleDetailRequest() {}

std::string QueryRecognizeRuleDetailRequest::getTenantId() const {
  return tenantId_;
}

void QueryRecognizeRuleDetailRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string QueryRecognizeRuleDetailRequest::getSensitiveName() const {
  return sensitiveName_;
}

void QueryRecognizeRuleDetailRequest::setSensitiveName(const std::string &sensitiveName) {
  sensitiveName_ = sensitiveName;
  setBodyParameter(std::string("SensitiveName"), sensitiveName);
}

