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

#include <alibabacloud/csas/model/UpdateApprovalStatusRequest.h>

using AlibabaCloud::Csas::Model::UpdateApprovalStatusRequest;

UpdateApprovalStatusRequest::UpdateApprovalStatusRequest()
    : RpcServiceRequest("csas", "2023-01-20", "UpdateApprovalStatus") {
  setMethod(HttpRequest::Method::Post);
}

UpdateApprovalStatusRequest::~UpdateApprovalStatusRequest() {}

std::string UpdateApprovalStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void UpdateApprovalStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string UpdateApprovalStatusRequest::getApprovalId() const {
  return approvalId_;
}

void UpdateApprovalStatusRequest::setApprovalId(const std::string &approvalId) {
  approvalId_ = approvalId;
  setParameter(std::string("ApprovalId"), approvalId);
}

std::string UpdateApprovalStatusRequest::getStatus() const {
  return status_;
}

void UpdateApprovalStatusRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

