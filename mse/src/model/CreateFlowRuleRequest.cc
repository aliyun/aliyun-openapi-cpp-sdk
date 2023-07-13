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

#include <alibabacloud/mse/model/CreateFlowRuleRequest.h>

using AlibabaCloud::Mse::Model::CreateFlowRuleRequest;

CreateFlowRuleRequest::CreateFlowRuleRequest()
    : RpcServiceRequest("mse", "2019-05-31", "CreateFlowRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateFlowRuleRequest::~CreateFlowRuleRequest() {}

std::string CreateFlowRuleRequest::getMseSessionId() const {
  return mseSessionId_;
}

void CreateFlowRuleRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

int CreateFlowRuleRequest::getControlBehavior() const {
  return controlBehavior_;
}

void CreateFlowRuleRequest::setControlBehavior(int controlBehavior) {
  controlBehavior_ = controlBehavior;
  setParameter(std::string("ControlBehavior"), std::to_string(controlBehavior));
}

int CreateFlowRuleRequest::getThreshold() const {
  return threshold_;
}

void CreateFlowRuleRequest::setThreshold(int threshold) {
  threshold_ = threshold;
  setParameter(std::string("Threshold"), std::to_string(threshold));
}

std::string CreateFlowRuleRequest::getAppName() const {
  return appName_;
}

void CreateFlowRuleRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string CreateFlowRuleRequest::getRegionId() const {
  return regionId_;
}

void CreateFlowRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool CreateFlowRuleRequest::getEnable() const {
  return enable_;
}

void CreateFlowRuleRequest::setEnable(bool enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), enable ? "true" : "false");
}

std::string CreateFlowRuleRequest::getResource() const {
  return resource_;
}

void CreateFlowRuleRequest::setResource(const std::string &resource) {
  resource_ = resource;
  setParameter(std::string("Resource"), resource);
}

std::string CreateFlowRuleRequest::getAppId() const {
  return appId_;
}

void CreateFlowRuleRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string CreateFlowRuleRequest::get_Namespace() const {
  return _namespace_;
}

void CreateFlowRuleRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string CreateFlowRuleRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void CreateFlowRuleRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

int CreateFlowRuleRequest::getMaxQueueingTimeMs() const {
  return maxQueueingTimeMs_;
}

void CreateFlowRuleRequest::setMaxQueueingTimeMs(int maxQueueingTimeMs) {
  maxQueueingTimeMs_ = maxQueueingTimeMs;
  setParameter(std::string("MaxQueueingTimeMs"), std::to_string(maxQueueingTimeMs));
}

