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

#include <alibabacloud/dms-enterprise/model/SetWorkflowExtraInfoRequest.h>

using AlibabaCloud::Dms_enterprise::Model::SetWorkflowExtraInfoRequest;

SetWorkflowExtraInfoRequest::SetWorkflowExtraInfoRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "SetWorkflowExtraInfo") {
  setMethod(HttpRequest::Method::Post);
}

SetWorkflowExtraInfoRequest::~SetWorkflowExtraInfoRequest() {}

std::string SetWorkflowExtraInfoRequest::getThirdpartyWorkflowComment() const {
  return thirdpartyWorkflowComment_;
}

void SetWorkflowExtraInfoRequest::setThirdpartyWorkflowComment(const std::string &thirdpartyWorkflowComment) {
  thirdpartyWorkflowComment_ = thirdpartyWorkflowComment;
  setParameter(std::string("ThirdpartyWorkflowComment"), thirdpartyWorkflowComment);
}

bool SetWorkflowExtraInfoRequest::getRenderAgree() const {
  return renderAgree_;
}

void SetWorkflowExtraInfoRequest::setRenderAgree(bool renderAgree) {
  renderAgree_ = renderAgree;
  setParameter(std::string("RenderAgree"), renderAgree ? "true" : "false");
}

long SetWorkflowExtraInfoRequest::getTid() const {
  return tid_;
}

void SetWorkflowExtraInfoRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long SetWorkflowExtraInfoRequest::getWorkflowInstanceId() const {
  return workflowInstanceId_;
}

void SetWorkflowExtraInfoRequest::setWorkflowInstanceId(long workflowInstanceId) {
  workflowInstanceId_ = workflowInstanceId;
  setParameter(std::string("WorkflowInstanceId"), std::to_string(workflowInstanceId));
}

bool SetWorkflowExtraInfoRequest::getRenderCancel() const {
  return renderCancel_;
}

void SetWorkflowExtraInfoRequest::setRenderCancel(bool renderCancel) {
  renderCancel_ = renderCancel;
  setParameter(std::string("RenderCancel"), renderCancel ? "true" : "false");
}

bool SetWorkflowExtraInfoRequest::getRenderAddApprovalNode() const {
  return renderAddApprovalNode_;
}

void SetWorkflowExtraInfoRequest::setRenderAddApprovalNode(bool renderAddApprovalNode) {
  renderAddApprovalNode_ = renderAddApprovalNode;
  setParameter(std::string("RenderAddApprovalNode"), renderAddApprovalNode ? "true" : "false");
}

bool SetWorkflowExtraInfoRequest::getRenderTransfer() const {
  return renderTransfer_;
}

void SetWorkflowExtraInfoRequest::setRenderTransfer(bool renderTransfer) {
  renderTransfer_ = renderTransfer;
  setParameter(std::string("RenderTransfer"), renderTransfer ? "true" : "false");
}

bool SetWorkflowExtraInfoRequest::getRenderReject() const {
  return renderReject_;
}

void SetWorkflowExtraInfoRequest::setRenderReject(bool renderReject) {
  renderReject_ = renderReject;
  setParameter(std::string("RenderReject"), renderReject ? "true" : "false");
}

std::string SetWorkflowExtraInfoRequest::getThirdpartyWorkflowUrl() const {
  return thirdpartyWorkflowUrl_;
}

void SetWorkflowExtraInfoRequest::setThirdpartyWorkflowUrl(const std::string &thirdpartyWorkflowUrl) {
  thirdpartyWorkflowUrl_ = thirdpartyWorkflowUrl;
  setParameter(std::string("ThirdpartyWorkflowUrl"), thirdpartyWorkflowUrl);
}

