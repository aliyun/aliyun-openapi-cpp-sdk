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

#include <alibabacloud/ecd/model/DescribeDesktopsRequest.h>

using AlibabaCloud::Ecd::Model::DescribeDesktopsRequest;

DescribeDesktopsRequest::DescribeDesktopsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeDesktops") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDesktopsRequest::~DescribeDesktopsRequest() {}

std::string DescribeDesktopsRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void DescribeDesktopsRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::string DescribeDesktopsRequest::getSnapshotPolicyId() const {
  return snapshotPolicyId_;
}

void DescribeDesktopsRequest::setSnapshotPolicyId(const std::string &snapshotPolicyId) {
  snapshotPolicyId_ = snapshotPolicyId;
  setParameter(std::string("SnapshotPolicyId"), snapshotPolicyId);
}

std::vector<std::string> DescribeDesktopsRequest::getImageId() const {
  return imageId_;
}

void DescribeDesktopsRequest::setImageId(const std::vector<std::string> &imageId) {
  imageId_ = imageId;
}

std::string DescribeDesktopsRequest::getDesktopStatus() const {
  return desktopStatus_;
}

void DescribeDesktopsRequest::setDesktopStatus(const std::string &desktopStatus) {
  desktopStatus_ = desktopStatus;
  setParameter(std::string("DesktopStatus"), desktopStatus);
}

std::string DescribeDesktopsRequest::getDesktopGroupId() const {
  return desktopGroupId_;
}

void DescribeDesktopsRequest::setDesktopGroupId(const std::string &desktopGroupId) {
  desktopGroupId_ = desktopGroupId;
  setParameter(std::string("DesktopGroupId"), desktopGroupId);
}

std::string DescribeDesktopsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDesktopsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDesktopsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeDesktopsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

bool DescribeDesktopsRequest::getOnlyDesktopGroup() const {
  return onlyDesktopGroup_;
}

void DescribeDesktopsRequest::setOnlyDesktopGroup(bool onlyDesktopGroup) {
  onlyDesktopGroup_ = onlyDesktopGroup;
  setParameter(std::string("OnlyDesktopGroup"), onlyDesktopGroup ? "true" : "false");
}

bool DescribeDesktopsRequest::getQueryFotaUpdate() const {
  return queryFotaUpdate_;
}

void DescribeDesktopsRequest::setQueryFotaUpdate(bool queryFotaUpdate) {
  queryFotaUpdate_ = queryFotaUpdate;
  setParameter(std::string("QueryFotaUpdate"), queryFotaUpdate ? "true" : "false");
}

std::string DescribeDesktopsRequest::getDirectoryId() const {
  return directoryId_;
}

void DescribeDesktopsRequest::setDirectoryId(const std::string &directoryId) {
  directoryId_ = directoryId;
  setParameter(std::string("DirectoryId"), directoryId);
}

std::vector<std::string> DescribeDesktopsRequest::getEndUserId() const {
  return endUserId_;
}

void DescribeDesktopsRequest::setEndUserId(const std::vector<std::string> &endUserId) {
  endUserId_ = endUserId;
}

std::vector<std::string> DescribeDesktopsRequest::getDesktopId() const {
  return desktopId_;
}

void DescribeDesktopsRequest::setDesktopId(const std::vector<std::string> &desktopId) {
  desktopId_ = desktopId;
}

std::vector<DescribeDesktopsRequest::Tag> DescribeDesktopsRequest::getTag() const {
  return tag_;
}

void DescribeDesktopsRequest::setTag(const std::vector<DescribeDesktopsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeDesktopsRequest::getDesktopType() const {
  return desktopType_;
}

void DescribeDesktopsRequest::setDesktopType(const std::string &desktopType) {
  desktopType_ = desktopType;
  setParameter(std::string("DesktopType"), desktopType);
}

std::string DescribeDesktopsRequest::getDesktopName() const {
  return desktopName_;
}

void DescribeDesktopsRequest::setDesktopName(const std::string &desktopName) {
  desktopName_ = desktopName;
  setParameter(std::string("DesktopName"), desktopName);
}

std::string DescribeDesktopsRequest::getGroupId() const {
  return groupId_;
}

void DescribeDesktopsRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeDesktopsRequest::getOfficeSiteName() const {
  return officeSiteName_;
}

void DescribeDesktopsRequest::setOfficeSiteName(const std::string &officeSiteName) {
  officeSiteName_ = officeSiteName;
  setParameter(std::string("OfficeSiteName"), officeSiteName);
}

std::vector<std::string> DescribeDesktopsRequest::getExcludedEndUserId() const {
  return excludedEndUserId_;
}

void DescribeDesktopsRequest::setExcludedEndUserId(const std::vector<std::string> &excludedEndUserId) {
  excludedEndUserId_ = excludedEndUserId;
}

bool DescribeDesktopsRequest::getFilterDesktopGroup() const {
  return filterDesktopGroup_;
}

void DescribeDesktopsRequest::setFilterDesktopGroup(bool filterDesktopGroup) {
  filterDesktopGroup_ = filterDesktopGroup;
  setParameter(std::string("FilterDesktopGroup"), filterDesktopGroup ? "true" : "false");
}

std::string DescribeDesktopsRequest::getManagementFlag() const {
  return managementFlag_;
}

void DescribeDesktopsRequest::setManagementFlag(const std::string &managementFlag) {
  managementFlag_ = managementFlag;
  setParameter(std::string("ManagementFlag"), managementFlag);
}

std::string DescribeDesktopsRequest::getExpiredTime() const {
  return expiredTime_;
}

void DescribeDesktopsRequest::setExpiredTime(const std::string &expiredTime) {
  expiredTime_ = expiredTime;
  setParameter(std::string("ExpiredTime"), expiredTime);
}

int DescribeDesktopsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeDesktopsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::vector<std::string> DescribeDesktopsRequest::getOsTypes() const {
  return osTypes_;
}

void DescribeDesktopsRequest::setOsTypes(const std::vector<std::string> &osTypes) {
  osTypes_ = osTypes;
}

std::string DescribeDesktopsRequest::getProtocolType() const {
  return protocolType_;
}

void DescribeDesktopsRequest::setProtocolType(const std::string &protocolType) {
  protocolType_ = protocolType;
  setParameter(std::string("ProtocolType"), protocolType);
}

std::string DescribeDesktopsRequest::getChargeType() const {
  return chargeType_;
}

void DescribeDesktopsRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

std::string DescribeDesktopsRequest::getPolicyGroupId() const {
  return policyGroupId_;
}

void DescribeDesktopsRequest::setPolicyGroupId(const std::string &policyGroupId) {
  policyGroupId_ = policyGroupId;
  setParameter(std::string("PolicyGroupId"), policyGroupId);
}

std::string DescribeDesktopsRequest::getUserName() const {
  return userName_;
}

void DescribeDesktopsRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

