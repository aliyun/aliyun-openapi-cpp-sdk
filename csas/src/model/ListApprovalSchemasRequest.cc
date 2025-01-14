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

#include <alibabacloud/csas/model/ListApprovalSchemasRequest.h>

using AlibabaCloud::Csas::Model::ListApprovalSchemasRequest;

ListApprovalSchemasRequest::ListApprovalSchemasRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListApprovalSchemas") {
  setMethod(HttpRequest::Method::Get);
}

ListApprovalSchemasRequest::~ListApprovalSchemasRequest() {}

std::string ListApprovalSchemasRequest::getSourceIp() const {
  return sourceIp_;
}

void ListApprovalSchemasRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<ListApprovalSchemasRequest::std::string> ListApprovalSchemasRequest::getSchemaIds() const {
  return schemaIds_;
}

void ListApprovalSchemasRequest::setSchemaIds(const std::vector<ListApprovalSchemasRequest::std::string> &schemaIds) {
  schemaIds_ = schemaIds;
  for(int dep1 = 0; dep1 != schemaIds.size(); dep1++) {
    setParameter(std::string("SchemaIds") + "." + std::to_string(dep1 + 1), schemaIds[dep1]);
  }
}

long ListApprovalSchemasRequest::getPageSize() const {
  return pageSize_;
}

void ListApprovalSchemasRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListApprovalSchemasRequest::getSchemaName() const {
  return schemaName_;
}

void ListApprovalSchemasRequest::setSchemaName(const std::string &schemaName) {
  schemaName_ = schemaName;
  setParameter(std::string("SchemaName"), schemaName);
}

std::string ListApprovalSchemasRequest::getPolicyType() const {
  return policyType_;
}

void ListApprovalSchemasRequest::setPolicyType(const std::string &policyType) {
  policyType_ = policyType;
  setParameter(std::string("PolicyType"), policyType);
}

long ListApprovalSchemasRequest::getCurrentPage() const {
  return currentPage_;
}

void ListApprovalSchemasRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

