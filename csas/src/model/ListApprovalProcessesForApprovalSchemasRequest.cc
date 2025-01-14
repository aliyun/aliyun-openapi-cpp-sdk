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

#include <alibabacloud/csas/model/ListApprovalProcessesForApprovalSchemasRequest.h>

using AlibabaCloud::Csas::Model::ListApprovalProcessesForApprovalSchemasRequest;

ListApprovalProcessesForApprovalSchemasRequest::ListApprovalProcessesForApprovalSchemasRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListApprovalProcessesForApprovalSchemas") {
  setMethod(HttpRequest::Method::Get);
}

ListApprovalProcessesForApprovalSchemasRequest::~ListApprovalProcessesForApprovalSchemasRequest() {}

std::string ListApprovalProcessesForApprovalSchemasRequest::getSourceIp() const {
  return sourceIp_;
}

void ListApprovalProcessesForApprovalSchemasRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<ListApprovalProcessesForApprovalSchemasRequest::std::string> ListApprovalProcessesForApprovalSchemasRequest::getSchemaIds() const {
  return schemaIds_;
}

void ListApprovalProcessesForApprovalSchemasRequest::setSchemaIds(const std::vector<ListApprovalProcessesForApprovalSchemasRequest::std::string> &schemaIds) {
  schemaIds_ = schemaIds;
  for(int dep1 = 0; dep1 != schemaIds.size(); dep1++) {
    setParameter(std::string("SchemaIds") + "." + std::to_string(dep1 + 1), schemaIds[dep1]);
  }
}

