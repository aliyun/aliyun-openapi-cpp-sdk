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

#include <alibabacloud/alidns/model/UpdateDnsGtmAccessStrategyRequest.h>

using AlibabaCloud::Alidns::Model::UpdateDnsGtmAccessStrategyRequest;

UpdateDnsGtmAccessStrategyRequest::UpdateDnsGtmAccessStrategyRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "UpdateDnsGtmAccessStrategy") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDnsGtmAccessStrategyRequest::~UpdateDnsGtmAccessStrategyRequest() {}

std::string UpdateDnsGtmAccessStrategyRequest::getDefaultLbaStrategy() const {
  return defaultLbaStrategy_;
}

void UpdateDnsGtmAccessStrategyRequest::setDefaultLbaStrategy(const std::string &defaultLbaStrategy) {
  defaultLbaStrategy_ = defaultLbaStrategy;
  setParameter(std::string("DefaultLbaStrategy"), defaultLbaStrategy);
}

std::string UpdateDnsGtmAccessStrategyRequest::getFailoverAddrPoolType() const {
  return failoverAddrPoolType_;
}

void UpdateDnsGtmAccessStrategyRequest::setFailoverAddrPoolType(const std::string &failoverAddrPoolType) {
  failoverAddrPoolType_ = failoverAddrPoolType;
  setParameter(std::string("FailoverAddrPoolType"), failoverAddrPoolType);
}

std::string UpdateDnsGtmAccessStrategyRequest::getDefaultAddrPoolType() const {
  return defaultAddrPoolType_;
}

void UpdateDnsGtmAccessStrategyRequest::setDefaultAddrPoolType(const std::string &defaultAddrPoolType) {
  defaultAddrPoolType_ = defaultAddrPoolType;
  setParameter(std::string("DefaultAddrPoolType"), defaultAddrPoolType);
}

int UpdateDnsGtmAccessStrategyRequest::getFailoverMaxReturnAddrNum() const {
  return failoverMaxReturnAddrNum_;
}

void UpdateDnsGtmAccessStrategyRequest::setFailoverMaxReturnAddrNum(int failoverMaxReturnAddrNum) {
  failoverMaxReturnAddrNum_ = failoverMaxReturnAddrNum;
  setParameter(std::string("FailoverMaxReturnAddrNum"), std::to_string(failoverMaxReturnAddrNum));
}

std::string UpdateDnsGtmAccessStrategyRequest::getFailoverLbaStrategy() const {
  return failoverLbaStrategy_;
}

void UpdateDnsGtmAccessStrategyRequest::setFailoverLbaStrategy(const std::string &failoverLbaStrategy) {
  failoverLbaStrategy_ = failoverLbaStrategy;
  setParameter(std::string("FailoverLbaStrategy"), failoverLbaStrategy);
}

std::vector<UpdateDnsGtmAccessStrategyRequest::DefaultAddrPool> UpdateDnsGtmAccessStrategyRequest::getDefaultAddrPool() const {
  return defaultAddrPool_;
}

void UpdateDnsGtmAccessStrategyRequest::setDefaultAddrPool(const std::vector<UpdateDnsGtmAccessStrategyRequest::DefaultAddrPool> &defaultAddrPool) {
  defaultAddrPool_ = defaultAddrPool;
  for(int dep1 = 0; dep1 != defaultAddrPool.size(); dep1++) {
  auto defaultAddrPoolObj = defaultAddrPool.at(dep1);
  std::string defaultAddrPoolObjStr = std::string("DefaultAddrPool") + "." + std::to_string(dep1 + 1);
    setParameter(defaultAddrPoolObjStr + ".Id", defaultAddrPoolObj.id);
    setParameter(defaultAddrPoolObjStr + ".LbaWeight", std::to_string(defaultAddrPoolObj.lbaWeight));
  }
}

int UpdateDnsGtmAccessStrategyRequest::getFailoverMinAvailableAddrNum() const {
  return failoverMinAvailableAddrNum_;
}

void UpdateDnsGtmAccessStrategyRequest::setFailoverMinAvailableAddrNum(int failoverMinAvailableAddrNum) {
  failoverMinAvailableAddrNum_ = failoverMinAvailableAddrNum;
  setParameter(std::string("FailoverMinAvailableAddrNum"), std::to_string(failoverMinAvailableAddrNum));
}

int UpdateDnsGtmAccessStrategyRequest::getDefaultMaxReturnAddrNum() const {
  return defaultMaxReturnAddrNum_;
}

