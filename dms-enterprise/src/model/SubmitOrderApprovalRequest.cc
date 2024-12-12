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

#include <alibabacloud/dms-enterprise/model/SubmitOrderApprovalRequest.h>

using AlibabaCloud::Dms_enterprise::Model::SubmitOrderApprovalRequest;

SubmitOrderApprovalRequest::SubmitOrderApprovalRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "SubmitOrderApproval") {
  setMethod(HttpRequest::Method::Post);
}

SubmitOrderApprovalRequest::~SubmitOrderApprovalRequest() {}

long SubmitOrderApprovalRequest::getTid() const {
  return tid_;
}

void SubmitOrderApprovalRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long SubmitOrderApprovalRequest::getOrderId() const {
  return orderId_;
}

void SubmitOrderApprovalRequest::setOrderId(long orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), std::to_string(orderId));
}

std::string SubmitOrderApprovalRequest::getRealLoginUserUid() const {
  return realLoginUserUid_;
}

void SubmitOrderApprovalRequest::setRealLoginUserUid(const std::string &realLoginUserUid) {
  realLoginUserUid_ = realLoginUserUid;
  setParameter(std::string("RealLoginUserUid"), realLoginUserUid);
}

