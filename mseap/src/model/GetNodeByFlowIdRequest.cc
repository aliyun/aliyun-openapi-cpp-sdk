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

#include <alibabacloud/mseap/model/GetNodeByFlowIdRequest.h>

using AlibabaCloud::Mseap::Model::GetNodeByFlowIdRequest;

GetNodeByFlowIdRequest::GetNodeByFlowIdRequest()
    : RpcServiceRequest("mseap", "2021-01-18", "GetNodeByFlowId") {
  setMethod(HttpRequest::Method::Post);
}

GetNodeByFlowIdRequest::~GetNodeByFlowIdRequest() {}

long GetNodeByFlowIdRequest::getUserCallerParentId() const {
  return userCallerParentId_;
}

void GetNodeByFlowIdRequest::setUserCallerParentId(long userCallerParentId) {
  userCallerParentId_ = userCallerParentId;
  setParameter(std::string("UserCallerParentId"), std::to_string(userCallerParentId));
}

std::string GetNodeByFlowIdRequest::getApiType() const {
  return apiType_;
}

void GetNodeByFlowIdRequest::setApiType(const std::string &apiType) {
  apiType_ = apiType;
  setParameter(std::string("ApiType"), apiType);
}

bool GetNodeByFlowIdRequest::getUserMfaPresent() const {
  return userMfaPresent_;
}

void GetNodeByFlowIdRequest::setUserMfaPresent(bool userMfaPresent) {
  userMfaPresent_ = userMfaPresent;
  setParameter(std::string("UserMfaPresent"), userMfaPresent ? "true" : "false");
}

std::string GetNodeByFlowIdRequest::getUserKp() const {
  return userKp_;
}

void GetNodeByFlowIdRequest::setUserKp(const std::string &userKp) {
  userKp_ = userKp;
  setParameter(std::string("UserKp"), userKp);
}

std::string GetNodeByFlowIdRequest::getLang() const {
  return lang_;
}

void GetNodeByFlowIdRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string GetNodeByFlowIdRequest::getUserCallerType() const {
  return userCallerType_;
}

void GetNodeByFlowIdRequest::setUserCallerType(const std::string &userCallerType) {
  userCallerType_ = userCallerType;
  setParameter(std::string("UserCallerType"), userCallerType);
}

std::string GetNodeByFlowIdRequest::getUserSecurityToken() const {
  return userSecurityToken_;
}

void GetNodeByFlowIdRequest::setUserSecurityToken(const std::string &userSecurityToken) {
  userSecurityToken_ = userSecurityToken;
  setParameter(std::string("UserSecurityToken"), userSecurityToken);
}

std::string GetNodeByFlowIdRequest::getUserAccessKeyId() const {
  return userAccessKeyId_;
}

void GetNodeByFlowIdRequest::setUserAccessKeyId(const std::string &userAccessKeyId) {
  userAccessKeyId_ = userAccessKeyId;
  setParameter(std::string("UserAccessKeyId"), userAccessKeyId);
}

std::string GetNodeByFlowIdRequest::getAliyunKp() const {
  return aliyunKp_;
}

void GetNodeByFlowIdRequest::setAliyunKp(const std::string &aliyunKp) {
  aliyunKp_ = aliyunKp;
  setParameter(std::string("AliyunKp"), aliyunKp);
}

std::string GetNodeByFlowIdRequest::getUserBid() const {
  return userBid_;
}

void GetNodeByFlowIdRequest::setUserBid(const std::string &userBid) {
  userBid_ = userBid;
  setParameter(std::string("UserBid"), userBid);
}

std::string GetNodeByFlowIdRequest::getOriginalRequest() const {
  return originalRequest_;
}

void GetNodeByFlowIdRequest::setOriginalRequest(const std::string &originalRequest) {
  originalRequest_ = originalRequest;
  setParameter(std::string("OriginalRequest"), originalRequest);
}

bool GetNodeByFlowIdRequest::getUserCallerSecurityTransport() const {
  return userCallerSecurityTransport_;
}

void GetNodeByFlowIdRequest::setUserCallerSecurityTransport(bool userCallerSecurityTransport) {
  userCallerSecurityTransport_ = userCallerSecurityTransport;
  setParameter(std::string("UserCallerSecurityTransport"), userCallerSecurityTransport ? "true" : "false");
}

std::string GetNodeByFlowIdRequest::getUserClientIp() const {
  return userClientIp_;
}

void GetNodeByFlowIdRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string GetNodeByFlowIdRequest::getBid() const {
  return bid_;
}

void GetNodeByFlowIdRequest::setBid(const std::string &bid) {
  bid_ = bid;
  setParameter(std::string("Bid"), bid);
}

long GetNodeByFlowIdRequest::getFlowId() const {
  return flowId_;
}

void GetNodeByFlowIdRequest::setFlowId(long flowId) {
  flowId_ = flowId;
  setParameter(std::string("FlowId"), std::to_string(flowId));
}

