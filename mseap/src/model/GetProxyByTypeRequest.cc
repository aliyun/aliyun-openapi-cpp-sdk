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

#include <alibabacloud/mseap/model/GetProxyByTypeRequest.h>

using AlibabaCloud::Mseap::Model::GetProxyByTypeRequest;

GetProxyByTypeRequest::GetProxyByTypeRequest()
    : RpcServiceRequest("mseap", "2021-01-18", "GetProxyByType") {
  setMethod(HttpRequest::Method::Post);
}

GetProxyByTypeRequest::~GetProxyByTypeRequest() {}

long GetProxyByTypeRequest::getUserCallerParentId() const {
  return userCallerParentId_;
}

void GetProxyByTypeRequest::setUserCallerParentId(long userCallerParentId) {
  userCallerParentId_ = userCallerParentId;
  setParameter(std::string("UserCallerParentId"), std::to_string(userCallerParentId));
}

int GetProxyByTypeRequest::getType() const {
  return type_;
}

void GetProxyByTypeRequest::setType(int type) {
  type_ = type;
  setParameter(std::string("Type"), std::to_string(type));
}

std::string GetProxyByTypeRequest::getApiType() const {
  return apiType_;
}

void GetProxyByTypeRequest::setApiType(const std::string &apiType) {
  apiType_ = apiType;
  setParameter(std::string("ApiType"), apiType);
}

bool GetProxyByTypeRequest::getUserMfaPresent() const {
  return userMfaPresent_;
}

void GetProxyByTypeRequest::setUserMfaPresent(bool userMfaPresent) {
  userMfaPresent_ = userMfaPresent;
  setParameter(std::string("UserMfaPresent"), userMfaPresent ? "true" : "false");
}

std::string GetProxyByTypeRequest::getUserKp() const {
  return userKp_;
}

void GetProxyByTypeRequest::setUserKp(const std::string &userKp) {
  userKp_ = userKp;
  setParameter(std::string("UserKp"), userKp);
}

std::string GetProxyByTypeRequest::getLang() const {
  return lang_;
}

void GetProxyByTypeRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string GetProxyByTypeRequest::getUserCallerType() const {
  return userCallerType_;
}

void GetProxyByTypeRequest::setUserCallerType(const std::string &userCallerType) {
  userCallerType_ = userCallerType;
  setParameter(std::string("UserCallerType"), userCallerType);
}

std::string GetProxyByTypeRequest::getUserSecurityToken() const {
  return userSecurityToken_;
}

void GetProxyByTypeRequest::setUserSecurityToken(const std::string &userSecurityToken) {
  userSecurityToken_ = userSecurityToken;
  setParameter(std::string("UserSecurityToken"), userSecurityToken);
}

std::string GetProxyByTypeRequest::getUserAccessKeyId() const {
  return userAccessKeyId_;
}

void GetProxyByTypeRequest::setUserAccessKeyId(const std::string &userAccessKeyId) {
  userAccessKeyId_ = userAccessKeyId;
  setParameter(std::string("UserAccessKeyId"), userAccessKeyId);
}

std::string GetProxyByTypeRequest::getAliyunKp() const {
  return aliyunKp_;
}

void GetProxyByTypeRequest::setAliyunKp(const std::string &aliyunKp) {
  aliyunKp_ = aliyunKp;
  setParameter(std::string("AliyunKp"), aliyunKp);
}

std::string GetProxyByTypeRequest::getUserBid() const {
  return userBid_;
}

void GetProxyByTypeRequest::setUserBid(const std::string &userBid) {
  userBid_ = userBid;
  setParameter(std::string("UserBid"), userBid);
}

std::string GetProxyByTypeRequest::getOriginalRequest() const {
  return originalRequest_;
}

void GetProxyByTypeRequest::setOriginalRequest(const std::string &originalRequest) {
  originalRequest_ = originalRequest;
  setParameter(std::string("OriginalRequest"), originalRequest);
}

bool GetProxyByTypeRequest::getUserCallerSecurityTransport() const {
  return userCallerSecurityTransport_;
}

void GetProxyByTypeRequest::setUserCallerSecurityTransport(bool userCallerSecurityTransport) {
  userCallerSecurityTransport_ = userCallerSecurityTransport;
  setParameter(std::string("UserCallerSecurityTransport"), userCallerSecurityTransport ? "true" : "false");
}

std::string GetProxyByTypeRequest::getUserClientIp() const {
  return userClientIp_;
}

void GetProxyByTypeRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string GetProxyByTypeRequest::getBid() const {
  return bid_;
}

void GetProxyByTypeRequest::setBid(const std::string &bid) {
  bid_ = bid;
  setParameter(std::string("Bid"), bid);
}

