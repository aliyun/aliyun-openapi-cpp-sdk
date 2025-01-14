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

#include <alibabacloud/csas/model/AttachPolicy2ApprovalProcessRequest.h>

using AlibabaCloud::Csas::Model::AttachPolicy2ApprovalProcessRequest;

AttachPolicy2ApprovalProcessRequest::AttachPolicy2ApprovalProcessRequest()
    : RpcServiceRequest("csas", "2023-01-20", "AttachPolicy2ApprovalProcess") {
  setMethod(HttpRequest::Method::Post);
}

AttachPolicy2ApprovalProcessRequest::~AttachPolicy2ApprovalProcessRequest() {}

std::string AttachPolicy2ApprovalProcessRequest::getPolicyType() const {
  return policyType_;
}

void AttachPolicy2ApprovalProcessRequest::setPolicyType(const std::string &policyType) {
  policyType_ = policyType;
  setBodyParameter(std::string("PolicyType"), policyType);
}

std::string AttachPolicy2ApprovalProcessRequest::getSourceIp() const {
  return sourceIp_;
}

void AttachPolicy2ApprovalProcessRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string AttachPolicy2ApprovalProcessRequest::getPolicyId() const {
  return policyId_;
}

void AttachPolicy2ApprovalProcessRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setBodyParameter(std::string("PolicyId"), policyId);
}

std::string AttachPolicy2ApprovalProcessRequest::getProcessId() const {
  return processId_;
}

void AttachPolicy2ApprovalProcessRequest::setProcessId(const std::string &processId) {
  processId_ = processId;
  setBodyParameter(std::string("ProcessId"), processId);
}

