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

#include <alibabacloud/mse/model/ListGatewayServiceRequest.h>

using AlibabaCloud::Mse::Model::ListGatewayServiceRequest;

ListGatewayServiceRequest::ListGatewayServiceRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListGatewayService") {
  setMethod(HttpRequest::Method::Post);
}

ListGatewayServiceRequest::~ListGatewayServiceRequest() {}

std::string ListGatewayServiceRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListGatewayServiceRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

int ListGatewayServiceRequest::getPageNumber() const {
  return pageNumber_;
}

void ListGatewayServiceRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListGatewayServiceRequest::getOrderItem() const {
  return orderItem_;
}

void ListGatewayServiceRequest::setOrderItem(const std::string &orderItem) {
  orderItem_ = orderItem;
  setParameter(std::string("OrderItem"), orderItem);
}

int ListGatewayServiceRequest::getPageSize() const {
  return pageSize_;
}

void ListGatewayServiceRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

bool ListGatewayServiceRequest::getDescSort() const {
  return descSort_;
}

void ListGatewayServiceRequest::setDescSort(bool descSort) {
  descSort_ = descSort;
  setParameter(std::string("DescSort"), descSort ? "true" : "false");
}

ListGatewayServiceRequest::FilterParams ListGatewayServiceRequest::getFilterParams() const {
  return filterParams_;
}

void ListGatewayServiceRequest::setFilterParams(const ListGatewayServiceRequest::FilterParams &filterParams) {
  filterParams_ = filterParams;
  setParameter(std::string("FilterParams") + ".GatewayUniqueId", filterParams.gatewayUniqueId);
  setParameter(std::string("FilterParams") + ".ServiceProtocol", filterParams.serviceProtocol);
  setParameter(std::string("FilterParams") + ".Name", filterParams.name);
  setParameter(std::string("FilterParams") + ".Namespace", filterParams._namespace);
  setParameter(std::string("FilterParams") + ".SourceType", filterParams.sourceType);
  setParameter(std::string("FilterParams") + ".GroupName", filterParams.groupName);
}

std::string ListGatewayServiceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListGatewayServiceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

