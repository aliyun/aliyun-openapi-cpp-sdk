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

#include <alibabacloud/mseap/model/SetRedisValueRequest.h>

using AlibabaCloud::Mseap::Model::SetRedisValueRequest;

SetRedisValueRequest::SetRedisValueRequest()
    : RpcServiceRequest("mseap", "2021-01-18", "SetRedisValue") {
  setMethod(HttpRequest::Method::Post);
}

SetRedisValueRequest::~SetRedisValueRequest() {}

long SetRedisValueRequest::getUserCallerParentId() const {
  return userCallerParentId_;
}

void SetRedisValueRequest::setUserCallerParentId(long userCallerParentId) {
  userCallerParentId_ = userCallerParentId;
  setParameter(std::string("UserCallerParentId"), std::to_string(userCallerParentId));
}

std::string SetRedisValueRequest::getApiType() const {
  return apiType_;
}

void SetRedisValueRequest::setApiType(const std::string &apiType) {
  apiType_ = apiType;
  setParameter(std::string("ApiType"), apiType);
}

long SetRedisValueRequest::getTimeout() const {
  return timeout_;
}

void SetRedisValueRequest::setTimeout(long timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

bool SetRedisValueRequest::getUserMfaPresent() const {
  return userMfaPresent_;
}

void SetRedisValueRequest::setUserMfaPresent(bool userMfaPresent) {
  userMfaPresent_ = userMfaPresent;
  setParameter(std::string("UserMfaPresent"), userMfaPresent ? "true" : "false");
}

std::string SetRedisValueRequest::getUserKp() const {
  return userKp_;
}

void SetRedisValueRequest::setUserKp(const std::string &userKp) {
  userKp_ = userKp;
  setParameter(std::string("UserKp"), userKp);
}

std::string SetRedisValueRequest::getLang() const {
  return lang_;
}

void SetRedisValueRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string SetRedisValueRequest::getValue() const {
  return value_;
}

void SetRedisValueRequest::setValue(const std::string &value) {
  value_ = value;
  setParameter(std::string("Value"), value);
}

std::string SetRedisValueRequest::getKey() const {
  return key_;
}

void SetRedisValueRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

std::string SetRedisValueRequest::getUserCallerType() const {
  return userCallerType_;
}

void SetRedisValueRequest::setUserCallerType(const std::string &userCallerType) {
  userCallerType_ = userCallerType;
  setParameter(std::string("UserCallerType"), userCallerType);
}

std::string SetRedisValueRequest::getUserSecurityToken() const {
  return userSecurityToken_;
}

void SetRedisValueRequest::setUserSecurityToken(const std::string &userSecurityToken) {
  userSecurityToken_ = userSecurityToken;
  setParameter(std::string("UserSecurityToken"), userSecurityToken);
}

std::string SetRedisValueRequest::getUserAccessKeyId() const {
  return userAccessKeyId_;
}

void SetRedisValueRequest::setUserAccessKeyId(const std::string &userAccessKeyId) {
  userAccessKeyId_ = userAccessKeyId;
  setParameter(std::string("UserAccessKeyId"), userAccessKeyId);
}

std::string SetRedisValueRequest::getAliyunKp() const {
  return aliyunKp_;
}

void SetRedisValueRequest::setAliyunKp(const std::string &aliyunKp) {
  aliyunKp_ = aliyunKp;
  setParameter(std::string("AliyunKp"), aliyunKp);
}

std::string SetRedisValueRequest::getUserBid() const {
  return userBid_;
}

void SetRedisValueRequest::setUserBid(const std::string &userBid) {
  userBid_ = userBid;
  setParameter(std::string("UserBid"), userBid);
}

std::string SetRedisValueRequest::getOriginalRequest() const {
  return originalRequest_;
}

void SetRedisValueRequest::setOriginalRequest(const std::string &originalRequest) {
  originalRequest_ = originalRequest;
  setParameter(std::string("OriginalRequest"), originalRequest);
}

std::string SetRedisValueRequest::getRequestId() const {
  return requestId_;
}

void SetRedisValueRequest::setRequestId(const std::string &requestId) {
  requestId_ = requestId;
  setParameter(std::string("RequestId"), requestId);
}

std::string SetRedisValueRequest::getUserClientIp() const {
  return userClientIp_;
}

void SetRedisValueRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string SetRedisValueRequest::getBid() const {
  return bid_;
}

void SetRedisValueRequest::setBid(const std::string &bid) {
  bid_ = bid;
  setParameter(std::string("Bid"), bid);
}

