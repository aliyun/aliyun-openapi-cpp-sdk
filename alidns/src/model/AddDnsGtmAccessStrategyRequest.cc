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

#include <alibabacloud/alidns/model/AddDnsGtmAccessStrategyRequest.h>

using AlibabaCloud::Alidns::Model::AddDnsGtmAccessStrategyRequest;

AddDnsGtmAccessStrategyRequest::AddDnsGtmAccessStrategyRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "AddDnsGtmAccessStrategy") {
  setMethod(HttpRequest::Method::Post);
}

AddDnsGtmAccessStrategyRequest::~AddDnsGtmAccessStrategyRequest() {}

std::string AddDnsGtmAccessStrategyRequest::getDefaultLbaStrategy() const {
  return defaultLbaStrategy_;
}

void AddDnsGtmAccessStrategyRequest::setDefaultLbaStrategy(const std::string &defaultLbaStrategy) {
  defaultLbaStrategy_ = defaultLbaStrategy;
  setParameter(std::string("DefaultLbaStrategy"), defaultLbaStrategy);
}

std::string AddDnsGtmAccessStrategyRequest::getFailoverAddrPoolType() const {
  return failoverAddrPoolType_;
}

void AddDnsGtmAccessStrategyRequest::setFailoverAddrPoolType(const std::string &failoverAddrPoolType) {
  failoverAddrPoolType_ = failoverAddrPoolType;
  setParameter(std::string("FailoverAddrPoolType"), failoverAddrPoolType);
}

std::string AddDnsGtmAccessStrategyRequest::getDefaultAddrPoolType() const {
  return defaultAddrPoolType_;
}

void AddDnsGtmAccessStrategyRequest::setDefaultAddrPoolType(const std::string &defaultAddrPoolType) {
  defaultAddrPoolType_ = defaultAddrPoolType;
  setParameter(std::string("DefaultAddrPoolType"), defaultAddrPoolType);
}

int AddDnsGtmAccessStrategyRequest::getFailoverMaxReturnAddrNum() const {
  return failoverMaxReturnAddrNum_;
}

void AddDnsGtmAccessStrategyRequest::setFailoverMaxReturnAddrNum(int failoverMaxReturnAddrNum) {
  failoverMaxReturnAddrNum_ = failoverMaxReturnAddrNum;
  setParameter(std::string("FailoverMaxReturnAddrNum"), std::to_string(failoverMaxReturnAddrNum));
}

std::string AddDnsGtmAccessStrategyRequest::getFailoverLbaStrategy() const {
  return failoverLbaStrategy_;
}

void AddDnsGtmAccessStrategyRequest::setFailoverLbaStrategy(const std::string &failoverLbaStrategy) {
  failoverLbaStrategy_ = failoverLbaStrategy;
  setParameter(std::string("FailoverLbaStrategy"), failoverLbaStrategy);
}

std::vector<AddDnsGtmAccessStrategyRequest::DefaultAddrPool> AddDnsGtmAccessStrategyRequest::getDefaultAddrPool() const {
  return defaultAddrPool_;
}

void AddDnsGtmAccessStrategyRequest::setDefaultAddrPool(const std::vector<AddDnsGtmAccessStrategyRequest::DefaultAddrPool> &defaultAddrPool) {
  defaultAddrPool_ = defaultAddrPool;
  for(int dep1 = 0; dep1 != defaultAddrPool.size(); dep1++) {
  auto defaultAddrPoolObj = defaultAddrPool.at(dep1);
  std::string defaultAddrPoolObjStr = std::string("DefaultAddrPool") + "." + std::to_string(dep1 + 1);
    setParameter(defaultAddrPoolObjStr + ".Id", defaultAddrPoolObj.id);
    setParameter(defaultAddrPoolObjStr + ".LbaWeight", std::to_string(defaultAddrPoolObj.lbaWeight));
  }
}

int AddDnsGtmAccessStrategyRequest::getFailoverMinAvailableAddrNum() const {
  return failoverMinAvailableAddrNum_;
}

void AddDnsGtmAccessStrategyRequest::setFailoverMinAvailableAddrNum(int failoverMinAvailableAddrNum) {
  failoverMinAvailableAddrNum_ = failoverMinAvailableAddrNum;
  setParameter(std::string("FailoverMinAvailableAddrNum"), std::to_string(failoverMinAvailableAddrNum));
}

