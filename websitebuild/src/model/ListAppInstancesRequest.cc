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

#include <alibabacloud/websitebuild/model/ListAppInstancesRequest.h>

using AlibabaCloud::WebsiteBuild::Model::ListAppInstancesRequest;

ListAppInstancesRequest::ListAppInstancesRequest()
    : RpcServiceRequest("websitebuild", "2025-04-29", "ListAppInstances") {
  setMethod(HttpRequest::Method::Post);
}

ListAppInstancesRequest::~ListAppInstancesRequest() {}

std::vector<ListAppInstancesRequest::std::string> ListAppInstancesRequest::getStatusList() const {
  return statusList_;
}

void ListAppInstancesRequest::setStatusList(const std::vector<ListAppInstancesRequest::std::string> &statusList) {
  statusList_ = statusList;
  for(int dep1 = 0; dep1 != statusList.size(); dep1++) {
    setParameter(std::string("StatusList") + "." + std::to_string(dep1 + 1), statusList[dep1]);
  }
}

int ListAppInstancesRequest::getPageNum() const {
  return pageNum_;
}

void ListAppInstancesRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListAppInstancesRequest::getOrderColumn() const {
  return orderColumn_;
}

void ListAppInstancesRequest::setOrderColumn(const std::string &orderColumn) {
  orderColumn_ = orderColumn;
  setParameter(std::string("OrderColumn"), orderColumn);
}

std::string ListAppInstancesRequest::getNextToken() const {
  return nextToken_;
}

void ListAppInstancesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListAppInstancesRequest::getPageSize() const {
  return pageSize_;
}

void ListAppInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAppInstancesRequest::getEndTimeBegin() const {
  return endTimeBegin_;
}

void ListAppInstancesRequest::setEndTimeBegin(const std::string &endTimeBegin) {
  endTimeBegin_ = endTimeBegin;
  setParameter(std::string("EndTimeBegin"), endTimeBegin);
}

std::string ListAppInstancesRequest::getQuery() const {
  return query_;
}

void ListAppInstancesRequest::setQuery(const std::string &query) {
  query_ = query;
  setParameter(std::string("Query"), query);
}

std::string ListAppInstancesRequest::getExtend() const {
  return extend_;
}

void ListAppInstancesRequest::setExtend(const std::string &extend) {
  extend_ = extend;
  setParameter(std::string("Extend"), extend);
}

std::string ListAppInstancesRequest::getEndTimeEnd() const {
  return endTimeEnd_;
}

void ListAppInstancesRequest::setEndTimeEnd(const std::string &endTimeEnd) {
  endTimeEnd_ = endTimeEnd;
  setParameter(std::string("EndTimeEnd"), endTimeEnd);
}

std::string ListAppInstancesRequest::getBizId() const {
  return bizId_;
}

void ListAppInstancesRequest::setBizId(const std::string &bizId) {
  bizId_ = bizId;
  setParameter(std::string("BizId"), bizId);
}

int ListAppInstancesRequest::getMaxResults() const {
  return maxResults_;
}

void ListAppInstancesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListAppInstancesRequest::getOrderType() const {
  return orderType_;
}

void ListAppInstancesRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

