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

#include <alibabacloud/dms-enterprise/model/ListOrdersRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListOrdersRequest;

ListOrdersRequest::ListOrdersRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListOrders") {
  setMethod(HttpRequest::Method::Post);
}

ListOrdersRequest::~ListOrdersRequest() {}

std::string ListOrdersRequest::getOrderStatus() const {
  return orderStatus_;
}

void ListOrdersRequest::setOrderStatus(const std::string &orderStatus) {
  orderStatus_ = orderStatus;
  setParameter(std::string("OrderStatus"), orderStatus);
}

std::string ListOrdersRequest::getSearchDateType() const {
  return searchDateType_;
}

void ListOrdersRequest::setSearchDateType(const std::string &searchDateType) {
  searchDateType_ = searchDateType;
  setParameter(std::string("SearchDateType"), searchDateType);
}

std::string ListOrdersRequest::getStartTime() const {
  return startTime_;
}

void ListOrdersRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

long ListOrdersRequest::getTid() const {
  return tid_;
}

void ListOrdersRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int ListOrdersRequest::getPageNumber() const {
  return pageNumber_;
}

void ListOrdersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListOrdersRequest::getPluginType() const {
  return pluginType_;
}

void ListOrdersRequest::setPluginType(const std::string &pluginType) {
  pluginType_ = pluginType;
  setParameter(std::string("PluginType"), pluginType);
}

int ListOrdersRequest::getPageSize() const {
  return pageSize_;
}

void ListOrdersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListOrdersRequest::getOrderResultType() const {
  return orderResultType_;
}

void ListOrdersRequest::setOrderResultType(const std::string &orderResultType) {
  orderResultType_ = orderResultType;
  setParameter(std::string("OrderResultType"), orderResultType);
}

std::string ListOrdersRequest::getSearchContent() const {
  return searchContent_;
}

void ListOrdersRequest::setSearchContent(const std::string &searchContent) {
  searchContent_ = searchContent;
  setParameter(std::string("SearchContent"), searchContent);
}

std::string ListOrdersRequest::getEndTime() const {
  return endTime_;
}

void ListOrdersRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

