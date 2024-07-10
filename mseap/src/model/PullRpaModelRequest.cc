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

#include <alibabacloud/mseap/model/PullRpaModelRequest.h>

using AlibabaCloud::Mseap::Model::PullRpaModelRequest;

PullRpaModelRequest::PullRpaModelRequest()
    : RpcServiceRequest("mseap", "2021-01-18", "PullRpaModel") {
  setMethod(HttpRequest::Method::Post);
}

PullRpaModelRequest::~PullRpaModelRequest() {}

long PullRpaModelRequest::getUserCallerParentId() const {
  return userCallerParentId_;
}

void PullRpaModelRequest::setUserCallerParentId(long userCallerParentId) {
  userCallerParentId_ = userCallerParentId;
  setParameter(std::string("UserCallerParentId"), std::to_string(userCallerParentId));
}

std::string PullRpaModelRequest::getApiType() const {
  return apiType_;
}

void PullRpaModelRequest::setApiType(const std::string &apiType) {
  apiType_ = apiType;
  setParameter(std::string("ApiType"), apiType);
}

bool PullRpaModelRequest::getUserMfaPresent() const {
  return userMfaPresent_;
}

void PullRpaModelRequest::setUserMfaPresent(bool userMfaPresent) {
  userMfaPresent_ = userMfaPresent;
  setParameter(std::string("UserMfaPresent"), userMfaPresent ? "true" : "false");
}

std::string PullRpaModelRequest::getUserKp() const {
  return userKp_;
}

void PullRpaModelRequest::setUserKp(const std::string &userKp) {
  userKp_ = userKp;
  setParameter(std::string("UserKp"), userKp);
}

std::string PullRpaModelRequest::getLang() const {
  return lang_;
}

void PullRpaModelRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string PullRpaModelRequest::getUserCallerType() const {
  return userCallerType_;
}

void PullRpaModelRequest::setUserCallerType(const std::string &userCallerType) {
  userCallerType_ = userCallerType;
  setParameter(std::string("UserCallerType"), userCallerType);
}

std::string PullRpaModelRequest::getUserSecurityToken() const {
  return userSecurityToken_;
}

void PullRpaModelRequest::setUserSecurityToken(const std::string &userSecurityToken) {
  userSecurityToken_ = userSecurityToken;
  setParameter(std::string("UserSecurityToken"), userSecurityToken);
}

std::string PullRpaModelRequest::getUserAccessKeyId() const {
  return userAccessKeyId_;
}

void PullRpaModelRequest::setUserAccessKeyId(const std::string &userAccessKeyId) {
  userAccessKeyId_ = userAccessKeyId;
  setParameter(std::string("UserAccessKeyId"), userAccessKeyId);
}

std::string PullRpaModelRequest::getAliyunKp() const {
  return aliyunKp_;
}

void PullRpaModelRequest::setAliyunKp(const std::string &aliyunKp) {
  aliyunKp_ = aliyunKp;
  setParameter(std::string("AliyunKp"), aliyunKp);
}

std::string PullRpaModelRequest::getUserBid() const {
  return userBid_;
}

void PullRpaModelRequest::setUserBid(const std::string &userBid) {
  userBid_ = userBid;
  setParameter(std::string("UserBid"), userBid);
}

std::string PullRpaModelRequest::getOriginalRequest() const {
  return originalRequest_;
}

void PullRpaModelRequest::setOriginalRequest(const std::string &originalRequest) {
  originalRequest_ = originalRequest;
  setParameter(std::string("OriginalRequest"), originalRequest);
}

long PullRpaModelRequest::getTemplateId() const {
  return templateId_;
}

void PullRpaModelRequest::setTemplateId(long templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

std::string PullRpaModelRequest::getUserClientIp() const {
  return userClientIp_;
}

void PullRpaModelRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string PullRpaModelRequest::getBid() const {
  return bid_;
}

void PullRpaModelRequest::setBid(const std::string &bid) {
  bid_ = bid;
  setParameter(std::string("Bid"), bid);
}

