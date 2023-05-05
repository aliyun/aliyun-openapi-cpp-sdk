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

#include <alibabacloud/ecd/model/DescribeDesktopGroupsRequest.h>

using AlibabaCloud::Ecd::Model::DescribeDesktopGroupsRequest;

DescribeDesktopGroupsRequest::DescribeDesktopGroupsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeDesktopGroups") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDesktopGroupsRequest::~DescribeDesktopGroupsRequest() {}

std::string DescribeDesktopGroupsRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void DescribeDesktopGroupsRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::vector<std::string> DescribeDesktopGroupsRequest::getEndUserIds() const {
  return endUserIds_;
}

void DescribeDesktopGroupsRequest::setEndUserIds(const std::vector<std::string> &endUserIds) {
  endUserIds_ = endUserIds;
}

std::vector<std::string> DescribeDesktopGroupsRequest::getImageId() const {
  return imageId_;
}

void DescribeDesktopGroupsRequest::setImageId(const std::vector<std::string> &imageId) {
  imageId_ = imageId;
}

std::vector<std::string> DescribeDesktopGroupsRequest::getBundleId() const {
  return bundleId_;
}

void DescribeDesktopGroupsRequest::setBundleId(const std::vector<std::string> &bundleId) {
  bundleId_ = bundleId;
}

std::string DescribeDesktopGroupsRequest::getDesktopGroupName() const {
  return desktopGroupName_;
}

void DescribeDesktopGroupsRequest::setDesktopGroupName(const std::string &desktopGroupName) {
  desktopGroupName_ = desktopGroupName;
  setParameter(std::string("DesktopGroupName"), desktopGroupName);
}

std::string DescribeDesktopGroupsRequest::getDesktopGroupId() const {
  return desktopGroupId_;
}

void DescribeDesktopGroupsRequest::setDesktopGroupId(const std::string &desktopGroupId) {
  desktopGroupId_ = desktopGroupId;
  setParameter(std::string("DesktopGroupId"), desktopGroupId);
}

std::string DescribeDesktopGroupsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDesktopGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDesktopGroupsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeDesktopGroupsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int DescribeDesktopGroupsRequest::getPeriod() const {
  return period_;
}

void DescribeDesktopGroupsRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

long DescribeDesktopGroupsRequest::getOwnType() const {
  return ownType_;
}

void DescribeDesktopGroupsRequest::setOwnType(long ownType) {
  ownType_ = ownType;
  setParameter(std::string("OwnType"), std::to_string(ownType));
}

std::vector<std::string> DescribeDesktopGroupsRequest::getExcludedEndUserIds() const {
  return excludedEndUserIds_;
}

void DescribeDesktopGroupsRequest::setExcludedEndUserIds(const std::vector<std::string> &excludedEndUserIds) {
  excludedEndUserIds_ = excludedEndUserIds;
}

std::string DescribeDesktopGroupsRequest::getPeriodUnit() const {
  return periodUnit_;
}

void DescribeDesktopGroupsRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

int DescribeDesktopGroupsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeDesktopGroupsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeDesktopGroupsRequest::getProtocolType() const {
  return protocolType_;
}

void DescribeDesktopGroupsRequest::setProtocolType(const std::string &protocolType) {
  protocolType_ = protocolType;
  setParameter(std::string("ProtocolType"), protocolType);
}

std::string DescribeDesktopGroupsRequest::getPolicyGroupId() const {
  return policyGroupId_;
}

void DescribeDesktopGroupsRequest::setPolicyGroupId(const std::string &policyGroupId) {
  policyGroupId_ = policyGroupId;
  setParameter(std::string("PolicyGroupId"), policyGroupId);
}

int DescribeDesktopGroupsRequest::getStatus() const {
  return status_;
}

void DescribeDesktopGroupsRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

