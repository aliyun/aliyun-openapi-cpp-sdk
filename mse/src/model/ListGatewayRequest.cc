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

#include <alibabacloud/mse/model/ListGatewayRequest.h>

using AlibabaCloud::Mse::Model::ListGatewayRequest;

ListGatewayRequest::ListGatewayRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListGateway") {
  setMethod(HttpRequest::Method::Post);
}

ListGatewayRequest::~ListGatewayRequest() {}

std::string ListGatewayRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListGatewayRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

int ListGatewayRequest::getPageNumber() const {
  return pageNumber_;
}

void ListGatewayRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListGatewayRequest::getOrderItem() const {
  return orderItem_;
}

void ListGatewayRequest::setOrderItem(const std::string &orderItem) {
  orderItem_ = orderItem;
  setParameter(std::string("OrderItem"), orderItem);
}

int ListGatewayRequest::getPageSize() const {
  return pageSize_;
}

void ListGatewayRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

bool ListGatewayRequest::getDescSort() const {
  return descSort_;
}

void ListGatewayRequest::setDescSort(bool descSort) {
  descSort_ = descSort;
  setParameter(std::string("DescSort"), descSort ? "true" : "false");
}

ListGatewayRequest::FilterParams ListGatewayRequest::getFilterParams() const {
  return filterParams_;
}

void ListGatewayRequest::setFilterParams(const ListGatewayRequest::FilterParams &filterParams) {
  filterParams_ = filterParams;
  setParameter(std::string("FilterParams") + ".ResourceGroupId", filterParams.resourceGroupId);
  setParameter(std::string("FilterParams") + ".GatewayType", filterParams.gatewayType);
  setParameter(std::string("FilterParams") + ".InstanceId", filterParams.instanceId);
  setParameter(std::string("FilterParams") + ".GatewayUniqueId", filterParams.gatewayUniqueId);
  setParameter(std::string("FilterParams") + ".Name", filterParams.name);
  setParameter(std::string("FilterParams") + ".Vpc", filterParams.vpc);
  setParameter(std::string("FilterParams") + ".MseTag", filterParams.mseTag);
}

std::string ListGatewayRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListGatewayRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

