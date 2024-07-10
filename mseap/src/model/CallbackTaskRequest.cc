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

#include <alibabacloud/mseap/model/CallbackTaskRequest.h>

using AlibabaCloud::Mseap::Model::CallbackTaskRequest;

CallbackTaskRequest::CallbackTaskRequest()
    : RpcServiceRequest("mseap", "2021-01-18", "CallbackTask") {
  setMethod(HttpRequest::Method::Post);
}

CallbackTaskRequest::~CallbackTaskRequest() {}

long CallbackTaskRequest::getUserCallerParentId() const {
  return userCallerParentId_;
}

void CallbackTaskRequest::setUserCallerParentId(long userCallerParentId) {
  userCallerParentId_ = userCallerParentId;
  setParameter(std::string("UserCallerParentId"), std::to_string(userCallerParentId));
}

std::string CallbackTaskRequest::getOutTaskId() const {
  return outTaskId_;
}

void CallbackTaskRequest::setOutTaskId(const std::string &outTaskId) {
  outTaskId_ = outTaskId;
  setParameter(std::string("OutTaskId"), outTaskId);
}

std::string CallbackTaskRequest::getApiType() const {
  return apiType_;
}

void CallbackTaskRequest::setApiType(const std::string &apiType) {
  apiType_ = apiType;
  setParameter(std::string("ApiType"), apiType);
}

bool CallbackTaskRequest::getUserMfaPresent() const {
  return userMfaPresent_;
}

void CallbackTaskRequest::setUserMfaPresent(bool userMfaPresent) {
  userMfaPresent_ = userMfaPresent;
  setParameter(std::string("UserMfaPresent"), userMfaPresent ? "true" : "false");
}

std::string CallbackTaskRequest::getUserKp() const {
  return userKp_;
}

void CallbackTaskRequest::setUserKp(const std::string &userKp) {
  userKp_ = userKp;
  setParameter(std::string("UserKp"), userKp);
}

std::string CallbackTaskRequest::getLang() const {
  return lang_;
}

void CallbackTaskRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string CallbackTaskRequest::getTaskId() const {
  return taskId_;
}

void CallbackTaskRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string CallbackTaskRequest::getUserCallerType() const {
  return userCallerType_;
}

void CallbackTaskRequest::setUserCallerType(const std::string &userCallerType) {
  userCallerType_ = userCallerType;
  setParameter(std::string("UserCallerType"), userCallerType);
}

std::string CallbackTaskRequest::getTaskType() const {
  return taskType_;
}

void CallbackTaskRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

std::string CallbackTaskRequest::getUserSecurityToken() const {
  return userSecurityToken_;
}

void CallbackTaskRequest::setUserSecurityToken(const std::string &userSecurityToken) {
  userSecurityToken_ = userSecurityToken;
  setParameter(std::string("UserSecurityToken"), userSecurityToken);
}

std::string CallbackTaskRequest::getUserAccessKeyId() const {
  return userAccessKeyId_;
}

void CallbackTaskRequest::setUserAccessKeyId(const std::string &userAccessKeyId) {
  userAccessKeyId_ = userAccessKeyId;
  setParameter(std::string("UserAccessKeyId"), userAccessKeyId);
}

std::string CallbackTaskRequest::getOrderId() const {
  return orderId_;
}

void CallbackTaskRequest::setOrderId(const std::string &orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), orderId);
}

std::string CallbackTaskRequest::getAliyunKp() const {
  return aliyunKp_;
}

void CallbackTaskRequest::setAliyunKp(const std::string &aliyunKp) {
  aliyunKp_ = aliyunKp;
  setParameter(std::string("AliyunKp"), aliyunKp);
}

std::string CallbackTaskRequest::getUserBid() const {
  return userBid_;
}

void CallbackTaskRequest::setUserBid(const std::string &userBid) {
  userBid_ = userBid;
  setParameter(std::string("UserBid"), userBid);
}

std::string CallbackTaskRequest::getOriginalRequest() const {
  return originalRequest_;
}

void CallbackTaskRequest::setOriginalRequest(const std::string &originalRequest) {
  originalRequest_ = originalRequest;
  setParameter(std::string("OriginalRequest"), originalRequest);
}

std::string CallbackTaskRequest::getPrincipalKey() const {
  return principalKey_;
}

void CallbackTaskRequest::setPrincipalKey(const std::string &principalKey) {
  principalKey_ = principalKey;
  setParameter(std::string("PrincipalKey"), principalKey);
}

bool CallbackTaskRequest::getUserCallerSecurityTransport() const {
  return userCallerSecurityTransport_;
}

void CallbackTaskRequest::setUserCallerSecurityTransport(bool userCallerSecurityTransport) {
  userCallerSecurityTransport_ = userCallerSecurityTransport;
  setParameter(std::string("UserCallerSecurityTransport"), userCallerSecurityTransport ? "true" : "false");
}

std::string CallbackTaskRequest::getBizCode() const {
  return bizCode_;
}

void CallbackTaskRequest::setBizCode(const std::string &bizCode) {
  bizCode_ = bizCode;
  setParameter(std::string("BizCode"), bizCode);
}

std::string CallbackTaskRequest::getUserClientIp() const {
  return userClientIp_;
}

void CallbackTaskRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string CallbackTaskRequest::getTaskData() const {
  return taskData_;
}

void CallbackTaskRequest::setTaskData(const std::string &taskData) {
  taskData_ = taskData;
  setParameter(std::string("TaskData"), taskData);
}

std::string CallbackTaskRequest::getBid() const {
  return bid_;
}

void CallbackTaskRequest::setBid(const std::string &bid) {
  bid_ = bid;
  setParameter(std::string("Bid"), bid);
}

