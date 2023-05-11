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

#include <alibabacloud/alidns/model/UpdateGtmAccessStrategyRequest.h>

using AlibabaCloud::Alidns::Model::UpdateGtmAccessStrategyRequest;

UpdateGtmAccessStrategyRequest::UpdateGtmAccessStrategyRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "UpdateGtmAccessStrategy") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGtmAccessStrategyRequest::~UpdateGtmAccessStrategyRequest() {}

std::string UpdateGtmAccessStrategyRequest::getDefaultAddrPoolId() const {
  return defaultAddrPoolId_;
}

void UpdateGtmAccessStrategyRequest::setDefaultAddrPoolId(const std::string &defaultAddrPoolId) {
  defaultAddrPoolId_ = defaultAddrPoolId;
  setParameter(std::string("DefaultAddrPoolId"), defaultAddrPoolId);
}

std::string UpdateGtmAccessStrategyRequest::getFailoverAddrPoolId() const {
  return failoverAddrPoolId_;
}

void UpdateGtmAccessStrategyRequest::setFailoverAddrPoolId(const std::string &failoverAddrPoolId) {
  failoverAddrPoolId_ = failoverAddrPoolId;
  setParameter(std::string("FailoverAddrPoolId"), failoverAddrPoolId);
}

std::string UpdateGtmAccessStrategyRequest::getStrategyName() const {
  return strategyName_;
}

void UpdateGtmAccessStrategyRequest::setStrategyName(const std::string &strategyName) {
  strategyName_ = strategyName;
  setParameter(std::string("StrategyName"), strategyName);
}

std::string UpdateGtmAccessStrategyRequest::getAccessLines() const {
  return accessLines_;
}

void UpdateGtmAccessStrategyRequest::setAccessLines(const std::string &accessLines) {
  accessLines_ = accessLines;
  setParameter(std::string("AccessLines"), accessLines);
}

std::string UpdateGtmAccessStrategyRequest::getUserClientIp() const {
  return userClientIp_;
}

void UpdateGtmAccessStrategyRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string UpdateGtmAccessStrategyRequest::getStrategyId() const {
  return strategyId_;
}

void UpdateGtmAccessStrategyRequest::setStrategyId(const std::string &strategyId) {
  strategyId_ = strategyId;
  setParameter(std::string("StrategyId"), strategyId);
}

std::string UpdateGtmAccessStrategyRequest::getLang() const {
  return lang_;
}

void UpdateGtmAccessStrategyRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

