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

#include <alibabacloud/ddosbgp/model/DescribePackIpListRequest.h>

using AlibabaCloud::Ddosbgp::Model::DescribePackIpListRequest;

DescribePackIpListRequest::DescribePackIpListRequest()
    : RpcServiceRequest("ddosbgp", "2018-07-20", "DescribePackIpList") {
  setMethod(HttpRequest::Method::Post);
}

DescribePackIpListRequest::~DescribePackIpListRequest() {}

std::string DescribePackIpListRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribePackIpListRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribePackIpListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribePackIpListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribePackIpListRequest::getRegionId() const {
  return regionId_;
}

void DescribePackIpListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribePackIpListRequest::getPageSize() const {
  return pageSize_;
}

void DescribePackIpListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribePackIpListRequest::getProductName() const {
  return productName_;
}

void DescribePackIpListRequest::setProductName(const std::string &productName) {
  productName_ = productName;
  setParameter(std::string("ProductName"), productName);
}

std::string DescribePackIpListRequest::getIp() const {
  return ip_;
}

void DescribePackIpListRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

std::string DescribePackIpListRequest::getInstanceId() const {
  return instanceId_;
}

void DescribePackIpListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int DescribePackIpListRequest::getPageNo() const {
  return pageNo_;
}

void DescribePackIpListRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

