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

#include <alibabacloud/mseap/model/IdentifyCodeRequest.h>

using AlibabaCloud::Mseap::Model::IdentifyCodeRequest;

IdentifyCodeRequest::IdentifyCodeRequest()
    : RpcServiceRequest("mseap", "2021-01-18", "IdentifyCode") {
  setMethod(HttpRequest::Method::Post);
}

IdentifyCodeRequest::~IdentifyCodeRequest() {}

std::string IdentifyCodeRequest::getData() const {
  return data_;
}

void IdentifyCodeRequest::setData(const std::string &data) {
  data_ = data;
  setParameter(std::string("Data"), data);
}

long IdentifyCodeRequest::getUserCallerParentId() const {
  return userCallerParentId_;
}

void IdentifyCodeRequest::setUserCallerParentId(long userCallerParentId) {
  userCallerParentId_ = userCallerParentId;
  setParameter(std::string("UserCallerParentId"), std::to_string(userCallerParentId));
}

std::string IdentifyCodeRequest::getType() const {
  return type_;
}

void IdentifyCodeRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string IdentifyCodeRequest::getApiType() const {
  return apiType_;
}

void IdentifyCodeRequest::setApiType(const std::string &apiType) {
  apiType_ = apiType;
  setParameter(std::string("ApiType"), apiType);
}

bool IdentifyCodeRequest::getUserMfaPresent() const {
  return userMfaPresent_;
}

void IdentifyCodeRequest::setUserMfaPresent(bool userMfaPresent) {
  userMfaPresent_ = userMfaPresent;
  setParameter(std::string("UserMfaPresent"), userMfaPresent ? "true" : "false");
}

std::string IdentifyCodeRequest::getUserKp() const {
  return userKp_;
}

void IdentifyCodeRequest::setUserKp(const std::string &userKp) {
  userKp_ = userKp;
  setParameter(std::string("UserKp"), userKp);
}

std::string IdentifyCodeRequest::getLang() const {
  return lang_;
}

void IdentifyCodeRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string IdentifyCodeRequest::getUserCallerType() const {
  return userCallerType_;
}

void IdentifyCodeRequest::setUserCallerType(const std::string &userCallerType) {
  userCallerType_ = userCallerType;
  setParameter(std::string("UserCallerType"), userCallerType);
}

std::string IdentifyCodeRequest::getUserSecurityToken() const {
  return userSecurityToken_;
}

void IdentifyCodeRequest::setUserSecurityToken(const std::string &userSecurityToken) {
  userSecurityToken_ = userSecurityToken;
  setParameter(std::string("UserSecurityToken"), userSecurityToken);
}

std::string IdentifyCodeRequest::getUserAccessKeyId() const {
  return userAccessKeyId_;
}

void IdentifyCodeRequest::setUserAccessKeyId(const std::string &userAccessKeyId) {
  userAccessKeyId_ = userAccessKeyId;
  setParameter(std::string("UserAccessKeyId"), userAccessKeyId);
}

std::string IdentifyCodeRequest::getAliyunKp() const {
  return aliyunKp_;
}

void IdentifyCodeRequest::setAliyunKp(const std::string &aliyunKp) {
  aliyunKp_ = aliyunKp;
  setParameter(std::string("AliyunKp"), aliyunKp);
}

std::string IdentifyCodeRequest::getUserBid() const {
  return userBid_;
}

void IdentifyCodeRequest::setUserBid(const std::string &userBid) {
  userBid_ = userBid;
  setParameter(std::string("UserBid"), userBid);
}

std::string IdentifyCodeRequest::getOriginalRequest() const {
  return originalRequest_;
}

void IdentifyCodeRequest::setOriginalRequest(const std::string &originalRequest) {
  originalRequest_ = originalRequest;
  setParameter(std::string("OriginalRequest"), originalRequest);
}

std::string IdentifyCodeRequest::getLabel() const {
  return label_;
}

void IdentifyCodeRequest::setLabel(const std::string &label) {
  label_ = label;
  setParameter(std::string("Label"), label);
}

bool IdentifyCodeRequest::getUserCallerSecurityTransport() const {
  return userCallerSecurityTransport_;
}

void IdentifyCodeRequest::setUserCallerSecurityTransport(bool userCallerSecurityTransport) {
  userCallerSecurityTransport_ = userCallerSecurityTransport;
  setParameter(std::string("UserCallerSecurityTransport"), userCallerSecurityTransport ? "true" : "false");
}

std::string IdentifyCodeRequest::getUserClientIp() const {
  return userClientIp_;
}

void IdentifyCodeRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string IdentifyCodeRequest::getBid() const {
  return bid_;
}

void IdentifyCodeRequest::setBid(const std::string &bid) {
  bid_ = bid;
  setParameter(std::string("Bid"), bid);
}

