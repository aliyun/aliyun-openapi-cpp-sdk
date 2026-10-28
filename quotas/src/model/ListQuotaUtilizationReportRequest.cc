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

#include <alibabacloud/quotas/model/ListQuotaUtilizationReportRequest.h>

using AlibabaCloud::Quotas::Model::ListQuotaUtilizationReportRequest;

ListQuotaUtilizationReportRequest::ListQuotaUtilizationReportRequest()
    : RpcServiceRequest("quotas", "2020-05-10", "ListQuotaUtilizationReport") {
  setMethod(HttpRequest::Method::Post);
}

ListQuotaUtilizationReportRequest::~ListQuotaUtilizationReportRequest() {}

std::string ListQuotaUtilizationReportRequest::getProductCode() const {
  return productCode_;
}

void ListQuotaUtilizationReportRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setBodyParameter(std::string("ProductCode"), productCode);
}

std::string ListQuotaUtilizationReportRequest::getKeyWords() const {
  return keyWords_;
}

void ListQuotaUtilizationReportRequest::setKeyWords(const std::string &keyWords) {
  keyWords_ = keyWords;
  setBodyParameter(std::string("KeyWords"), keyWords);
}

std::string ListQuotaUtilizationReportRequest::getNextToken() const {
  return nextToken_;
}

void ListQuotaUtilizationReportRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

std::string ListQuotaUtilizationReportRequest::getQuotaCategory() const {
  return quotaCategory_;
}

void ListQuotaUtilizationReportRequest::setQuotaCategory(const std::string &quotaCategory) {
  quotaCategory_ = quotaCategory;
  setBodyParameter(std::string("QuotaCategory"), quotaCategory);
}

std::string ListQuotaUtilizationReportRequest::getOriginalContext() const {
  return originalContext_;
}

void ListQuotaUtilizationReportRequest::setOriginalContext(const std::string &originalContext) {
  originalContext_ = originalContext;
  setBodyParameter(std::string("OriginalContext"), originalContext);
}

std::vector<std::string> ListQuotaUtilizationReportRequest::getUtilizationStatuses() const {
  return utilizationStatuses_;
}

void ListQuotaUtilizationReportRequest::setUtilizationStatuses(const std::vector<std::string> &utilizationStatuses) {
  utilizationStatuses_ = utilizationStatuses;
}

std::string ListQuotaUtilizationReportRequest::getQuotaRegionId() const {
  return quotaRegionId_;
}

void ListQuotaUtilizationReportRequest::setQuotaRegionId(const std::string &quotaRegionId) {
  quotaRegionId_ = quotaRegionId;
  setBodyParameter(std::string("QuotaRegionId"), quotaRegionId);
}

int ListQuotaUtilizationReportRequest::getMaxResults() const {
  return maxResults_;
}

void ListQuotaUtilizationReportRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}

bool ListQuotaUtilizationReportRequest::getAdjustable() const {
  return adjustable_;
}

void ListQuotaUtilizationReportRequest::setAdjustable(bool adjustable) {
  adjustable_ = adjustable;
  setBodyParameter(std::string("Adjustable"), adjustable ? "true" : "false");
}

