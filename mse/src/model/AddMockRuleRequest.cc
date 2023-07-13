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

#include <alibabacloud/mse/model/AddMockRuleRequest.h>

using AlibabaCloud::Mse::Model::AddMockRuleRequest;

AddMockRuleRequest::AddMockRuleRequest()
    : RpcServiceRequest("mse", "2019-05-31", "AddMockRule") {
  setMethod(HttpRequest::Method::Post);
}

AddMockRuleRequest::~AddMockRuleRequest() {}

std::string AddMockRuleRequest::getMseSessionId() const {
  return mseSessionId_;
}

void AddMockRuleRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string AddMockRuleRequest::getExtraJson() const {
  return extraJson_;
}

void AddMockRuleRequest::setExtraJson(const std::string &extraJson) {
  extraJson_ = extraJson;
  setParameter(std::string("ExtraJson"), extraJson);
}

std::string AddMockRuleRequest::getSource() const {
  return source_;
}

void AddMockRuleRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

bool AddMockRuleRequest::getEnable() const {
  return enable_;
}

void AddMockRuleRequest::setEnable(bool enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), enable ? "true" : "false");
}

std::string AddMockRuleRequest::getScMockItems() const {
  return scMockItems_;
}

void AddMockRuleRequest::setScMockItems(const std::string &scMockItems) {
  scMockItems_ = scMockItems;
  setParameter(std::string("ScMockItems"), scMockItems);
}

std::string AddMockRuleRequest::getName() const {
  return name_;
}

void AddMockRuleRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string AddMockRuleRequest::getRegion() const {
  return region_;
}

void AddMockRuleRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::string AddMockRuleRequest::getProviderAppId() const {
  return providerAppId_;
}

void AddMockRuleRequest::setProviderAppId(const std::string &providerAppId) {
  providerAppId_ = providerAppId;
  setParameter(std::string("ProviderAppId"), providerAppId);
}

std::string AddMockRuleRequest::getProviderAppName() const {
  return providerAppName_;
}

void AddMockRuleRequest::setProviderAppName(const std::string &providerAppName) {
  providerAppName_ = providerAppName;
  setParameter(std::string("ProviderAppName"), providerAppName);
}

std::string AddMockRuleRequest::getConsumerAppIds() const {
  return consumerAppIds_;
}

void AddMockRuleRequest::setConsumerAppIds(const std::string &consumerAppIds) {
  consumerAppIds_ = consumerAppIds;
  setParameter(std::string("ConsumerAppIds"), consumerAppIds);
}

std::string AddMockRuleRequest::getDubboMockItems() const {
  return dubboMockItems_;
}

void AddMockRuleRequest::setDubboMockItems(const std::string &dubboMockItems) {
  dubboMockItems_ = dubboMockItems;
  setParameter(std::string("DubboMockItems"), dubboMockItems);
}

std::string AddMockRuleRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void AddMockRuleRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

long AddMockRuleRequest::getMockType() const {
  return mockType_;
}

void AddMockRuleRequest::setMockType(long mockType) {
  mockType_ = mockType;
  setParameter(std::string("MockType"), std::to_string(mockType));
}

