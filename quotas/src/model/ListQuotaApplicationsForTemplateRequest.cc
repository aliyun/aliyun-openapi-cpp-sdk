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

#include <alibabacloud/quotas/model/ListQuotaApplicationsForTemplateRequest.h>

using AlibabaCloud::Quotas::Model::ListQuotaApplicationsForTemplateRequest;

ListQuotaApplicationsForTemplateRequest::ListQuotaApplicationsForTemplateRequest()
    : RpcServiceRequest("quotas", "2020-05-10", "ListQuotaApplicationsForTemplate") {
  setMethod(HttpRequest::Method::Post);
}

ListQuotaApplicationsForTemplateRequest::~ListQuotaApplicationsForTemplateRequest() {}

std::string ListQuotaApplicationsForTemplateRequest::getProductCode() const {
  return productCode_;
}

void ListQuotaApplicationsForTemplateRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setBodyParameter(std::string("ProductCode"), productCode);
}

std::string ListQuotaApplicationsForTemplateRequest::getQuotaActionCode() const {
  return quotaActionCode_;
}

void ListQuotaApplicationsForTemplateRequest::setQuotaActionCode(const std::string &quotaActionCode) {
  quotaActionCode_ = quotaActionCode;
  setBodyParameter(std::string("QuotaActionCode"), quotaActionCode);
}

std::string ListQuotaApplicationsForTemplateRequest::getBatchQuotaApplicationId() const {
  return batchQuotaApplicationId_;
}

void ListQuotaApplicationsForTemplateRequest::setBatchQuotaApplicationId(const std::string &batchQuotaApplicationId) {
  batchQuotaApplicationId_ = batchQuotaApplicationId;
  setBodyParameter(std::string("BatchQuotaApplicationId"), batchQuotaApplicationId);
}

std::string ListQuotaApplicationsForTemplateRequest::getNextToken() const {
  return nextToken_;
}

void ListQuotaApplicationsForTemplateRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

std::string ListQuotaApplicationsForTemplateRequest::getQuotaCategory() const {
  return quotaCategory_;
}

void ListQuotaApplicationsForTemplateRequest::setQuotaCategory(const std::string &quotaCategory) {
  quotaCategory_ = quotaCategory;
  setBodyParameter(std::string("QuotaCategory"), quotaCategory);
}

std::string ListQuotaApplicationsForTemplateRequest::getOriginalContext() const {
  return originalContext_;
}

void ListQuotaApplicationsForTemplateRequest::setOriginalContext(const std::string &originalContext) {
  originalContext_ = originalContext;
  setBodyParameter(std::string("OriginalContext"), originalContext);
}

std::string ListQuotaApplicationsForTemplateRequest::getApplyStartTime() const {
  return applyStartTime_;
}

void ListQuotaApplicationsForTemplateRequest::setApplyStartTime(const std::string &applyStartTime) {
  applyStartTime_ = applyStartTime;
  setBodyParameter(std::string("ApplyStartTime"), applyStartTime);
}

std::string ListQuotaApplicationsForTemplateRequest::getApplyEndTime() const {
  return applyEndTime_;
}

void ListQuotaApplicationsForTemplateRequest::setApplyEndTime(const std::string &applyEndTime) {
  applyEndTime_ = applyEndTime;
  setBodyParameter(std::string("ApplyEndTime"), applyEndTime);
}

int ListQuotaApplicationsForTemplateRequest::getMaxResults() const {
  return maxResults_;
}

void ListQuotaApplicationsForTemplateRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}

