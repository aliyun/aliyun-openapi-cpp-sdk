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

#include <alibabacloud/quickbi-public/model/QueryAuditLogRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryAuditLogRequest;

QueryAuditLogRequest::QueryAuditLogRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QueryAuditLog") {
  setMethod(HttpRequest::Method::Post);
}

QueryAuditLogRequest::~QueryAuditLogRequest() {}

std::string QueryAuditLogRequest::getAccessSourceFlag() const {
  return accessSourceFlag_;
}

void QueryAuditLogRequest::setAccessSourceFlag(const std::string &accessSourceFlag) {
  accessSourceFlag_ = accessSourceFlag;
  setParameter(std::string("AccessSourceFlag"), accessSourceFlag);
}

std::string QueryAuditLogRequest::getAccessPoint() const {
  return accessPoint_;
}

void QueryAuditLogRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string QueryAuditLogRequest::getStartDate() const {
  return startDate_;
}

void QueryAuditLogRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

std::string QueryAuditLogRequest::getLogType() const {
  return logType_;
}

void QueryAuditLogRequest::setLogType(const std::string &logType) {
  logType_ = logType;
  setParameter(std::string("LogType"), logType);
}

std::string QueryAuditLogRequest::getSignType() const {
  return signType_;
}

void QueryAuditLogRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string QueryAuditLogRequest::getResourceType() const {
  return resourceType_;
}

void QueryAuditLogRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string QueryAuditLogRequest::getOperatorTypes() const {
  return operatorTypes_;
}

void QueryAuditLogRequest::setOperatorTypes(const std::string &operatorTypes) {
  operatorTypes_ = operatorTypes;
  setParameter(std::string("OperatorTypes"), operatorTypes);
}

std::string QueryAuditLogRequest::getEndDate() const {
  return endDate_;
}

void QueryAuditLogRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

std::string QueryAuditLogRequest::getOperatorId() const {
  return operatorId_;
}

void QueryAuditLogRequest::setOperatorId(const std::string &operatorId) {
  operatorId_ = operatorId;
  setParameter(std::string("OperatorId"), operatorId);
}

std::string QueryAuditLogRequest::getWorkspaceId() const {
  return workspaceId_;
}

void QueryAuditLogRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), workspaceId);
}

std::string QueryAuditLogRequest::getUserAccessDevice() const {
  return userAccessDevice_;
}

void QueryAuditLogRequest::setUserAccessDevice(const std::string &userAccessDevice) {
  userAccessDevice_ = userAccessDevice;
  setParameter(std::string("UserAccessDevice"), userAccessDevice);
}