void UpdateDnsGtmAccessStrategyRequest::setDefaultMaxReturnAddrNum(int defaultMaxReturnAddrNum) {
  defaultMaxReturnAddrNum_ = defaultMaxReturnAddrNum;
  setParameter(std::string("DefaultMaxReturnAddrNum"), std::to_string(defaultMaxReturnAddrNum));
}

int UpdateDnsGtmAccessStrategyRequest::getDefaultMinAvailableAddrNum() const {
  return defaultMinAvailableAddrNum_;
}

void UpdateDnsGtmAccessStrategyRequest::setDefaultMinAvailableAddrNum(int defaultMinAvailableAddrNum) {
  defaultMinAvailableAddrNum_ = defaultMinAvailableAddrNum;
  setParameter(std::string("DefaultMinAvailableAddrNum"), std::to_string(defaultMinAvailableAddrNum));
}

std::string UpdateDnsGtmAccessStrategyRequest::getLang() const {
  return lang_;
}

void UpdateDnsGtmAccessStrategyRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string UpdateDnsGtmAccessStrategyRequest::getLines() const {
  return lines_;
}

void UpdateDnsGtmAccessStrategyRequest::setLines(const std::string &lines) {
  lines_ = lines;
  setParameter(std::string("Lines"), lines);
}

std::string UpdateDnsGtmAccessStrategyRequest::getStrategyName() const {
  return strategyName_;
}

void UpdateDnsGtmAccessStrategyRequest::setStrategyName(const std::string &strategyName) {
  strategyName_ = strategyName;
  setParameter(std::string("StrategyName"), strategyName);
}

std::string UpdateDnsGtmAccessStrategyRequest::getDefaultLatencyOptimization() const {
  return defaultLatencyOptimization_;
}

void UpdateDnsGtmAccessStrategyRequest::setDefaultLatencyOptimization(const std::string &defaultLatencyOptimization) {
  defaultLatencyOptimization_ = defaultLatencyOptimization;
  setParameter(std::string("DefaultLatencyOptimization"), defaultLatencyOptimization);
}

std::string UpdateDnsGtmAccessStrategyRequest::getFailoverLatencyOptimization() const {
  return failoverLatencyOptimization_;
}

void UpdateDnsGtmAccessStrategyRequest::setFailoverLatencyOptimization(const std::string &failoverLatencyOptimization) {
  failoverLatencyOptimization_ = failoverLatencyOptimization;
  setParameter(std::string("FailoverLatencyOptimization"), failoverLatencyOptimization);
}

std::string UpdateDnsGtmAccessStrategyRequest::getUserClientIp() const {
  return userClientIp_;
}

void UpdateDnsGtmAccessStrategyRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string UpdateDnsGtmAccessStrategyRequest::getStrategyId() const {
  return strategyId_;
}

void UpdateDnsGtmAccessStrategyRequest::setStrategyId(const std::string &strategyId) {
  strategyId_ = strategyId;
  setParameter(std::string("StrategyId"), strategyId);
}

std::vector<UpdateDnsGtmAccessStrategyRequest::FailoverAddrPool> UpdateDnsGtmAccessStrategyRequest::getFailoverAddrPool() const {
  return failoverAddrPool_;
}

void UpdateDnsGtmAccessStrategyRequest::setFailoverAddrPool(const std::vector<UpdateDnsGtmAccessStrategyRequest::FailoverAddrPool> &failoverAddrPool) {
  failoverAddrPool_ = failoverAddrPool;
  for(int dep1 = 0; dep1 != failoverAddrPool.size(); dep1++) {
  auto failoverAddrPoolObj = failoverAddrPool.at(dep1);
  std::string failoverAddrPoolObjStr = std::string("FailoverAddrPool") + "." + std::to_string(dep1 + 1);
    setParameter(failoverAddrPoolObjStr + ".Id", failoverAddrPoolObj.id);
    setParameter(failoverAddrPoolObjStr + ".LbaWeight", std::to_string(failoverAddrPoolObj.lbaWeight));
  }
}

std::string UpdateDnsGtmAccessStrategyRequest::getAccessMode() const {
  return accessMode_;
}

void UpdateDnsGtmAccessStrategyRequest::setAccessMode(const std::string &accessMode) {
  accessMode_ = accessMode;
  setParameter(std::string("AccessMode"), accessMode);
}

