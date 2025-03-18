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

#include <alibabacloud/ens/model/DescribeEnsRouteTablesRequest.h>

using AlibabaCloud::Ens::Model::DescribeEnsRouteTablesRequest;

DescribeEnsRouteTablesRequest::DescribeEnsRouteTablesRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeEnsRouteTables") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEnsRouteTablesRequest::~DescribeEnsRouteTablesRequest() {}

std::string DescribeEnsRouteTablesRequest::getType() const {
  return type_;
}

void DescribeEnsRouteTablesRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeEnsRouteTablesRequest::getAssociateType() const {
  return associateType_;
}

void DescribeEnsRouteTablesRequest::setAssociateType(const std::string &associateType) {
  associateType_ = associateType;
  setParameter(std::string("AssociateType"), associateType);
}

std::string DescribeEnsRouteTablesRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeEnsRouteTablesRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string DescribeEnsRouteTablesRequest::getRouteTableId() const {
  return routeTableId_;
}

void DescribeEnsRouteTablesRequest::setRouteTableId(const std::string &routeTableId) {
  routeTableId_ = routeTableId;
  setParameter(std::string("RouteTableId"), routeTableId);
}

std::string DescribeEnsRouteTablesRequest::getNetworkId() const {
  return networkId_;
}

void DescribeEnsRouteTablesRequest::setNetworkId(const std::string &networkId) {
  networkId_ = networkId;
  setParameter(std::string("NetworkId"), networkId);
}

int DescribeEnsRouteTablesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeEnsRouteTablesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeEnsRouteTablesRequest::getRouteTableName() const {
  return routeTableName_;
}

void DescribeEnsRouteTablesRequest::setRouteTableName(const std::string &routeTableName) {
  routeTableName_ = routeTableName;
  setParameter(std::string("RouteTableName"), routeTableName);
}

int DescribeEnsRouteTablesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeEnsRouteTablesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeEnsRouteTablesRequest::std::string> DescribeEnsRouteTablesRequest::getEnsRegionIds() const {
  return ensRegionIds_;
}

void DescribeEnsRouteTablesRequest::setEnsRegionIds(const std::vector<DescribeEnsRouteTablesRequest::std::string> &ensRegionIds) {
  ensRegionIds_ = ensRegionIds;
  for(int dep1 = 0; dep1 != ensRegionIds.size(); dep1++) {
    setParameter(std::string("EnsRegionIds") + "." + std::to_string(dep1 + 1), ensRegionIds[dep1]);
  }
}

