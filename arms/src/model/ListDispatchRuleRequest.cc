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

#include <alibabacloud/arms/model/ListDispatchRuleRequest.h>

using AlibabaCloud::ARMS::Model::ListDispatchRuleRequest;

ListDispatchRuleRequest::ListDispatchRuleRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListDispatchRule") {
  setMethod(HttpRequest::Method::Post);
}

ListDispatchRuleRequest::~ListDispatchRuleRequest() {}

bool ListDispatchRuleRequest::getSystem() const {
  return system_;
}

void ListDispatchRuleRequest::setSystem(bool system) {
  system_ = system;
  setParameter(std::string("System"), system ? "true" : "false");
}

std::string ListDispatchRuleRequest::getRegionId() const {
  return regionId_;
}

void ListDispatchRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListDispatchRuleRequest::getName() const {
  return name_;
}

void ListDispatchRuleRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListDispatchRuleRequest::getProxyUserId() const {
  return proxyUserId_;
}

void ListDispatchRuleRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

