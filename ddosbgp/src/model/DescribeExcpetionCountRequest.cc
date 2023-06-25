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

#include <alibabacloud/ddosbgp/model/DescribeExcpetionCountRequest.h>

using AlibabaCloud::Ddosbgp::Model::DescribeExcpetionCountRequest;

DescribeExcpetionCountRequest::DescribeExcpetionCountRequest()
    : RpcServiceRequest("ddosbgp", "2018-07-20", "DescribeExcpetionCount") {
  setMethod(HttpRequest::Method::Post);
}

DescribeExcpetionCountRequest::~DescribeExcpetionCountRequest() {}

std::string DescribeExcpetionCountRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeExcpetionCountRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeExcpetionCountRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeExcpetionCountRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeExcpetionCountRequest::getRegionId() const {
  return regionId_;
}

void DescribeExcpetionCountRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

