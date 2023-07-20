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

#include <alibabacloud/sas/model/OperationCancelIgnoreSuspEventRequest.h>

using AlibabaCloud::Sas::Model::OperationCancelIgnoreSuspEventRequest;

OperationCancelIgnoreSuspEventRequest::OperationCancelIgnoreSuspEventRequest()
    : RpcServiceRequest("sas", "2018-12-03", "OperationCancelIgnoreSuspEvent") {
  setMethod(HttpRequest::Method::Post);
}

OperationCancelIgnoreSuspEventRequest::~OperationCancelIgnoreSuspEventRequest() {}

std::vector<long> OperationCancelIgnoreSuspEventRequest::getSecurityEventIds() const {
  return securityEventIds_;
}

void OperationCancelIgnoreSuspEventRequest::setSecurityEventIds(const std::vector<long> &securityEventIds) {
  securityEventIds_ = securityEventIds;
}

std::string OperationCancelIgnoreSuspEventRequest::getRemark() const {
  return remark_;
}

void OperationCancelIgnoreSuspEventRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

