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

#include <alibabacloud/quotas/model/ListProductQuotaDimensionsRequest.h>

using AlibabaCloud::Quotas::Model::ListProductQuotaDimensionsRequest;

ListProductQuotaDimensionsRequest::ListProductQuotaDimensionsRequest()
    : RpcServiceRequest("quotas", "2020-05-10", "ListProductQuotaDimensions") {
  setMethod(HttpRequest::Method::Post);
}

ListProductQuotaDimensionsRequest::~ListProductQuotaDimensionsRequest() {}

std::string ListProductQuotaDimensionsRequest::getProductCode() const {
  return productCode_;
}

void ListProductQuotaDimensionsRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setBodyParameter(std::string("ProductCode"), productCode);
}

std::string ListProductQuotaDimensionsRequest::getNextToken() const {
  return nextToken_;
}

void ListProductQuotaDimensionsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

std::string ListProductQuotaDimensionsRequest::getQuotaCategory() const {
  return quotaCategory_;
}

void ListProductQuotaDimensionsRequest::setQuotaCategory(const std::string &quotaCategory) {
  quotaCategory_ = quotaCategory;
  setBodyParameter(std::string("QuotaCategory"), quotaCategory);
}

std::string ListProductQuotaDimensionsRequest::getOriginalContext() const {
  return originalContext_;
}

void ListProductQuotaDimensionsRequest::setOriginalContext(const std::string &originalContext) {
  originalContext_ = originalContext;
  setBodyParameter(std::string("OriginalContext"), originalContext);
}

int ListProductQuotaDimensionsRequest::getMaxResults() const {
  return maxResults_;
}

void ListProductQuotaDimensionsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}

