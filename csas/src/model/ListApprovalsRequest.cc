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

#include <alibabacloud/csas/model/ListApprovalsRequest.h>

using AlibabaCloud::Csas::Model::ListApprovalsRequest;

ListApprovalsRequest::ListApprovalsRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListApprovals") {
  setMethod(HttpRequest::Method::Get);
}

ListApprovalsRequest::~ListApprovalsRequest() {}

std::string ListApprovalsRequest::getSourceIp() const {
  return sourceIp_;
}

void ListApprovalsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ListApprovalsRequest::getSchemaId() const {
  return schemaId_;
}

void ListApprovalsRequest::setSchemaId(const std::string &schemaId) {
  schemaId_ = schemaId;
  setParameter(std::string("SchemaId"), schemaId);
}

long ListApprovalsRequest::getPageSize() const {
  return pageSize_;
}

void ListApprovalsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListApprovalsRequest::getCreateEndTime() const {
  return createEndTime_;
}

void ListApprovalsRequest::setCreateEndTime(long createEndTime) {
  createEndTime_ = createEndTime;
  setParameter(std::string("CreateEndTime"), std::to_string(createEndTime));
}

std::string ListApprovalsRequest::getOperatorUserId() const {
  return operatorUserId_;
}

void ListApprovalsRequest::setOperatorUserId(const std::string &operatorUserId) {
  operatorUserId_ = operatorUserId;
  setParameter(std::string("OperatorUserId"), operatorUserId);
}

std::string ListApprovalsRequest::getSchemaName() const {
  return schemaName_;
}

void ListApprovalsRequest::setSchemaName(const std::string &schemaName) {
  schemaName_ = schemaName;
  setParameter(std::string("SchemaName"), schemaName);
}

std::string ListApprovalsRequest::getPolicyType() const {
  return policyType_;
}

void ListApprovalsRequest::setPolicyType(const std::string &policyType) {
  policyType_ = policyType;
  setParameter(std::string("PolicyType"), policyType);
}

std::string ListApprovalsRequest::getProcessName() const {
  return processName_;
}

void ListApprovalsRequest::setProcessName(const std::string &processName) {
  processName_ = processName;
  setParameter(std::string("ProcessName"), processName);
}

long ListApprovalsRequest::getCurrentPage() const {
  return currentPage_;
}

void ListApprovalsRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::vector<ListApprovalsRequest::std::string> ListApprovalsRequest::getApprovalIds() const {
  return approvalIds_;
}

void ListApprovalsRequest::setApprovalIds(const std::vector<ListApprovalsRequest::std::string> &approvalIds) {
  approvalIds_ = approvalIds;
  for(int dep1 = 0; dep1 != approvalIds.size(); dep1++) {
    setParameter(std::string("ApprovalIds") + "." + std::to_string(dep1 + 1), approvalIds[dep1]);
  }
}

long ListApprovalsRequest::getCreateStartTime() const {
  return createStartTime_;
}

void ListApprovalsRequest::setCreateStartTime(long createStartTime) {
  createStartTime_ = createStartTime;
  setParameter(std::string("CreateStartTime"), std::to_string(createStartTime));
}

std::string ListApprovalsRequest::getProcessId() const {
  return processId_;
}

void ListApprovalsRequest::setProcessId(const std::string &processId) {
  processId_ = processId;
  setParameter(std::string("ProcessId"), processId);
}

std::string ListApprovalsRequest::getCreatorDepartment() const {
  return creatorDepartment_;
}

void ListApprovalsRequest::setCreatorDepartment(const std::string &creatorDepartment) {
  creatorDepartment_ = creatorDepartment;
  setParameter(std::string("CreatorDepartment"), creatorDepartment);
}

std::string ListApprovalsRequest::getOperatorUsername() const {
  return operatorUsername_;
}

void ListApprovalsRequest::setOperatorUsername(const std::string &operatorUsername) {
  operatorUsername_ = operatorUsername;
  setParameter(std::string("OperatorUsername"), operatorUsername);
}

std::string ListApprovalsRequest::getCreatorUserId() const {
  return creatorUserId_;
}

void ListApprovalsRequest::setCreatorUserId(const std::string &creatorUserId) {
  creatorUserId_ = creatorUserId;
  setParameter(std::string("CreatorUserId"), creatorUserId);
}

std::string ListApprovalsRequest::getCreatorUsername() const {
  return creatorUsername_;
}

void ListApprovalsRequest::setCreatorUsername(const std::string &creatorUsername) {
  creatorUsername_ = creatorUsername;
  setParameter(std::string("CreatorUsername"), creatorUsername);
}

std::vector<ListApprovalsRequest::std::string> ListApprovalsRequest::getStatuses() const {
  return statuses_;
}

void ListApprovalsRequest::setStatuses(const std::vector<ListApprovalsRequest::std::string> &statuses) {
  statuses_ = statuses;
  for(int dep1 = 0; dep1 != statuses.size(); dep1++) {
    setParameter(std::string("Statuses") + "." + std::to_string(dep1 + 1), statuses[dep1]);
  }
}

std::string ListApprovalsRequest::getCreatorDevTag() const {
  return creatorDevTag_;
}

void ListApprovalsRequest::setCreatorDevTag(const std::string &creatorDevTag) {
  creatorDevTag_ = creatorDevTag;
  setParameter(std::string("CreatorDevTag"), creatorDevTag);
}

