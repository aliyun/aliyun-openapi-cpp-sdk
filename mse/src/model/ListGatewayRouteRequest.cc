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

#include <alibabacloud/mse/model/ListGatewayRouteRequest.h>

using AlibabaCloud::Mse::Model::ListGatewayRouteRequest;

ListGatewayRouteRequest::ListGatewayRouteRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListGatewayRoute") {
  setMethod(HttpRequest::Method::Post);
}

ListGatewayRouteRequest::~ListGatewayRouteRequest() {}

std::string ListGatewayRouteRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListGatewayRouteRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

int ListGatewayRouteRequest::getPageNumber() const {
  return pageNumber_;
}

void ListGatewayRouteRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListGatewayRouteRequest::getOrderItem() const {
  return orderItem_;
}

void ListGatewayRouteRequest::setOrderItem(const std::string &orderItem) {
  orderItem_ = orderItem;
  setParameter(std::string("OrderItem"), orderItem);
}

int ListGatewayRouteRequest::getPageSize() const {
  return pageSize_;
}

void ListGatewayRouteRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

bool ListGatewayRouteRequest::getDescSort() const {
  return descSort_;
}

void ListGatewayRouteRequest::setDescSort(bool descSort) {
  descSort_ = descSort;
  setParameter(std::string("DescSort"), descSort ? "true" : "false");
}

ListGatewayRouteRequest::FilterParams ListGatewayRouteRequest::getFilterParams() const {
  return filterParams_;
}

void ListGatewayRouteRequest::setFilterParams(const ListGatewayRouteRequest::FilterParams &filterParams) {
  filterParams_ = filterParams;
  setParameter(std::string("FilterParams") + ".DefaultServiceId", std::to_string(filterParams.defaultServiceId));
  setParameter(std::string("FilterParams") + ".RouteOrder", std::to_string(filterParams.routeOrder));
  setParameter(std::string("FilterParams") + ".GatewayUniqueId", filterParams.gatewayUniqueId);
  setParameter(std::string("FilterParams") + ".Name", filterParams.name);
  setParameter(std::string("FilterParams") + ".DomainName", filterParams.domainName);
  setParameter(std::string("FilterParams") + ".GatewayId", std::to_string(filterParams.gatewayId));
  setParameter(std::string("FilterParams") + ".DomainId", std::to_string(filterParams.domainId));
  setParameter(std::string("FilterParams") + ".Status", std::to_string(filterParams.status));
}

std::string ListGatewayRouteRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListGatewayRouteRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

