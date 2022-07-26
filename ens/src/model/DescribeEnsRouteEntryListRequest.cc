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

#include <alibabacloud/ens/model/DescribeEnsRouteEntryListRequest.h>

using AlibabaCloud::Ens::Model::DescribeEnsRouteEntryListRequest;

DescribeEnsRouteEntryListRequest::DescribeEnsRouteEntryListRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeEnsRouteEntryList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEnsRouteEntryListRequest::~DescribeEnsRouteEntryListRequest() {}

std::string DescribeEnsRouteEntryListRequest::getRouteEntryName() const {
  return routeEntryName_;
}

void DescribeEnsRouteEntryListRequest::setRouteEntryName(const std::string &routeEntryName) {
  routeEntryName_ = routeEntryName;
  setParameter(std::string("RouteEntryName"), routeEntryName);
}

std::string DescribeEnsRouteEntryListRequest::getNextHopId() const {
  return nextHopId_;
}

void DescribeEnsRouteEntryListRequest::setNextHopId(const std::string &nextHopId) {
  nextHopId_ = nextHopId;
  setParameter(std::string("NextHopId"), nextHopId);
}

std::string DescribeEnsRouteEntryListRequest::getNextHopType() const {
  return nextHopType_;
}

void DescribeEnsRouteEntryListRequest::setNextHopType(const std::string &nextHopType) {
  nextHopType_ = nextHopType;
  setParameter(std::string("NextHopType"), nextHopType);
}

std::string DescribeEnsRouteEntryListRequest::getRouteTableId() const {
  return routeTableId_;
}

void DescribeEnsRouteEntryListRequest::setRouteTableId(const std::string &routeTableId) {
  routeTableId_ = routeTableId;
  setParameter(std::string("RouteTableId"), routeTableId);
}

std::string DescribeEnsRouteEntryListRequest::getDestinationCidrBlock() const {
  return destinationCidrBlock_;
}

void DescribeEnsRouteEntryListRequest::setDestinationCidrBlock(const std::string &destinationCidrBlock) {
  destinationCidrBlock_ = destinationCidrBlock;
  setParameter(std::string("DestinationCidrBlock"), destinationCidrBlock);
}

int DescribeEnsRouteEntryListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeEnsRouteEntryListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeEnsRouteEntryListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeEnsRouteEntryListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeEnsRouteEntryListRequest::getRouteEntryType() const {
  return routeEntryType_;
}

void DescribeEnsRouteEntryListRequest::setRouteEntryType(const std::string &routeEntryType) {
  routeEntryType_ = routeEntryType;
  setParameter(std::string("RouteEntryType"), routeEntryType);
}

std::string DescribeEnsRouteEntryListRequest::getRouteEntryId() const {
  return routeEntryId_;
}

void DescribeEnsRouteEntryListRequest::setRouteEntryId(const std::string &routeEntryId) {
  routeEntryId_ = routeEntryId;
  setParameter(std::string("RouteEntryId"), routeEntryId);
}

