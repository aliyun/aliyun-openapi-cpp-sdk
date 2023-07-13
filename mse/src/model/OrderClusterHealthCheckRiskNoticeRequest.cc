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

#include <alibabacloud/mse/model/OrderClusterHealthCheckRiskNoticeRequest.h>

using AlibabaCloud::Mse::Model::OrderClusterHealthCheckRiskNoticeRequest;

OrderClusterHealthCheckRiskNoticeRequest::OrderClusterHealthCheckRiskNoticeRequest()
    : RpcServiceRequest("mse", "2019-05-31", "OrderClusterHealthCheckRiskNotice") {
  setMethod(HttpRequest::Method::Post);
}

OrderClusterHealthCheckRiskNoticeRequest::~OrderClusterHealthCheckRiskNoticeRequest() {}

std::string OrderClusterHealthCheckRiskNoticeRequest::getMseSessionId() const {
  return mseSessionId_;
}

void OrderClusterHealthCheckRiskNoticeRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string OrderClusterHealthCheckRiskNoticeRequest::getRegionId() const {
  return regionId_;
}

void OrderClusterHealthCheckRiskNoticeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string OrderClusterHealthCheckRiskNoticeRequest::getRequestPars() const {
  return requestPars_;
}

void OrderClusterHealthCheckRiskNoticeRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

bool OrderClusterHealthCheckRiskNoticeRequest::getMute() const {
  return mute_;
}

void OrderClusterHealthCheckRiskNoticeRequest::setMute(bool mute) {
  mute_ = mute;
  setParameter(std::string("Mute"), mute ? "true" : "false");
}

std::string OrderClusterHealthCheckRiskNoticeRequest::getInstanceId() const {
  return instanceId_;
}

void OrderClusterHealthCheckRiskNoticeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string OrderClusterHealthCheckRiskNoticeRequest::getNoticeType() const {
  return noticeType_;
}

void OrderClusterHealthCheckRiskNoticeRequest::setNoticeType(const std::string &noticeType) {
  noticeType_ = noticeType;
  setParameter(std::string("NoticeType"), noticeType);
}

std::string OrderClusterHealthCheckRiskNoticeRequest::getRiskCode() const {
  return riskCode_;
}

void OrderClusterHealthCheckRiskNoticeRequest::setRiskCode(const std::string &riskCode) {
  riskCode_ = riskCode;
  setParameter(std::string("RiskCode"), riskCode);
}

std::string OrderClusterHealthCheckRiskNoticeRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void OrderClusterHealthCheckRiskNoticeRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

