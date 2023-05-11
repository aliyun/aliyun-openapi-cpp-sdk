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

#include <alibabacloud/alidns/model/SetDnsGtmAccessModeRequest.h>

using AlibabaCloud::Alidns::Model::SetDnsGtmAccessModeRequest;

SetDnsGtmAccessModeRequest::SetDnsGtmAccessModeRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "SetDnsGtmAccessMode") {
  setMethod(HttpRequest::Method::Post);
}

SetDnsGtmAccessModeRequest::~SetDnsGtmAccessModeRequest() {}

std::string SetDnsGtmAccessModeRequest::getUserClientIp() const {
  return userClientIp_;
}

void SetDnsGtmAccessModeRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string SetDnsGtmAccessModeRequest::getStrategyId() const {
  return strategyId_;
}

void SetDnsGtmAccessModeRequest::setStrategyId(const std::string &strategyId) {
  strategyId_ = strategyId;
  setParameter(std::string("StrategyId"), strategyId);
}

std::string SetDnsGtmAccessModeRequest::getLang() const {
  return lang_;
}

void SetDnsGtmAccessModeRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string SetDnsGtmAccessModeRequest::getAccessMode() const {
  return accessMode_;
}

void SetDnsGtmAccessModeRequest::setAccessMode(const std::string &accessMode) {
  accessMode_ = accessMode;
  setParameter(std::string("AccessMode"), accessMode);
}

