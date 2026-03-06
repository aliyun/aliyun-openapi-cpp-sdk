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

#include <alibabacloud/dataworks-public/model/SendTaskMetaCallbackRequest.h>

using AlibabaCloud::Dataworks_public::Model::SendTaskMetaCallbackRequest;

SendTaskMetaCallbackRequest::SendTaskMetaCallbackRequest()
    : RpcServiceRequest("dataworks-public", "2018-06-01", "SendTaskMetaCallback") {
  setMethod(HttpRequest::Method::Post);
}

SendTaskMetaCallbackRequest::~SendTaskMetaCallbackRequest() {}

std::string SendTaskMetaCallbackRequest::getCode() const {
  return code_;
}

void SendTaskMetaCallbackRequest::setCode(const std::string &code) {
  code_ = code;
  setBodyParameter(std::string("Code"), code);
}

long SendTaskMetaCallbackRequest::getEndTime() const {
  return endTime_;
}

void SendTaskMetaCallbackRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

std::vector<std::string> SendTaskMetaCallbackRequest::getResources() const {
  return resources_;
}

void SendTaskMetaCallbackRequest::setResources(const std::vector<std::string> &resources) {
  resources_ = resources;
}

long SendTaskMetaCallbackRequest::getStartTime() const {
  return startTime_;
}

void SendTaskMetaCallbackRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string SendTaskMetaCallbackRequest::getType() const {
  return type_;
}

void SendTaskMetaCallbackRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

std::string SendTaskMetaCallbackRequest::getConnectionInfo() const {
  return connectionInfo_;
}

void SendTaskMetaCallbackRequest::setConnectionInfo(const std::string &connectionInfo) {
  connectionInfo_ = connectionInfo;
  setBodyParameter(std::string("ConnectionInfo"), connectionInfo);
}

std::string SendTaskMetaCallbackRequest::getTaskEnvParam() const {
  return taskEnvParam_;
}

void SendTaskMetaCallbackRequest::setTaskEnvParam(const std::string &taskEnvParam) {
  taskEnvParam_ = taskEnvParam;
  setBodyParameter(std::string("TaskEnvParam"), taskEnvParam);
}

std::string SendTaskMetaCallbackRequest::getSubType() const {
  return subType_;
}

void SendTaskMetaCallbackRequest::setSubType(const std::string &subType) {
  subType_ = subType;
  setBodyParameter(std::string("SubType"), subType);
}

long SendTaskMetaCallbackRequest::getTenantId() const {
  return tenantId_;
}

void SendTaskMetaCallbackRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), std::to_string(tenantId));
}

std::string SendTaskMetaCallbackRequest::getUser() const {
  return user_;
}

void SendTaskMetaCallbackRequest::setUser(const std::string &user) {
  user_ = user;
  setBodyParameter(std::string("User"), user);
}

