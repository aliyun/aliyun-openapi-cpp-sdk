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

#include <alibabacloud/mse/model/UpdateFlowRuleRequest.h>

using AlibabaCloud::Mse::Model::UpdateFlowRuleRequest;

UpdateFlowRuleRequest::UpdateFlowRuleRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateFlowRule") {
  setMethod(HttpRequest::Method::Post);
}

UpdateFlowRuleRequest::~UpdateFlowRuleRequest() {}

std::string UpdateFlowRuleRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateFlowRuleRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

int UpdateFlowRuleRequest::getControlBehavior() const {
  return controlBehavior_;
}

void UpdateFlowRuleRequest::setControlBehavior(int controlBehavior) {
  controlBehavior_ = controlBehavior;
  setParameter(std::string("ControlBehavior"), std::to_string(controlBehavior));
}

int UpdateFlowRuleRequest::getThreshold() const {
  return threshold_;
}

void UpdateFlowRuleRequest::setThreshold(int threshold) {
  threshold_ = threshold;
  setParameter(std::string("Threshold"), std::to_string(threshold));
}

std::string UpdateFlowRuleRequest::getAppName() const {
  return appName_;
}

void UpdateFlowRuleRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

bool UpdateFlowRuleRequest::getEnable() const {
  return enable_;
}

void UpdateFlowRuleRequest::setEnable(bool enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), enable ? "true" : "false");
}

std::string UpdateFlowRuleRequest::getAppId() const {
  return appId_;
}

void UpdateFlowRuleRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string UpdateFlowRuleRequest::get_Namespace() const {
  return _namespace_;
}

void UpdateFlowRuleRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string UpdateFlowRuleRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateFlowRuleRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

int UpdateFlowRuleRequest::getMaxQueueingTimeMs() const {
  return maxQueueingTimeMs_;
}

void UpdateFlowRuleRequest::setMaxQueueingTimeMs(int maxQueueingTimeMs) {
  maxQueueingTimeMs_ = maxQueueingTimeMs;
  setParameter(std::string("MaxQueueingTimeMs"), std::to_string(maxQueueingTimeMs));
}

long UpdateFlowRuleRequest::getRuleId() const {
  return ruleId_;
}

void UpdateFlowRuleRequest::setRuleId(long ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), std::to_string(ruleId));
}

