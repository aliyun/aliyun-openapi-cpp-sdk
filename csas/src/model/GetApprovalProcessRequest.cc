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

#include <alibabacloud/csas/model/GetApprovalProcessRequest.h>

using AlibabaCloud::Csas::Model::GetApprovalProcessRequest;

GetApprovalProcessRequest::GetApprovalProcessRequest()
    : RpcServiceRequest("csas", "2023-01-20", "GetApprovalProcess") {
  setMethod(HttpRequest::Method::Get);
}

GetApprovalProcessRequest::~GetApprovalProcessRequest() {}

std::string GetApprovalProcessRequest::getSourceIp() const {
  return sourceIp_;
}

void GetApprovalProcessRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string GetApprovalProcessRequest::getProcessId() const {
  return processId_;
}

void GetApprovalProcessRequest::setProcessId(const std::string &processId) {
  processId_ = processId;
  setParameter(std::string("ProcessId"), processId);
}

