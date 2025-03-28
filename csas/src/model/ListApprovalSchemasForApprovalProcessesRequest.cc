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

#include <alibabacloud/csas/model/ListApprovalSchemasForApprovalProcessesRequest.h>

using AlibabaCloud::Csas::Model::ListApprovalSchemasForApprovalProcessesRequest;

ListApprovalSchemasForApprovalProcessesRequest::ListApprovalSchemasForApprovalProcessesRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListApprovalSchemasForApprovalProcesses") {
  setMethod(HttpRequest::Method::Get);
}

ListApprovalSchemasForApprovalProcessesRequest::~ListApprovalSchemasForApprovalProcessesRequest() {}

std::vector<ListApprovalSchemasForApprovalProcessesRequest::std::string> ListApprovalSchemasForApprovalProcessesRequest::getProcessIds() const {
  return processIds_;
}

void ListApprovalSchemasForApprovalProcessesRequest::setProcessIds(const std::vector<ListApprovalSchemasForApprovalProcessesRequest::std::string> &processIds) {
  processIds_ = processIds;
  for(int dep1 = 0; dep1 != processIds.size(); dep1++) {
    setParameter(std::string("ProcessIds") + "." + std::to_string(dep1 + 1), processIds[dep1]);
  }
}

std::string ListApprovalSchemasForApprovalProcessesRequest::getSourceIp() const {
  return sourceIp_;
}

void ListApprovalSchemasForApprovalProcessesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

