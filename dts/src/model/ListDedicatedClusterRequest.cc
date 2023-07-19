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

#include <alibabacloud/dts/model/ListDedicatedClusterRequest.h>

using AlibabaCloud::Dts::Model::ListDedicatedClusterRequest;

ListDedicatedClusterRequest::ListDedicatedClusterRequest()
    : RpcServiceRequest("dts", "2020-01-01", "ListDedicatedCluster") {
  setMethod(HttpRequest::Method::Post);
}

ListDedicatedClusterRequest::~ListDedicatedClusterRequest() {}

std::string ListDedicatedClusterRequest::getOrderDirection() const {
  return orderDirection_;
}

void ListDedicatedClusterRequest::setOrderDirection(const std::string &orderDirection) {
  orderDirection_ = orderDirection;
  setParameter(std::string("OrderDirection"), orderDirection);
}

std::string ListDedicatedClusterRequest::getType() const {
  return type_;
}

void ListDedicatedClusterRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int ListDedicatedClusterRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDedicatedClusterRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListDedicatedClusterRequest::getOrderColumn() const {
  return orderColumn_;
}

void ListDedicatedClusterRequest::setOrderColumn(const std::string &orderColumn) {
  orderColumn_ = orderColumn;
  setParameter(std::string("OrderColumn"), orderColumn);
}

std::string ListDedicatedClusterRequest::getRegionId() const {
  return regionId_;
}

void ListDedicatedClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListDedicatedClusterRequest::getPageSize() const {
  return pageSize_;
}

void ListDedicatedClusterRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListDedicatedClusterRequest::getState() const {
  return state_;
}

void ListDedicatedClusterRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string ListDedicatedClusterRequest::getOwnerId() const {
  return ownerId_;
}

void ListDedicatedClusterRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string ListDedicatedClusterRequest::getParams() const {
  return params_;
}

void ListDedicatedClusterRequest::setParams(const std::string &params) {
  params_ = params;
  setParameter(std::string("Params"), params);
}

