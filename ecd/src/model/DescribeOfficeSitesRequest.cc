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

#include <alibabacloud/ecd/model/DescribeOfficeSitesRequest.h>

using AlibabaCloud::Ecd::Model::DescribeOfficeSitesRequest;

DescribeOfficeSitesRequest::DescribeOfficeSitesRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeOfficeSites") {
  setMethod(HttpRequest::Method::Post);
}

DescribeOfficeSitesRequest::~DescribeOfficeSitesRequest() {}

std::vector<std::string> DescribeOfficeSitesRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void DescribeOfficeSitesRequest::setOfficeSiteId(const std::vector<std::string> &officeSiteId) {
  officeSiteId_ = officeSiteId;
}

std::string DescribeOfficeSitesRequest::getVpcType() const {
  return vpcType_;
}

void DescribeOfficeSitesRequest::setVpcType(const std::string &vpcType) {
  vpcType_ = vpcType;
  setParameter(std::string("VpcType"), vpcType);
}

bool DescribeOfficeSitesRequest::getEnableInternetAccess() const {
  return enableInternetAccess_;
}

void DescribeOfficeSitesRequest::setEnableInternetAccess(bool enableInternetAccess) {
  enableInternetAccess_ = enableInternetAccess;
  setParameter(std::string("EnableInternetAccess"), enableInternetAccess ? "true" : "false");
}

bool DescribeOfficeSitesRequest::getVpcNotNone() const {
  return vpcNotNone_;
}

void DescribeOfficeSitesRequest::setVpcNotNone(bool vpcNotNone) {
  vpcNotNone_ = vpcNotNone;
  setParameter(std::string("VpcNotNone"), vpcNotNone ? "true" : "false");
}

std::string DescribeOfficeSitesRequest::getRegionId() const {
  return regionId_;
}

void DescribeOfficeSitesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeOfficeSitesRequest::getOfficeSiteType() const {
  return officeSiteType_;
}

void DescribeOfficeSitesRequest::setOfficeSiteType(const std::string &officeSiteType) {
  officeSiteType_ = officeSiteType;
  setParameter(std::string("OfficeSiteType"), officeSiteType);
}

std::string DescribeOfficeSitesRequest::getNextToken() const {
  return nextToken_;
}

void DescribeOfficeSitesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int DescribeOfficeSitesRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeOfficeSitesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeOfficeSitesRequest::getStatus() const {
  return status_;
}

void DescribeOfficeSitesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

