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

#include <alibabacloud/ecd/model/DescribeNetworkPackagesRequest.h>

using AlibabaCloud::Ecd::Model::DescribeNetworkPackagesRequest;

DescribeNetworkPackagesRequest::DescribeNetworkPackagesRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeNetworkPackages") {
  setMethod(HttpRequest::Method::Post);
}

DescribeNetworkPackagesRequest::~DescribeNetworkPackagesRequest() {}

std::vector<std::string> DescribeNetworkPackagesRequest::getNetworkPackageId() const {
  return networkPackageId_;
}

void DescribeNetworkPackagesRequest::setNetworkPackageId(const std::vector<std::string> &networkPackageId) {
  networkPackageId_ = networkPackageId;
}

std::string DescribeNetworkPackagesRequest::getRegionId() const {
  return regionId_;
}

void DescribeNetworkPackagesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeNetworkPackagesRequest::getNextToken() const {
  return nextToken_;
}

void DescribeNetworkPackagesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeNetworkPackagesRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void DescribeNetworkPackagesRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

int DescribeNetworkPackagesRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeNetworkPackagesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

