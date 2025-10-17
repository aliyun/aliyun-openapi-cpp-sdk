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

#include <alibabacloud/polardb/model/ListOrdersRequest.h>

using AlibabaCloud::Polardb::Model::ListOrdersRequest;

ListOrdersRequest::ListOrdersRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ListOrders") {
  setMethod(HttpRequest::Method::Post);
}

ListOrdersRequest::~ListOrdersRequest() {}

std::string ListOrdersRequest::getProductCode() const {
  return productCode_;
}

void ListOrdersRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string ListOrdersRequest::getOrderStatus() const {
  return orderStatus_;
}

void ListOrdersRequest::setOrderStatus(const std::string &orderStatus) {
  orderStatus_ = orderStatus;
  setParameter(std::string("OrderStatus"), orderStatus);
}

int ListOrdersRequest::getPageNumber() const {
  return pageNumber_;
}

void ListOrdersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListOrdersRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListOrdersRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListOrdersRequest::getRegionId() const {
  return regionId_;
}

void ListOrdersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListOrdersRequest::getNextToken() const {
  return nextToken_;
}

void ListOrdersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListOrdersRequest::getPageSize() const {
  return pageSize_;
}

void ListOrdersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListOrdersRequest::getInstanceId() const {
  return instanceId_;
}

void ListOrdersRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListOrdersRequest::getMaxResults() const {
  return maxResults_;
}

void ListOrdersRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListOrdersRequest::getCategory() const {
  return category_;
}

void ListOrdersRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

