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

#include <alibabacloud/sas/model/ConfirmVirusEventsRequest.h>

using AlibabaCloud::Sas::Model::ConfirmVirusEventsRequest;

ConfirmVirusEventsRequest::ConfirmVirusEventsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ConfirmVirusEvents") {
  setMethod(HttpRequest::Method::Post);
}

ConfirmVirusEventsRequest::~ConfirmVirusEventsRequest() {}

std::string ConfirmVirusEventsRequest::getSourceIp() const {
  return sourceIp_;
}

void ConfirmVirusEventsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ConfirmVirusEventsRequest::getOperationCode() const {
  return operationCode_;
}

void ConfirmVirusEventsRequest::setOperationCode(const std::string &operationCode) {
  operationCode_ = operationCode;
  setParameter(std::string("OperationCode"), operationCode);
}

std::string ConfirmVirusEventsRequest::getOperationRange() const {
  return operationRange_;
}

void ConfirmVirusEventsRequest::setOperationRange(const std::string &operationRange) {
  operationRange_ = operationRange;
  setParameter(std::string("OperationRange"), operationRange);
}

int ConfirmVirusEventsRequest::getOperationAll() const {
  return operationAll_;
}

void ConfirmVirusEventsRequest::setOperationAll(int operationAll) {
  operationAll_ = operationAll;
  setParameter(std::string("OperationAll"), std::to_string(operationAll));
}

