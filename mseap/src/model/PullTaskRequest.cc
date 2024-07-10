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

#include <alibabacloud/mseap/model/PullTaskRequest.h>

using AlibabaCloud::Mseap::Model::PullTaskRequest;

PullTaskRequest::PullTaskRequest()
    : RpcServiceRequest("mseap", "2021-01-18", "PullTask") {
  setMethod(HttpRequest::Method::Post);
}

PullTaskRequest::~PullTaskRequest() {}

long PullTaskRequest::getUserCallerParentId() const {
  return userCallerParentId_;
}

void PullTaskRequest::setUserCallerParentId(long userCallerParentId) {
  userCallerParentId_ = userCallerParentId;
  setParameter(std::string("UserCallerParentId"), std::to_string(userCallerParentId));
}

std::string PullTaskRequest::getApiType() const {
  return apiType_;
}

void PullTaskRequest::setApiType(const std::string &apiType) {
  apiType_ = apiType;
  setParameter(std::string("ApiType"), apiType);
}

bool PullTaskRequest::getUserMfaPresent() const {
  return userMfaPresent_;
}

void PullTaskRequest::setUserMfaPresent(bool userMfaPresent) {
  userMfaPresent_ = userMfaPresent;
  setParameter(std::string("UserMfaPresent"), userMfaPresent ? "true" : "false");
}

std::string PullTaskRequest::getUserKp() const {
  return userKp_;
}

void PullTaskRequest::setUserKp(const std::string &userKp) {
  userKp_ = userKp;
  setParameter(std::string("UserKp"), userKp);
}

std::string PullTaskRequest::getLang() const {
  return lang_;
}

void PullTaskRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string PullTaskRequest::getUserCallerType() const {
  return userCallerType_;
}

void PullTaskRequest::setUserCallerType(const std::string &userCallerType) {
  userCallerType_ = userCallerType;
  setParameter(std::string("UserCallerType"), userCallerType);
}

std::string PullTaskRequest::getTaskType() const {
  return taskType_;
}

void PullTaskRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

std::string PullTaskRequest::getUserSecurityToken() const {
  return userSecurityToken_;
}

void PullTaskRequest::setUserSecurityToken(const std::string &userSecurityToken) {
  userSecurityToken_ = userSecurityToken;
  setParameter(std::string("UserSecurityToken"), userSecurityToken);
}

std::string PullTaskRequest::getUserAccessKeyId() const {
  return userAccessKeyId_;
}

void PullTaskRequest::setUserAccessKeyId(const std::string &userAccessKeyId) {
  userAccessKeyId_ = userAccessKeyId;
  setParameter(std::string("UserAccessKeyId"), userAccessKeyId);
}

std::string PullTaskRequest::getOrderId() const {
  return orderId_;
}

void PullTaskRequest::setOrderId(const std::string &orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), orderId);
}

std::string PullTaskRequest::getAliyunKp() const {
  return aliyunKp_;
}

void PullTaskRequest::setAliyunKp(const std::string &aliyunKp) {
  aliyunKp_ = aliyunKp;
  setParameter(std::string("AliyunKp"), aliyunKp);
}

std::string PullTaskRequest::getUserBid() const {
  return userBid_;
}

void PullTaskRequest::setUserBid(const std::string &userBid) {
  userBid_ = userBid;
  setParameter(std::string("UserBid"), userBid);
}

std::string PullTaskRequest::getOriginalRequest() const {
  return originalRequest_;
}

void PullTaskRequest::setOriginalRequest(const std::string &originalRequest) {
  originalRequest_ = originalRequest;
  setParameter(std::string("OriginalRequest"), originalRequest);
}

std::string PullTaskRequest::getPrincipalKey() const {
  return principalKey_;
}

void PullTaskRequest::setPrincipalKey(const std::string &principalKey) {
  principalKey_ = principalKey;
  setParameter(std::string("PrincipalKey"), principalKey);
}

bool PullTaskRequest::getUserCallerSecurityTransport() const {
  return userCallerSecurityTransport_;
}

void PullTaskRequest::setUserCallerSecurityTransport(bool userCallerSecurityTransport) {
  userCallerSecurityTransport_ = userCallerSecurityTransport;
  setParameter(std::string("UserCallerSecurityTransport"), userCallerSecurityTransport ? "true" : "false");
}

std::string PullTaskRequest::getBizCode() const {
  return bizCode_;
}

void PullTaskRequest::setBizCode(const std::string &bizCode) {
  bizCode_ = bizCode;
  setParameter(std::string("BizCode"), bizCode);
}

std::string PullTaskRequest::getUserClientIp() const {
  return userClientIp_;
}

void PullTaskRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string PullTaskRequest::getBid() const {
  return bid_;
}

void PullTaskRequest::setBid(const std::string &bid) {
  bid_ = bid;
  setParameter(std::string("Bid"), bid);
}

