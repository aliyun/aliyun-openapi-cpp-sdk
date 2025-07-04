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

#include <alibabacloud/rds/model/DescribeVSwitchListRequest.h>

using AlibabaCloud::Rds::Model::DescribeVSwitchListRequest;

DescribeVSwitchListRequest::DescribeVSwitchListRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeVSwitchList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVSwitchListRequest::~DescribeVSwitchListRequest() {}

std::vector<std::string> DescribeVSwitchListRequest::getVSwitchIds() const {
  return vSwitchIds_;
}

void DescribeVSwitchListRequest::setVSwitchIds(const std::vector<std::string> &vSwitchIds) {
  vSwitchIds_ = vSwitchIds;
}

std::string DescribeVSwitchListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeVSwitchListRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeVSwitchListRequest::getRegionId() const {
  return regionId_;
}

void DescribeVSwitchListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeVSwitchListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVSwitchListRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeVSwitchListRequest::getVpcId() const {
  return vpcId_;
}

void DescribeVSwitchListRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

