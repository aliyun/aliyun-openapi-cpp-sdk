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

#include <alibabacloud/dataworks-public/model/ApprovePermissionApplyOrderRequest.h>

using AlibabaCloud::Dataworks_public::Model::ApprovePermissionApplyOrderRequest;

ApprovePermissionApplyOrderRequest::ApprovePermissionApplyOrderRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ApprovePermissionApplyOrder") {
  setMethod(HttpRequest::Method::Post);
}

ApprovePermissionApplyOrderRequest::~ApprovePermissionApplyOrderRequest() {}

std::string ApprovePermissionApplyOrderRequest::getFlowId() const {
  return flowId_;
}

void ApprovePermissionApplyOrderRequest::setFlowId(const std::string &flowId) {
  flowId_ = flowId;
  setParameter(std::string("FlowId"), flowId);
}

std::string ApprovePermissionApplyOrderRequest::getApproveComment() const {
  return approveComment_;
}

void ApprovePermissionApplyOrderRequest::setApproveComment(const std::string &approveComment) {
  approveComment_ = approveComment;
  setParameter(std::string("ApproveComment"), approveComment);
}

int ApprovePermissionApplyOrderRequest::getApproveAction() const {
  return approveAction_;
}

void ApprovePermissionApplyOrderRequest::setApproveAction(int approveAction) {
  approveAction_ = approveAction;
  setParameter(std::string("ApproveAction"), std::to_string(approveAction));
}

