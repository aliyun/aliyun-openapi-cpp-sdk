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

#include <alibabacloud/dataworks-public/model/QueryRecognizeDataByRuleTypeRequest.h>

using AlibabaCloud::Dataworks_public::Model::QueryRecognizeDataByRuleTypeRequest;

QueryRecognizeDataByRuleTypeRequest::QueryRecognizeDataByRuleTypeRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "QueryRecognizeDataByRuleType") {
  setMethod(HttpRequest::Method::Post);
}

QueryRecognizeDataByRuleTypeRequest::~QueryRecognizeDataByRuleTypeRequest() {}

std::string QueryRecognizeDataByRuleTypeRequest::getTenantId() const {
  return tenantId_;
}

void QueryRecognizeDataByRuleTypeRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string QueryRecognizeDataByRuleTypeRequest::getRecognizeRulesType() const {
  return recognizeRulesType_;
}

void QueryRecognizeDataByRuleTypeRequest::setRecognizeRulesType(const std::string &recognizeRulesType) {
  recognizeRulesType_ = recognizeRulesType;
  setBodyParameter(std::string("RecognizeRulesType"), recognizeRulesType);
}

