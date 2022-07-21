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

#include <alibabacloud/domain/model/SubmitOperationCredentialsRequest.h>

using AlibabaCloud::Domain::Model::SubmitOperationCredentialsRequest;

SubmitOperationCredentialsRequest::SubmitOperationCredentialsRequest()
    : RpcServiceRequest("domain", "2018-01-29", "SubmitOperationCredentials") {
  setMethod(HttpRequest::Method::Post);
}

SubmitOperationCredentialsRequest::~SubmitOperationCredentialsRequest() {}

std::string SubmitOperationCredentialsRequest::getCredentials() const {
  return credentials_;
}

void SubmitOperationCredentialsRequest::setCredentials(const std::string &credentials) {
  credentials_ = credentials;
  setParameter(std::string("Credentials"), credentials);
}

long SubmitOperationCredentialsRequest::getAuditRecordId() const {
  return auditRecordId_;
}

void SubmitOperationCredentialsRequest::setAuditRecordId(long auditRecordId) {
  auditRecordId_ = auditRecordId;
  setParameter(std::string("AuditRecordId"), std::to_string(auditRecordId));
}

int SubmitOperationCredentialsRequest::getRegType() const {
  return regType_;
}

void SubmitOperationCredentialsRequest::setRegType(int regType) {
  regType_ = regType;
  setParameter(std::string("RegType"), std::to_string(regType));
}

int SubmitOperationCredentialsRequest::getAuditType() const {
  return auditType_;
}

void SubmitOperationCredentialsRequest::setAuditType(int auditType) {
  auditType_ = auditType;
  setParameter(std::string("AuditType"), std::to_string(auditType));
}

std::string SubmitOperationCredentialsRequest::getLang() const {
  return lang_;
}

void SubmitOperationCredentialsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

