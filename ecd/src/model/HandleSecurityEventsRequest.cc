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

#include <alibabacloud/ecd/model/HandleSecurityEventsRequest.h>

using AlibabaCloud::Ecd::Model::HandleSecurityEventsRequest;

HandleSecurityEventsRequest::HandleSecurityEventsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "HandleSecurityEvents") {
  setMethod(HttpRequest::Method::Post);
}

HandleSecurityEventsRequest::~HandleSecurityEventsRequest() {}

std::vector<HandleSecurityEventsRequest::SecurityEvent> HandleSecurityEventsRequest::getSecurityEvent() const {
  return securityEvent_;
}

void HandleSecurityEventsRequest::setSecurityEvent(const std::vector<HandleSecurityEventsRequest::SecurityEvent> &securityEvent) {
  securityEvent_ = securityEvent;
  for(int dep1 = 0; dep1 != securityEvent.size(); dep1++) {
  auto securityEventObj = securityEvent.at(dep1);
  std::string securityEventObjStr = std::string("SecurityEvent") + "." + std::to_string(dep1 + 1);
    setParameter(securityEventObjStr + ".DesktopId", securityEventObj.desktopId);
    setParameter(securityEventObjStr + ".SecurityEventId", securityEventObj.securityEventId);
  }
}

std::string HandleSecurityEventsRequest::getRegionId() const {
  return regionId_;
}

void HandleSecurityEventsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
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

