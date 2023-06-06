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

#include <alibabacloud/sas/model/OperateWebLockFileEventsRequest.h>

using AlibabaCloud::Sas::Model::OperateWebLockFileEventsRequest;

OperateWebLockFileEventsRequest::OperateWebLockFileEventsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "OperateWebLockFileEvents") {
  setMethod(HttpRequest::Method::Post);
}

OperateWebLockFileEventsRequest::~OperateWebLockFileEventsRequest() {}

std::vector<long> OperateWebLockFileEventsRequest::getEventIds() const {
  return eventIds_;
}

void OperateWebLockFileEventsRequest::setEventIds(const std::vector<long> &eventIds) {
  eventIds_ = eventIds;
}

std::string OperateWebLockFileEventsRequest::getSourceIp() const {
  return sourceIp_;
}

void OperateWebLockFileEventsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string OperateWebLockFileEventsRequest::getOperationCode() const {
  return operationCode_;
}

void OperateWebLockFileEventsRequest::setOperationCode(const std::string &operationCode) {
  operationCode_ = operationCode;
  setParameter(std::string("OperationCode"), operationCode);
}

int OperateWebLockFileEventsRequest::getDealAll() const {
  return dealAll_;
}

void OperateWebLockFileEventsRequest::setDealAll(int dealAll) {
  dealAll_ = dealAll;
  setParameter(std::string("DealAll"), std::to_string(dealAll));
}