int AddDnsGtmAccessStrategyRequest::getDefaultMaxReturnAddrNum() const {
  return defaultMaxReturnAddrNum_;
}

void AddDnsGtmAccessStrategyRequest::setDefaultMaxReturnAddrNum(int defaultMaxReturnAddrNum) {
  defaultMaxReturnAddrNum_ = defaultMaxReturnAddrNum;
  setParameter(std::string("DefaultMaxReturnAddrNum"), std::to_string(defaultMaxReturnAddrNum));
}

int AddDnsGtmAccessStrategyRequest::getDefaultMinAvailableAddrNum() const {
  return defaultMinAvailableAddrNum_;
}

void AddDnsGtmAccessStrategyRequest::setDefaultMinAvailableAddrNum(int defaultMinAvailableAddrNum) {
  defaultMinAvailableAddrNum_ = defaultMinAvailableAddrNum;
  setParameter(std::string("DefaultMinAvailableAddrNum"), std::to_string(defaultMinAvailableAddrNum));
}

std::string AddDnsGtmAccessStrategyRequest::getStrategyMode() const {
  return strategyMode_;
}

void AddDnsGtmAccessStrategyRequest::setStrategyMode(const std::string &strategyMode) {
  strategyMode_ = strategyMode;
  setParameter(std::string("StrategyMode"), strategyMode);
}

std::string AddDnsGtmAccessStrategyRequest::getLang() const {
  return lang_;
}

void AddDnsGtmAccessStrategyRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string AddDnsGtmAccessStrategyRequest::getLines() const {
  return lines_;
}

void AddDnsGtmAccessStrategyRequest::setLines(const std::string &lines) {
  lines_ = lines;
  setParameter(std::string("Lines"), lines);
}

std::string AddDnsGtmAccessStrategyRequest::getStrategyName() const {
  return strategyName_;
}

void AddDnsGtmAccessStrategyRequest::setStrategyName(const std::string &strategyName) {
  strategyName_ = strategyName;
  setParameter(std::string("StrategyName"), strategyName);
}

std::string AddDnsGtmAccessStrategyRequest::getDefaultLatencyOptimization() const {
  return defaultLatencyOptimization_;
}

void AddDnsGtmAccessStrategyRequest::setDefaultLatencyOptimization(const std::string &defaultLatencyOptimization) {
  defaultLatencyOptimization_ = defaultLatencyOptimization;
  setParameter(std::string("DefaultLatencyOptimization"), defaultLatencyOptimization);
}

std::string AddDnsGtmAccessStrategyRequest::getInstanceId() const {
  return instanceId_;
}

void AddDnsGtmAccessStrategyRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string AddDnsGtmAccessStrategyRequest::getFailoverLatencyOptimization() const {
  return failoverLatencyOptimization_;
}

void AddDnsGtmAccessStrategyRequest::setFailoverLatencyOptimization(const std::string &failoverLatencyOptimization) {
  failoverLatencyOptimization_ = failoverLatencyOptimization;
  setParameter(std::string("FailoverLatencyOptimization"), failoverLatencyOptimization);
}

std::string AddDnsGtmAccessStrategyRequest::getUserClientIp() const {
  return userClientIp_;
}

void AddDnsGtmAccessStrategyRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::vector<AddDnsGtmAccessStrategyRequest::FailoverAddrPool> AddDnsGtmAccessStrategyRequest::getFailoverAddrPool() const {
  return failoverAddrPool_;
}

void AddDnsGtmAccessStrategyRequest::setFailoverAddrPool(const std::vector<AddDnsGtmAccessStrategyRequest::FailoverAddrPool> &failoverAddrPool) {
  failoverAddrPool_ = failoverAddrPool;
  for(int dep1 = 0; dep1 != failoverAddrPool.size(); dep1++) {
  auto failoverAddrPoolObj = failoverAddrPool.at(dep1);
  std::string failoverAddrPoolObjStr = std::string("FailoverAddrPool") + "." + std::to_string(dep1 + 1);
    setParameter(failoverAddrPoolObjStr + ".Id", failoverAddrPoolObj.id);
    setParameter(failoverAddrPoolObjStr + ".LbaWeight", std::to_string(failoverAddrPoolObj.lbaWeight));
  }
}

