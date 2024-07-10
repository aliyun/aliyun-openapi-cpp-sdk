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

#include <alibabacloud/mseap/model/PushRpaTaskRequest.h>

using AlibabaCloud::Mseap::Model::PushRpaTaskRequest;

PushRpaTaskRequest::PushRpaTaskRequest()
    : RpcServiceRequest("mseap", "2021-01-18", "PushRpaTask") {
  setMethod(HttpRequest::Method::Post);
}

PushRpaTaskRequest::~PushRpaTaskRequest() {}

std::string PushRpaTaskRequest::getRequest() const {
  return request_;
}

void PushRpaTaskRequest::setRequest(const std::string &request) {
  request_ = request;
  setParameter(std::string("Request"), request);
}

long PushRpaTaskRequest::getUserCallerParentId() const {
  return userCallerParentId_;
}

void PushRpaTaskRequest::setUserCallerParentId(long userCallerParentId) {
  userCallerParentId_ = userCallerParentId;
  setParameter(std::string("UserCallerParentId"), std::to_string(userCallerParentId));
}

std::string PushRpaTaskRequest::getApiType() const {
  return apiType_;
}

void PushRpaTaskRequest::setApiType(const std::string &apiType) {
  apiType_ = apiType;
  setParameter(std::string("ApiType"), apiType);
}

bool PushRpaTaskRequest::getUserMfaPresent() const {
  return userMfaPresent_;
}

void PushRpaTaskRequest::setUserMfaPresent(bool userMfaPresent) {
  userMfaPresent_ = userMfaPresent;
  setParameter(std::string("UserMfaPresent"), userMfaPresent ? "true" : "false");
}

std::string PushRpaTaskRequest::getUserKp() const {
  return userKp_;
}

void PushRpaTaskRequest::setUserKp(const std::string &userKp) {
  userKp_ = userKp;
  setParameter(std::string("UserKp"), userKp);
}

std::string PushRpaTaskRequest::getLang() const {
  return lang_;
}

void PushRpaTaskRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long PushRpaTaskRequest::getTaskId() const {
  return taskId_;
}

void PushRpaTaskRequest::setTaskId(long taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), std::to_string(taskId));
}

std::string PushRpaTaskRequest::getUserCallerType() const {
  return userCallerType_;
}

void PushRpaTaskRequest::setUserCallerType(const std::string &userCallerType) {
  userCallerType_ = userCallerType;
  setParameter(std::string("UserCallerType"), userCallerType);
}

std::string PushRpaTaskRequest::getUserSecurityToken() const {
  return userSecurityToken_;
}

void PushRpaTaskRequest::setUserSecurityToken(const std::string &userSecurityToken) {
  userSecurityToken_ = userSecurityToken;
  setParameter(std::string("UserSecurityToken"), userSecurityToken);
}

std::string PushRpaTaskRequest::getUserAccessKeyId() const {
  return userAccessKeyId_;
}

void PushRpaTaskRequest::setUserAccessKeyId(const std::string &userAccessKeyId) {
  userAccessKeyId_ = userAccessKeyId;
  setParameter(std::string("UserAccessKeyId"), userAccessKeyId);
}

long PushRpaTaskRequest::getModelId() const {
  return modelId_;
}

void PushRpaTaskRequest::setModelId(long modelId) {
  modelId_ = modelId;
  setParameter(std::string("ModelId"), std::to_string(modelId));
}

std::string PushRpaTaskRequest::getAliyunKp() const {
  return aliyunKp_;
}

void PushRpaTaskRequest::setAliyunKp(const std::string &aliyunKp) {
  aliyunKp_ = aliyunKp;
  setParameter(std::string("AliyunKp"), aliyunKp);
}

std::string PushRpaTaskRequest::getUserBid() const {
  return userBid_;
}

void PushRpaTaskRequest::setUserBid(const std::string &userBid) {
  userBid_ = userBid;
  setParameter(std::string("UserBid"), userBid);
}

std::string PushRpaTaskRequest::getOriginalRequest() const {
  return originalRequest_;
}

void PushRpaTaskRequest::setOriginalRequest(const std::string &originalRequest) {
  originalRequest_ = originalRequest;
  setParameter(std::string("OriginalRequest"), originalRequest);
}

long PushRpaTaskRequest::getTemplateId() const {
  return templateId_;
}

void PushRpaTaskRequest::setTemplateId(long templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

std::string PushRpaTaskRequest::getUserClientIp() const {
  return userClientIp_;
}

void PushRpaTaskRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string PushRpaTaskRequest::getName() const {
  return name_;
}

void PushRpaTaskRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string PushRpaTaskRequest::getBid() const {
  return bid_;
}

void PushRpaTaskRequest::setBid(const std::string &bid) {
  bid_ = bid;
  setParameter(std::string("Bid"), bid);
}

int PushRpaTaskRequest::getStatus() const {
  return status_;
}

void PushRpaTaskRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

