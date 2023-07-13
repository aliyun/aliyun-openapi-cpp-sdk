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

#include <alibabacloud/mse/model/CreateCircuitBreakerRuleRequest.h>

using AlibabaCloud::Mse::Model::CreateCircuitBreakerRuleRequest;

CreateCircuitBreakerRuleRequest::CreateCircuitBreakerRuleRequest()
    : RpcServiceRequest("mse", "2019-05-31", "CreateCircuitBreakerRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateCircuitBreakerRuleRequest::~CreateCircuitBreakerRuleRequest() {}

std::string CreateCircuitBreakerRuleRequest::getMseSessionId() const {
  return mseSessionId_;
}

void CreateCircuitBreakerRuleRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

float CreateCircuitBreakerRuleRequest::getThreshold() const {
  return threshold_;
}

void CreateCircuitBreakerRuleRequest::setThreshold(float threshold) {
  threshold_ = threshold;
  setParameter(std::string("Threshold"), std::to_string(threshold));
}

int CreateCircuitBreakerRuleRequest::getRetryTimeoutMs() const {
  return retryTimeoutMs_;
}

void CreateCircuitBreakerRuleRequest::setRetryTimeoutMs(int retryTimeoutMs) {
  retryTimeoutMs_ = retryTimeoutMs;
  setParameter(std::string("RetryTimeoutMs"), std::to_string(retryTimeoutMs));
}

std::string CreateCircuitBreakerRuleRequest::getAppName() const {
  return appName_;
}

void CreateCircuitBreakerRuleRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

bool CreateCircuitBreakerRuleRequest::getEnable() const {
  return enable_;
}

void CreateCircuitBreakerRuleRequest::setEnable(bool enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), enable ? "true" : "false");
}

int CreateCircuitBreakerRuleRequest::getMinRequestAmount() const {
  return minRequestAmount_;
}

void CreateCircuitBreakerRuleRequest::setMinRequestAmount(int minRequestAmount) {
  minRequestAmount_ = minRequestAmount;
  setParameter(std::string("MinRequestAmount"), std::to_string(minRequestAmount));
}

std::string CreateCircuitBreakerRuleRequest::getResource() const {
  return resource_;
}

void CreateCircuitBreakerRuleRequest::setResource(const std::string &resource) {
  resource_ = resource;
  setParameter(std::string("Resource"), resource);
}

int CreateCircuitBreakerRuleRequest::getMaxAllowedRtMs() const {
  return maxAllowedRtMs_;
}

void CreateCircuitBreakerRuleRequest::setMaxAllowedRtMs(int maxAllowedRtMs) {
  maxAllowedRtMs_ = maxAllowedRtMs;
  setParameter(std::string("MaxAllowedRtMs"), std::to_string(maxAllowedRtMs));
}

int CreateCircuitBreakerRuleRequest::getHalfOpenBaseAmountPerStep() const {
  return halfOpenBaseAmountPerStep_;
}

void CreateCircuitBreakerRuleRequest::setHalfOpenBaseAmountPerStep(int halfOpenBaseAmountPerStep) {
  halfOpenBaseAmountPerStep_ = halfOpenBaseAmountPerStep;
  setParameter(std::string("HalfOpenBaseAmountPerStep"), std::to_string(halfOpenBaseAmountPerStep));
}

std::string CreateCircuitBreakerRuleRequest::getRegionId() const {
  return regionId_;
}

void CreateCircuitBreakerRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int CreateCircuitBreakerRuleRequest::getStatIntervalMs() const {
  return statIntervalMs_;
}

void CreateCircuitBreakerRuleRequest::setStatIntervalMs(int statIntervalMs) {
  statIntervalMs_ = statIntervalMs;
  setParameter(std::string("StatIntervalMs"), std::to_string(statIntervalMs));
}

std::string CreateCircuitBreakerRuleRequest::getAppId() const {
  return appId_;
}

void CreateCircuitBreakerRuleRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string CreateCircuitBreakerRuleRequest::get_Namespace() const {
  return _namespace_;
}

void CreateCircuitBreakerRuleRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

int CreateCircuitBreakerRuleRequest::getHalfOpenRecoveryStepNum() const {
  return halfOpenRecoveryStepNum_;
}

void CreateCircuitBreakerRuleRequest::setHalfOpenRecoveryStepNum(int halfOpenRecoveryStepNum) {
  halfOpenRecoveryStepNum_ = halfOpenRecoveryStepNum;
  setParameter(std::string("HalfOpenRecoveryStepNum"), std::to_string(halfOpenRecoveryStepNum));
}

std::string CreateCircuitBreakerRuleRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void CreateCircuitBreakerRuleRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

int CreateCircuitBreakerRuleRequest::getStrategy() const {
  return strategy_;
}

void CreateCircuitBreakerRuleRequest::setStrategy(int strategy) {
  strategy_ = strategy;
  setParameter(std::string("Strategy"), std::to_string(strategy));
}

