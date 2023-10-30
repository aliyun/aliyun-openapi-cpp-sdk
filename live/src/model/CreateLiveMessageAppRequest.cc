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

#include <alibabacloud/live/model/CreateLiveMessageAppRequest.h>

using AlibabaCloud::Live::Model::CreateLiveMessageAppRequest;

CreateLiveMessageAppRequest::CreateLiveMessageAppRequest()
    : RpcServiceRequest("live", "2016-11-01", "CreateLiveMessageApp") {
  setMethod(HttpRequest::Method::Post);
}

CreateLiveMessageAppRequest::~CreateLiveMessageAppRequest() {}

std::string CreateLiveMessageAppRequest::getDataCenter() const {
  return dataCenter_;
}

void CreateLiveMessageAppRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

std::string CreateLiveMessageAppRequest::getAppName() const {
  return appName_;
}

void CreateLiveMessageAppRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

int CreateLiveMessageAppRequest::getAuditType() const {
  return auditType_;
}

void CreateLiveMessageAppRequest::setAuditType(int auditType) {
  auditType_ = auditType;
  setParameter(std::string("AuditType"), std::to_string(auditType));
}

std::string CreateLiveMessageAppRequest::getAuditUrl() const {
  return auditUrl_;
}

void CreateLiveMessageAppRequest::setAuditUrl(const std::string &auditUrl) {
  auditUrl_ = auditUrl;
  setParameter(std::string("AuditUrl"), auditUrl);
}

std::string CreateLiveMessageAppRequest::getEventCallbackUrl() const {
  return eventCallbackUrl_;
}

void CreateLiveMessageAppRequest::setEventCallbackUrl(const std::string &eventCallbackUrl) {
  eventCallbackUrl_ = eventCallbackUrl;
  setParameter(std::string("EventCallbackUrl"), eventCallbackUrl);
}

