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

#include <alibabacloud/websitebuild/model/ListAppInstanceDomainsRequest.h>

using AlibabaCloud::WebsiteBuild::Model::ListAppInstanceDomainsRequest;

ListAppInstanceDomainsRequest::ListAppInstanceDomainsRequest()
    : RpcServiceRequest("websitebuild", "2025-04-29", "ListAppInstanceDomains") {
  setMethod(HttpRequest::Method::Post);
}

ListAppInstanceDomainsRequest::~ListAppInstanceDomainsRequest() {}

int ListAppInstanceDomainsRequest::getPageNum() const {
  return pageNum_;
}

void ListAppInstanceDomainsRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListAppInstanceDomainsRequest::getOrderColumn() const {
  return orderColumn_;
}

void ListAppInstanceDomainsRequest::setOrderColumn(const std::string &orderColumn) {
  orderColumn_ = orderColumn;
  setParameter(std::string("OrderColumn"), orderColumn);
}

std::string ListAppInstanceDomainsRequest::getNextToken() const {
  return nextToken_;
}

void ListAppInstanceDomainsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListAppInstanceDomainsRequest::getBizId() const {
  return bizId_;
}

void ListAppInstanceDomainsRequest::setBizId(const std::string &bizId) {
  bizId_ = bizId;
  setParameter(std::string("BizId"), bizId);
}

int ListAppInstanceDomainsRequest::getPageSize() const {
  return pageSize_;
}

void ListAppInstanceDomainsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListAppInstanceDomainsRequest::getMaxResults() const {
  return maxResults_;
}

void ListAppInstanceDomainsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListAppInstanceDomainsRequest::getOrderType() const {
  return orderType_;
}

void ListAppInstanceDomainsRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

