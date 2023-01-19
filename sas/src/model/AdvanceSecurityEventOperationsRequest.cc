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

#include <alibabacloud/sas/model/AdvanceSecurityEventOperationsRequest.h>

using AlibabaCloud::Sas::Model::AdvanceSecurityEventOperationsRequest;

AdvanceSecurityEventOperationsRequest::AdvanceSecurityEventOperationsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "AdvanceSecurityEventOperations") {
  setMethod(HttpRequest::Method::Post);
}

AdvanceSecurityEventOperationsRequest::~AdvanceSecurityEventOperationsRequest() {}

long AdvanceSecurityEventOperationsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AdvanceSecurityEventOperationsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AdvanceSecurityEventOperationsRequest::getEventName() const {
  return eventName_;
}

void AdvanceSecurityEventOperationsRequest::setEventName(const std::string &eventName) {
  eventName_ = eventName;
  setParameter(std::string("EventName"), eventName);
}

std::string AdvanceSecurityEventOperationsRequest::getSourceIp() const {
  return sourceIp_;
}

void AdvanceSecurityEventOperationsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string AdvanceSecurityEventOperationsRequest::getEventType() const {
  return eventType_;
}

void AdvanceSecurityEventOperationsRequest::setEventType(const std::string &eventType) {
  eventType_ = eventType;
  setParameter(std::string("EventType"), eventType);
}

int AdvanceSecurityEventOperationsRequest::getRuleId() const {
  return ruleId_;
}

void AdvanceSecurityEventOperationsRequest::setRuleId(int ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), std::to_string(ruleId));
}

