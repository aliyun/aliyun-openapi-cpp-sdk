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

#include <alibabacloud/smartag/model/ListDpiConfigErrorRequest.h>

using AlibabaCloud::Smartag::Model::ListDpiConfigErrorRequest;

ListDpiConfigErrorRequest::ListDpiConfigErrorRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ListDpiConfigError") {
  setMethod(HttpRequest::Method::Post);
}

ListDpiConfigErrorRequest::~ListDpiConfigErrorRequest() {}

std::string ListDpiConfigErrorRequest::getDpiConfigType() const {
  return dpiConfigType_;
}

void ListDpiConfigErrorRequest::setDpiConfigType(const std::string &dpiConfigType) {
  dpiConfigType_ = dpiConfigType;
  setParameter(std::string("DpiConfigType"), dpiConfigType);
}

std::string ListDpiConfigErrorRequest::getRegionId() const {
  return regionId_;
}

void ListDpiConfigErrorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListDpiConfigErrorRequest::getNextToken() const {
  return nextToken_;
}

void ListDpiConfigErrorRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListDpiConfigErrorRequest::getSmartAGId() const {
  return smartAGId_;
}

void ListDpiConfigErrorRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string ListDpiConfigErrorRequest::getRuleInstanceId() const {
  return ruleInstanceId_;
}

void ListDpiConfigErrorRequest::setRuleInstanceId(const std::string &ruleInstanceId) {
  ruleInstanceId_ = ruleInstanceId;
  setParameter(std::string("RuleInstanceId"), ruleInstanceId);
}

int ListDpiConfigErrorRequest::getMaxResults() const {
  return maxResults_;
}

void ListDpiConfigErrorRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

