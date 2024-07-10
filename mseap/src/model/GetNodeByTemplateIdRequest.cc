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

#include <alibabacloud/mseap/model/GetNodeByTemplateIdRequest.h>

using AlibabaCloud::Mseap::Model::GetNodeByTemplateIdRequest;

GetNodeByTemplateIdRequest::GetNodeByTemplateIdRequest()
    : RpcServiceRequest("mseap", "2021-01-18", "GetNodeByTemplateId") {
  setMethod(HttpRequest::Method::Post);
}

GetNodeByTemplateIdRequest::~GetNodeByTemplateIdRequest() {}

long GetNodeByTemplateIdRequest::getUserCallerParentId() const {
  return userCallerParentId_;
}

void GetNodeByTemplateIdRequest::setUserCallerParentId(long userCallerParentId) {
  userCallerParentId_ = userCallerParentId;
  setParameter(std::string("UserCallerParentId"), std::to_string(userCallerParentId));
}

std::string GetNodeByTemplateIdRequest::getApiType() const {
  return apiType_;
}

void GetNodeByTemplateIdRequest::setApiType(const std::string &apiType) {
  apiType_ = apiType;
  setParameter(std::string("ApiType"), apiType);
}

bool GetNodeByTemplateIdRequest::getUserMfaPresent() const {
  return userMfaPresent_;
}

void GetNodeByTemplateIdRequest::setUserMfaPresent(bool userMfaPresent) {
  userMfaPresent_ = userMfaPresent;
  setParameter(std::string("UserMfaPresent"), userMfaPresent ? "true" : "false");
}

std::string GetNodeByTemplateIdRequest::getUserKp() const {
  return userKp_;
}

void GetNodeByTemplateIdRequest::setUserKp(const std::string &userKp) {
  userKp_ = userKp;
  setParameter(std::string("UserKp"), userKp);
}

std::string GetNodeByTemplateIdRequest::getLang() const {
  return lang_;
}

void GetNodeByTemplateIdRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string GetNodeByTemplateIdRequest::getUserCallerType() const {
  return userCallerType_;
}

void GetNodeByTemplateIdRequest::setUserCallerType(const std::string &userCallerType) {
  userCallerType_ = userCallerType;
  setParameter(std::string("UserCallerType"), userCallerType);
}

std::string GetNodeByTemplateIdRequest::getUserSecurityToken() const {
  return userSecurityToken_;
}

void GetNodeByTemplateIdRequest::setUserSecurityToken(const std::string &userSecurityToken) {
  userSecurityToken_ = userSecurityToken;
  setParameter(std::string("UserSecurityToken"), userSecurityToken);
}

std::string GetNodeByTemplateIdRequest::getUserAccessKeyId() const {
  return userAccessKeyId_;
}

void GetNodeByTemplateIdRequest::setUserAccessKeyId(const std::string &userAccessKeyId) {
  userAccessKeyId_ = userAccessKeyId;
  setParameter(std::string("UserAccessKeyId"), userAccessKeyId);
}

std::string GetNodeByTemplateIdRequest::getAliyunKp() const {
  return aliyunKp_;
}

void GetNodeByTemplateIdRequest::setAliyunKp(const std::string &aliyunKp) {
  aliyunKp_ = aliyunKp;
  setParameter(std::string("AliyunKp"), aliyunKp);
}

std::string GetNodeByTemplateIdRequest::getUserBid() const {
  return userBid_;
}

void GetNodeByTemplateIdRequest::setUserBid(const std::string &userBid) {
  userBid_ = userBid;
  setParameter(std::string("UserBid"), userBid);
}

std::string GetNodeByTemplateIdRequest::getOriginalRequest() const {
  return originalRequest_;
}

void GetNodeByTemplateIdRequest::setOriginalRequest(const std::string &originalRequest) {
  originalRequest_ = originalRequest;
  setParameter(std::string("OriginalRequest"), originalRequest);
}

long GetNodeByTemplateIdRequest::getTemplateId() const {
  return templateId_;
}

void GetNodeByTemplateIdRequest::setTemplateId(long templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

bool GetNodeByTemplateIdRequest::getUserCallerSecurityTransport() const {
  return userCallerSecurityTransport_;
}

void GetNodeByTemplateIdRequest::setUserCallerSecurityTransport(bool userCallerSecurityTransport) {
  userCallerSecurityTransport_ = userCallerSecurityTransport;
  setParameter(std::string("UserCallerSecurityTransport"), userCallerSecurityTransport ? "true" : "false");
}

std::string GetNodeByTemplateIdRequest::getUserClientIp() const {
  return userClientIp_;
}

void GetNodeByTemplateIdRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string GetNodeByTemplateIdRequest::getBid() const {
  return bid_;
}

void GetNodeByTemplateIdRequest::setBid(const std::string &bid) {
  bid_ = bid;
  setParameter(std::string("Bid"), bid);
}

