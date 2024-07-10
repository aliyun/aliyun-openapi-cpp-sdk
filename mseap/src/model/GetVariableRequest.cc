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

#include <alibabacloud/mseap/model/GetVariableRequest.h>

using AlibabaCloud::Mseap::Model::GetVariableRequest;

GetVariableRequest::GetVariableRequest()
    : RpcServiceRequest("mseap", "2021-01-18", "GetVariable") {
  setMethod(HttpRequest::Method::Post);
}

GetVariableRequest::~GetVariableRequest() {}

long GetVariableRequest::getUserCallerParentId() const {
  return userCallerParentId_;
}

void GetVariableRequest::setUserCallerParentId(long userCallerParentId) {
  userCallerParentId_ = userCallerParentId;
  setParameter(std::string("UserCallerParentId"), std::to_string(userCallerParentId));
}

std::string GetVariableRequest::getApiType() const {
  return apiType_;
}

void GetVariableRequest::setApiType(const std::string &apiType) {
  apiType_ = apiType;
  setParameter(std::string("ApiType"), apiType);
}

bool GetVariableRequest::getUserMfaPresent() const {
  return userMfaPresent_;
}

void GetVariableRequest::setUserMfaPresent(bool userMfaPresent) {
  userMfaPresent_ = userMfaPresent;
  setParameter(std::string("UserMfaPresent"), userMfaPresent ? "true" : "false");
}

std::string GetVariableRequest::getUserKp() const {
  return userKp_;
}

void GetVariableRequest::setUserKp(const std::string &userKp) {
  userKp_ = userKp;
  setParameter(std::string("UserKp"), userKp);
}

std::string GetVariableRequest::getLang() const {
  return lang_;
}

void GetVariableRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string GetVariableRequest::getUserCallerType() const {
  return userCallerType_;
}

void GetVariableRequest::setUserCallerType(const std::string &userCallerType) {
  userCallerType_ = userCallerType;
  setParameter(std::string("UserCallerType"), userCallerType);
}

std::string GetVariableRequest::getUserSecurityToken() const {
  return userSecurityToken_;
}

void GetVariableRequest::setUserSecurityToken(const std::string &userSecurityToken) {
  userSecurityToken_ = userSecurityToken;
  setParameter(std::string("UserSecurityToken"), userSecurityToken);
}

std::string GetVariableRequest::getUserAccessKeyId() const {
  return userAccessKeyId_;
}

void GetVariableRequest::setUserAccessKeyId(const std::string &userAccessKeyId) {
  userAccessKeyId_ = userAccessKeyId;
  setParameter(std::string("UserAccessKeyId"), userAccessKeyId);
}

std::string GetVariableRequest::getAliyunKp() const {
  return aliyunKp_;
}

void GetVariableRequest::setAliyunKp(const std::string &aliyunKp) {
  aliyunKp_ = aliyunKp;
  setParameter(std::string("AliyunKp"), aliyunKp);
}

std::string GetVariableRequest::getUserBid() const {
  return userBid_;
}

void GetVariableRequest::setUserBid(const std::string &userBid) {
  userBid_ = userBid;
  setParameter(std::string("UserBid"), userBid);
}

std::string GetVariableRequest::getOriginalRequest() const {
  return originalRequest_;
}

void GetVariableRequest::setOriginalRequest(const std::string &originalRequest) {
  originalRequest_ = originalRequest;
  setParameter(std::string("OriginalRequest"), originalRequest);
}

long GetVariableRequest::getTemplateId() const {
  return templateId_;
}

void GetVariableRequest::setTemplateId(long templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

bool GetVariableRequest::getUserCallerSecurityTransport() const {
  return userCallerSecurityTransport_;
}

void GetVariableRequest::setUserCallerSecurityTransport(bool userCallerSecurityTransport) {
  userCallerSecurityTransport_ = userCallerSecurityTransport;
  setParameter(std::string("UserCallerSecurityTransport"), userCallerSecurityTransport ? "true" : "false");
}

std::string GetVariableRequest::getUserClientIp() const {
  return userClientIp_;
}

void GetVariableRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string GetVariableRequest::getBid() const {
  return bid_;
}

void GetVariableRequest::setBid(const std::string &bid) {
  bid_ = bid;
  setParameter(std::string("Bid"), bid);
}

