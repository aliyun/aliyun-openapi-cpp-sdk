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

#include <alibabacloud/domain/model/SubmitOperationAuditInfoRequest.h>

using AlibabaCloud::Domain::Model::SubmitOperationAuditInfoRequest;

SubmitOperationAuditInfoRequest::SubmitOperationAuditInfoRequest()
    : RpcServiceRequest("domain", "2018-01-29", "SubmitOperationAuditInfo") {
  setMethod(HttpRequest::Method::Post);
}

SubmitOperationAuditInfoRequest::~SubmitOperationAuditInfoRequest() {}

std::string SubmitOperationAuditInfoRequest::getDomainName() const {
  return domainName_;
}

void SubmitOperationAuditInfoRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string SubmitOperationAuditInfoRequest::getAuditInfo() const {
  return auditInfo_;
}

void SubmitOperationAuditInfoRequest::setAuditInfo(const std::string &auditInfo) {
  auditInfo_ = auditInfo;
  setParameter(std::string("AuditInfo"), auditInfo);
}

int SubmitOperationAuditInfoRequest::getAuditType() const {
  return auditType_;
}

void SubmitOperationAuditInfoRequest::setAuditType(int auditType) {
  auditType_ = auditType;
  setParameter(std::string("AuditType"), std::to_string(auditType));
}

long SubmitOperationAuditInfoRequest::getId() const {
  return id_;
}

void SubmitOperationAuditInfoRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string SubmitOperationAuditInfoRequest::getLang() const {
  return lang_;
}

void SubmitOperationAuditInfoRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

