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

#include <alibabacloud/quotas/model/ListQuotaApplicationTemplatesRequest.h>

using AlibabaCloud::Quotas::Model::ListQuotaApplicationTemplatesRequest;

ListQuotaApplicationTemplatesRequest::ListQuotaApplicationTemplatesRequest()
    : RpcServiceRequest("quotas", "2020-05-10", "ListQuotaApplicationTemplates") {
  setMethod(HttpRequest::Method::Post);
}

ListQuotaApplicationTemplatesRequest::~ListQuotaApplicationTemplatesRequest() {}

std::string ListQuotaApplicationTemplatesRequest::getProductCode() const {
  return productCode_;
}

void ListQuotaApplicationTemplatesRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setBodyParameter(std::string("ProductCode"), productCode);
}

std::string ListQuotaApplicationTemplatesRequest::getQuotaActionCode() const {
  return quotaActionCode_;
}

void ListQuotaApplicationTemplatesRequest::setQuotaActionCode(const std::string &quotaActionCode) {
  quotaActionCode_ = quotaActionCode;
  setBodyParameter(std::string("QuotaActionCode"), quotaActionCode);
}

std::string ListQuotaApplicationTemplatesRequest::getNextToken() const {
  return nextToken_;
}

void ListQuotaApplicationTemplatesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListQuotaApplicationTemplatesRequest::getId() const {
  return id_;
}

void ListQuotaApplicationTemplatesRequest::setId(const std::string &id) {
  id_ = id;
  setBodyParameter(std::string("Id"), id);
}

std::string ListQuotaApplicationTemplatesRequest::getQuotaCategory() const {
  return quotaCategory_;
}

void ListQuotaApplicationTemplatesRequest::setQuotaCategory(const std::string &quotaCategory) {
  quotaCategory_ = quotaCategory;
  setBodyParameter(std::string("QuotaCategory"), quotaCategory);
}

std::string ListQuotaApplicationTemplatesRequest::getOriginalContext() const {
  return originalContext_;
}

void ListQuotaApplicationTemplatesRequest::setOriginalContext(const std::string &originalContext) {
  originalContext_ = originalContext;
  setBodyParameter(std::string("OriginalContext"), originalContext);
}

int ListQuotaApplicationTemplatesRequest::getMaxResults() const {
  return maxResults_;
}

void ListQuotaApplicationTemplatesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::vector<ListQuotaApplicationTemplatesRequest::Dimensions> ListQuotaApplicationTemplatesRequest::getDimensions() const {
  return dimensions_;
}

void ListQuotaApplicationTemplatesRequest::setDimensions(const std::vector<ListQuotaApplicationTemplatesRequest::Dimensions> &dimensions) {
  dimensions_ = dimensions;
  for(int dep1 = 0; dep1 != dimensions.size(); dep1++) {
  auto dimensionsObj = dimensions.at(dep1);
  std::string dimensionsObjStr = std::string("Dimensions") + "." + std::to_string(dep1 + 1);
    setBodyParameter(dimensionsObjStr + ".Key", dimensionsObj.key);
    setBodyParameter(dimensionsObjStr + ".Value", dimensionsObj.value);
  }
}

