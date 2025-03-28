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

#include <alibabacloud/dataworks-public/model/DeleteRecognizeRuleRequest.h>

using AlibabaCloud::Dataworks_public::Model::DeleteRecognizeRuleRequest;

DeleteRecognizeRuleRequest::DeleteRecognizeRuleRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "DeleteRecognizeRule") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRecognizeRuleRequest::~DeleteRecognizeRuleRequest() {}

std::string DeleteRecognizeRuleRequest::getSensitiveId() const {
  return sensitiveId_;
}

void DeleteRecognizeRuleRequest::setSensitiveId(const std::string &sensitiveId) {
  sensitiveId_ = sensitiveId;
  setBodyParameter(std::string("SensitiveId"), sensitiveId);
}

std::string DeleteRecognizeRuleRequest::getTenantId() const {
  return tenantId_;
}

void DeleteRecognizeRuleRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

