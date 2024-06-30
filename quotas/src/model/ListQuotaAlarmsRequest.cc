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

#include <alibabacloud/quotas/model/ListQuotaAlarmsRequest.h>

using AlibabaCloud::Quotas::Model::ListQuotaAlarmsRequest;

ListQuotaAlarmsRequest::ListQuotaAlarmsRequest()
    : RpcServiceRequest("quotas", "2020-05-10", "ListQuotaAlarms") {
  setMethod(HttpRequest::Method::Post);
}

ListQuotaAlarmsRequest::~ListQuotaAlarmsRequest() {}

std::string ListQuotaAlarmsRequest::getProductCode() const {
  return productCode_;
}

void ListQuotaAlarmsRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setBodyParameter(std::string("ProductCode"), productCode);
}

std::string ListQuotaAlarmsRequest::getQuotaActionCode() const {
  return quotaActionCode_;
}

void ListQuotaAlarmsRequest::setQuotaActionCode(const std::string &quotaActionCode) {
  quotaActionCode_ = quotaActionCode;
  setBodyParameter(std::string("QuotaActionCode"), quotaActionCode);
}

std::string ListQuotaAlarmsRequest::getNextToken() const {
  return nextToken_;
}

void ListQuotaAlarmsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

std::vector<ListQuotaAlarmsRequest::QuotaDimensions> ListQuotaAlarmsRequest::getQuotaDimensions() const {
  return quotaDimensions_;
}

void ListQuotaAlarmsRequest::setQuotaDimensions(const std::vector<ListQuotaAlarmsRequest::QuotaDimensions> &quotaDimensions) {
  quotaDimensions_ = quotaDimensions;
  for(int dep1 = 0; dep1 != quotaDimensions.size(); dep1++) {
  auto quotaDimensionsObj = quotaDimensions.at(dep1);
  std::string quotaDimensionsObjStr = std::string("QuotaDimensions") + "." + std::to_string(dep1 + 1);
    setBodyParameter(quotaDimensionsObjStr + ".Key", quotaDimensionsObj.key);
    setBodyParameter(quotaDimensionsObjStr + ".Value", quotaDimensionsObj.value);
  }
}

std::string ListQuotaAlarmsRequest::getOriginalContext() const {
  return originalContext_;
}

void ListQuotaAlarmsRequest::setOriginalContext(const std::string &originalContext) {
  originalContext_ = originalContext;
  setBodyParameter(std::string("OriginalContext"), originalContext);
}

int ListQuotaAlarmsRequest::getMaxResults() const {
  return maxResults_;
}

void ListQuotaAlarmsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListQuotaAlarmsRequest::getAlarmName() const {
  return alarmName_;
}

void ListQuotaAlarmsRequest::setAlarmName(const std::string &alarmName) {
  alarmName_ = alarmName;
  setBodyParameter(std::string("AlarmName"), alarmName);
}

