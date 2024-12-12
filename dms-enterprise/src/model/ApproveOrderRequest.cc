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

#include <alibabacloud/dms-enterprise/model/ApproveOrderRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ApproveOrderRequest;

ApproveOrderRequest::ApproveOrderRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ApproveOrder") {
  setMethod(HttpRequest::Method::Post);
}

ApproveOrderRequest::~ApproveOrderRequest() {}

long ApproveOrderRequest::getTid() const {
  return tid_;
}

void ApproveOrderRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long ApproveOrderRequest::getWorkflowInstanceId() const {
  return workflowInstanceId_;
}

void ApproveOrderRequest::setWorkflowInstanceId(long workflowInstanceId) {
  workflowInstanceId_ = workflowInstanceId;
  setParameter(std::string("WorkflowInstanceId"), std::to_string(workflowInstanceId));
}

std::string ApproveOrderRequest::getApprovalType() const {
  return approvalType_;
}

void ApproveOrderRequest::setApprovalType(const std::string &approvalType) {
  approvalType_ = approvalType;
  setParameter(std::string("ApprovalType"), approvalType);
}

long ApproveOrderRequest::getNewApprover() const {
  return newApprover_;
}

void ApproveOrderRequest::setNewApprover(long newApprover) {
  newApprover_ = newApprover;
  setParameter(std::string("NewApprover"), std::to_string(newApprover));
}

long ApproveOrderRequest::getApprovalNodeId() const {
  return approvalNodeId_;
}

void ApproveOrderRequest::setApprovalNodeId(long approvalNodeId) {
  approvalNodeId_ = approvalNodeId;
  setParameter(std::string("ApprovalNodeId"), std::to_string(approvalNodeId));
}

long ApproveOrderRequest::getOldApprover() const {
  return oldApprover_;
}

void ApproveOrderRequest::setOldApprover(long oldApprover) {
  oldApprover_ = oldApprover;
  setParameter(std::string("OldApprover"), std::to_string(oldApprover));
}

std::string ApproveOrderRequest::getRealLoginUserUid() const {
  return realLoginUserUid_;
}

void ApproveOrderRequest::setRealLoginUserUid(const std::string &realLoginUserUid) {
  realLoginUserUid_ = realLoginUserUid;
  setParameter(std::string("RealLoginUserUid"), realLoginUserUid);
}

std::string ApproveOrderRequest::getComment() const {
  return comment_;
}

void ApproveOrderRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setParameter(std::string("Comment"), comment);
}

std::string ApproveOrderRequest::getApprovalNodePos() const {
  return approvalNodePos_;
}

void ApproveOrderRequest::setApprovalNodePos(const std::string &approvalNodePos) {
  approvalNodePos_ = approvalNodePos;
  setParameter(std::string("ApprovalNodePos"), approvalNodePos);
}

std::string ApproveOrderRequest::getNewApproverList() const {
  return newApproverList_;
}

void ApproveOrderRequest::setNewApproverList(const std::string &newApproverList) {
  newApproverList_ = newApproverList;
  setParameter(std::string("NewApproverList"), newApproverList);
}

