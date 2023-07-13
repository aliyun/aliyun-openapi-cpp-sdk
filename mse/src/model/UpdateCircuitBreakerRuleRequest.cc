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

#include <alibabacloud/mse/model/UpdateCircuitBreakerRuleRequest.h>

using AlibabaCloud::Mse::Model::UpdateCircuitBreakerRuleRequest;

UpdateCircuitBreakerRuleRequest::UpdateCircuitBreakerRuleRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateCircuitBreakerRule") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCircuitBreakerRuleRequest::~UpdateCircuitBreakerRuleRequest() {}

std::string UpdateCircuitBreakerRuleRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateCircuitBreakerRuleRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

float UpdateCircuitBreakerRuleRequest::getThreshold() const {
  return threshold_;
}

void UpdateCircuitBreakerRuleRequest::setThreshold(float threshold) {
  threshold_ = threshold;
  setParameter(std::string("Threshold"), std::to_string(threshold));
}

int UpdateCircuitBreakerRuleRequest::getRetryTimeoutMs() const {
  return retryTimeoutMs_;
}

void UpdateCircuitBreakerRuleRequest::setRetryTimeoutMs(int retryTimeoutMs) {
  retryTimeoutMs_ = retryTimeoutMs;
  setParameter(std::string("RetryTimeoutMs"), std::to_string(retryTimeoutMs));
}

std::string UpdateCircuitBreakerRuleRequest::getAppName() const {
  return appName_;
}

void UpdateCircuitBreakerRuleRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

bool UpdateCircuitBreakerRuleRequest::getEnable() const {
  return enable_;
}

void UpdateCircuitBreakerRuleRequest::setEnable(bool enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), enable ? "true" : "false");
}

int UpdateCircuitBreakerRuleRequest::getMinRequestAmount() const {
  return minRequestAmount_;
}

void UpdateCircuitBreakerRuleRequest::setMinRequestAmount(int minRequestAmount) {
  minRequestAmount_ = minRequestAmount;
  setParameter(std::string("MinRequestAmount"), std::to_string(minRequestAmount));
}

int UpdateCircuitBreakerRuleRequest::getMaxAllowedRtMs() const {
  return maxAllowedRtMs_;
}

void UpdateCircuitBreakerRuleRequest::setMaxAllowedRtMs(int maxAllowedRtMs) {
  maxAllowedRtMs_ = maxAllowedRtMs;
  setParameter(std::string("MaxAllowedRtMs"), std::to_string(maxAllowedRtMs));
}

long UpdateCircuitBreakerRuleRequest::getRuleId() const {
  return ruleId_;
}

void UpdateCircuitBreakerRuleRequest::setRuleId(long ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), std::to_string(ruleId));
}

int UpdateCircuitBreakerRuleRequest::getHalfOpenBaseAmountPerStep() const {
  return halfOpenBaseAmountPerStep_;
}

void UpdateCircuitBreakerRuleRequest::setHalfOpenBaseAmountPerStep(int halfOpenBaseAmountPerStep) {
  halfOpenBaseAmountPerStep_ = halfOpenBaseAmountPerStep;
  setParameter(std::string("HalfOpenBaseAmountPerStep"), std::to_string(halfOpenBaseAmountPerStep));
}

int UpdateCircuitBreakerRuleRequest::getStatIntervalMs() const {
  return statIntervalMs_;
}

void UpdateCircuitBreakerRuleRequest::setStatIntervalMs(int statIntervalMs) {
  statIntervalMs_ = statIntervalMs;
  setParameter(std::string("StatIntervalMs"), std::to_string(statIntervalMs));
}

std::string UpdateCircuitBreakerRuleRequest::getAppId() const {
  return appId_;
}

void UpdateCircuitBreakerRuleRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string UpdateCircuitBreakerRuleRequest::get_Namespace() const {
  return _namespace_;
}

void UpdateCircuitBreakerRuleRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

int UpdateCircuitBreakerRuleRequest::getHalfOpenRecoveryStepNum() const {
  return halfOpenRecoveryStepNum_;
}

void UpdateCircuitBreakerRuleRequest::setHalfOpenRecoveryStepNum(int halfOpenRecoveryStepNum) {
  halfOpenRecoveryStepNum_ = halfOpenRecoveryStepNum;
  setParameter(std::string("HalfOpenRecoveryStepNum"), std::to_string(halfOpenRecoveryStepNum));
}

std::string UpdateCircuitBreakerRuleRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateCircuitBreakerRuleRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

int UpdateCircuitBreakerRuleRequest::getStrategy() const {
  return strategy_;
}

void UpdateCircuitBreakerRuleRequest::setStrategy(int strategy) {
  strategy_ = strategy;
  setParameter(std::string("Strategy"), std::to_string(strategy));
}

