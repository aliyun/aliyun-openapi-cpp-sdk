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

#include <alibabacloud/rds/model/DescribeRCClusterNodesRequest.h>

using AlibabaCloud::Rds::Model::DescribeRCClusterNodesRequest;

DescribeRCClusterNodesRequest::DescribeRCClusterNodesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeRCClusterNodes") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRCClusterNodesRequest::~DescribeRCClusterNodesRequest() {}

long DescribeRCClusterNodesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRCClusterNodesRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeRCClusterNodesRequest::getRegionId() const {
  return regionId_;
}

void DescribeRCClusterNodesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeRCClusterNodesRequest::getVpcId() const {
  return vpcId_;
}

void DescribeRCClusterNodesRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

long DescribeRCClusterNodesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRCClusterNodesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

