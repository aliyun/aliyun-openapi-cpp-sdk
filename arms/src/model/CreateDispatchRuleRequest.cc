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

#include <alibabacloud/arms/model/CreateDispatchRuleRequest.h>

using AlibabaCloud::ARMS::Model::CreateDispatchRuleRequest;

CreateDispatchRuleRequest::CreateDispatchRuleRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreateDispatchRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateDispatchRuleRequest::~CreateDispatchRuleRequest() {}

std::string CreateDispatchRuleRequest::getDispatchRule() const {
  return dispatchRule_;
}

void CreateDispatchRuleRequest::setDispatchRule(const std::string &dispatchRule) {
  dispatchRule_ = dispatchRule;
  setParameter(std::string("DispatchRule"), dispatchRule);
}

std::string CreateDispatchRuleRequest::getRegionId() const {
  return regionId_;
}

void CreateDispatchRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDispatchRuleRequest::getProxyUserId() const {
  return proxyUserId_;
}

void CreateDispatchRuleRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

