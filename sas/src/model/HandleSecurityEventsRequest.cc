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

#include <alibabacloud/sas/model/HandleSecurityEventsRequest.h>

using AlibabaCloud::Sas::Model::HandleSecurityEventsRequest;

HandleSecurityEventsRequest::HandleSecurityEventsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "HandleSecurityEvents") {
  setMethod(HttpRequest::Method::Post);
}

HandleSecurityEventsRequest::~HandleSecurityEventsRequest() {}

std::string HandleSecurityEventsRequest::getMarkMissParam() const {
  return markMissParam_;
}

void HandleSecurityEventsRequest::setMarkMissParam(const std::string &markMissParam) {
  markMissParam_ = markMissParam;
  setParameter(std::string("MarkMissParam"), markMissParam);
}

long HandleSecurityEventsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void HandleSecurityEventsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<std::string> HandleSecurityEventsRequest::getSecurityEventIds() const {
  return securityEventIds_;
}

void HandleSecurityEventsRequest::setSecurityEventIds(const std::vector<std::string> &securityEventIds) {
  securityEventIds_ = securityEventIds;
}

std::string HandleSecurityEventsRequest::getRemark() const {
  return remark_;
}

void HandleSecurityEventsRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string HandleSecurityEventsRequest::getSourceIp() const {
  return sourceIp_;
}

void HandleSecurityEventsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string HandleSecurityEventsRequest::getOperationCode() const {
  return operationCode_;
}

void HandleSecurityEventsRequest::setOperationCode(const std::string &operationCode) {
  operationCode_ = operationCode;
  setParameter(std::string("OperationCode"), operationCode);
}

std::string HandleSecurityEventsRequest::getOperationParams() const {
  return operationParams_;
}

void HandleSecurityEventsRequest::setOperationParams(const std::string &operationParams) {
  operationParams_ = operationParams;
  setParameter(std::string("OperationParams"), operationParams);
}

std::string HandleSecurityEventsRequest::getMarkBatch() const {
  return markBatch_;
}

void HandleSecurityEventsRequest::setMarkBatch(const std::string &markBatch) {
  markBatch_ = markBatch;
  setParameter(std::string("MarkBatch"), markBatch);
}

