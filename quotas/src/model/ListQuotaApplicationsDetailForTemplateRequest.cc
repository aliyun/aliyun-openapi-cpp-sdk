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

#include <alibabacloud/quotas/model/ListQuotaApplicationsDetailForTemplateRequest.h>

using AlibabaCloud::Quotas::Model::ListQuotaApplicationsDetailForTemplateRequest;

ListQuotaApplicationsDetailForTemplateRequest::ListQuotaApplicationsDetailForTemplateRequest()
    : RpcServiceRequest("quotas", "2020-05-10", "ListQuotaApplicationsDetailForTemplate") {
  setMethod(HttpRequest::Method::Post);
}

ListQuotaApplicationsDetailForTemplateRequest::~ListQuotaApplicationsDetailForTemplateRequest() {}

std::string ListQuotaApplicationsDetailForTemplateRequest::getProductCode() const {
  return productCode_;
}

void ListQuotaApplicationsDetailForTemplateRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setBodyParameter(std::string("ProductCode"), productCode);
}

std::string ListQuotaApplicationsDetailForTemplateRequest::getQuotaActionCode() const {
  return quotaActionCode_;
}

void ListQuotaApplicationsDetailForTemplateRequest::setQuotaActionCode(const std::string &quotaActionCode) {
  quotaActionCode_ = quotaActionCode;
  setBodyParameter(std::string("QuotaActionCode"), quotaActionCode);
}

std::string ListQuotaApplicationsDetailForTemplateRequest::getBatchQuotaApplicationId() const {
  return batchQuotaApplicationId_;
}

void ListQuotaApplicationsDetailForTemplateRequest::setBatchQuotaApplicationId(const std::string &batchQuotaApplicationId) {
  batchQuotaApplicationId_ = batchQuotaApplicationId;
  setBodyParameter(std::string("BatchQuotaApplicationId"), batchQuotaApplicationId);
}

std::string ListQuotaApplicationsDetailForTemplateRequest::getNextToken() const {
  return nextToken_;
}

void ListQuotaApplicationsDetailForTemplateRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

std::string ListQuotaApplicationsDetailForTemplateRequest::getQuotaCategory() const {
  return quotaCategory_;
}

void ListQuotaApplicationsDetailForTemplateRequest::setQuotaCategory(const std::string &quotaCategory) {
  quotaCategory_ = quotaCategory;
  setBodyParameter(std::string("QuotaCategory"), quotaCategory);
}

std::string ListQuotaApplicationsDetailForTemplateRequest::getOriginalContext() const {
  return originalContext_;
}

void ListQuotaApplicationsDetailForTemplateRequest::setOriginalContext(const std::string &originalContext) {
  originalContext_ = originalContext;
  setBodyParameter(std::string("OriginalContext"), originalContext);
}

std::string ListQuotaApplicationsDetailForTemplateRequest::getAliyunUid() const {
  return aliyunUid_;
}

void ListQuotaApplicationsDetailForTemplateRequest::setAliyunUid(const std::string &aliyunUid) {
  aliyunUid_ = aliyunUid;
  setBodyParameter(std::string("AliyunUid"), aliyunUid);
}

int ListQuotaApplicationsDetailForTemplateRequest::getMaxResults() const {
  return maxResults_;
}

void ListQuotaApplicationsDetailForTemplateRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListQuotaApplicationsDetailForTemplateRequest::getStatus() const {
  return status_;
}

void ListQuotaApplicationsDetailForTemplateRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}

