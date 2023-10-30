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

#include <alibabacloud/live/model/ModifyLiveMessageAppAuditRequest.h>

using AlibabaCloud::Live::Model::ModifyLiveMessageAppAuditRequest;

ModifyLiveMessageAppAuditRequest::ModifyLiveMessageAppAuditRequest()
    : RpcServiceRequest("live", "2016-11-01", "ModifyLiveMessageAppAudit") {
  setMethod(HttpRequest::Method::Post);
}

ModifyLiveMessageAppAuditRequest::~ModifyLiveMessageAppAuditRequest() {}

std::string ModifyLiveMessageAppAuditRequest::getDataCenter() const {
  return dataCenter_;
}

void ModifyLiveMessageAppAuditRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

std::string ModifyLiveMessageAppAuditRequest::getAppId() const {
  return appId_;
}

void ModifyLiveMessageAppAuditRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

int ModifyLiveMessageAppAuditRequest::getAuditType() const {
  return auditType_;
}

void ModifyLiveMessageAppAuditRequest::setAuditType(int auditType) {
  auditType_ = auditType;
  setParameter(std::string("AuditType"), std::to_string(auditType));
}

std::string ModifyLiveMessageAppAuditRequest::getAuditUrl() const {
  return auditUrl_;
}

void ModifyLiveMessageAppAuditRequest::setAuditUrl(const std::string &auditUrl) {
  auditUrl_ = auditUrl;
  setParameter(std::string("AuditUrl"), auditUrl);
}

