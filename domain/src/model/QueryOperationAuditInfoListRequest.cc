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

#include <alibabacloud/domain/model/QueryOperationAuditInfoListRequest.h>

using AlibabaCloud::Domain::Model::QueryOperationAuditInfoListRequest;

QueryOperationAuditInfoListRequest::QueryOperationAuditInfoListRequest()
    : RpcServiceRequest("domain", "2018-01-29", "QueryOperationAuditInfoList") {
  setMethod(HttpRequest::Method::Post);
}

QueryOperationAuditInfoListRequest::~QueryOperationAuditInfoListRequest() {}

int QueryOperationAuditInfoListRequest::getAuditStatus() const {
  return auditStatus_;
}

void QueryOperationAuditInfoListRequest::setAuditStatus(int auditStatus) {
  auditStatus_ = auditStatus;
  setParameter(std::string("AuditStatus"), std::to_string(auditStatus));
}

std::string QueryOperationAuditInfoListRequest::getDomainName() const {
  return domainName_;
}

void QueryOperationAuditInfoListRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

int QueryOperationAuditInfoListRequest::getPageNum() const {
  return pageNum_;
}

void QueryOperationAuditInfoListRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

int QueryOperationAuditInfoListRequest::getPageSize() const {
  return pageSize_;
}

void QueryOperationAuditInfoListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int QueryOperationAuditInfoListRequest::getAuditType() const {
  return auditType_;
}

void QueryOperationAuditInfoListRequest::setAuditType(int auditType) {
  auditType_ = auditType;
  setParameter(std::string("AuditType"), std::to_string(auditType));
}

std::string QueryOperationAuditInfoListRequest::getLang() const {
  return lang_;
}

void QueryOperationAuditInfoListRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

