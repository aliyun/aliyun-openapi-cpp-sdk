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

#include <alibabacloud/domain/model/QueryOperationAuditInfoDetailRequest.h>

using AlibabaCloud::Domain::Model::QueryOperationAuditInfoDetailRequest;

QueryOperationAuditInfoDetailRequest::QueryOperationAuditInfoDetailRequest()
    : RpcServiceRequest("domain", "2018-01-29", "QueryOperationAuditInfoDetail") {
  setMethod(HttpRequest::Method::Post);
}

QueryOperationAuditInfoDetailRequest::~QueryOperationAuditInfoDetailRequest() {}

long QueryOperationAuditInfoDetailRequest::getAuditRecordId() const {
  return auditRecordId_;
}

void QueryOperationAuditInfoDetailRequest::setAuditRecordId(long auditRecordId) {
  auditRecordId_ = auditRecordId;
  setParameter(std::string("AuditRecordId"), std::to_string(auditRecordId));
}

std::string QueryOperationAuditInfoDetailRequest::getLang() const {
  return lang_;
}

void QueryOperationAuditInfoDetailRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

