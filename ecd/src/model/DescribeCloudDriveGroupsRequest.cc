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

#include <alibabacloud/ecd/model/DescribeCloudDriveGroupsRequest.h>

using AlibabaCloud::Ecd::Model::DescribeCloudDriveGroupsRequest;

DescribeCloudDriveGroupsRequest::DescribeCloudDriveGroupsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeCloudDriveGroups") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCloudDriveGroupsRequest::~DescribeCloudDriveGroupsRequest() {}

std::string DescribeCloudDriveGroupsRequest::getParentGroupId() const {
  return parentGroupId_;
}

void DescribeCloudDriveGroupsRequest::setParentGroupId(const std::string &parentGroupId) {
  parentGroupId_ = parentGroupId;
  setParameter(std::string("ParentGroupId"), parentGroupId);
}

std::string DescribeCloudDriveGroupsRequest::getGroupType() const {
  return groupType_;
}

void DescribeCloudDriveGroupsRequest::setGroupType(const std::string &groupType) {
  groupType_ = groupType;
  setParameter(std::string("GroupType"), groupType);
}

std::string DescribeCloudDriveGroupsRequest::getRegionId() const {
  return regionId_;
}

void DescribeCloudDriveGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeCloudDriveGroupsRequest::getDriveType() const {
  return driveType_;
}

void DescribeCloudDriveGroupsRequest::setDriveType(const std::string &driveType) {
  driveType_ = driveType;
  setParameter(std::string("DriveType"), driveType);
}

std::string DescribeCloudDriveGroupsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeCloudDriveGroupsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeCloudDriveGroupsRequest::getDirectoryId() const {
  return directoryId_;
}

void DescribeCloudDriveGroupsRequest::setDirectoryId(const std::string &directoryId) {
  directoryId_ = directoryId;
  setParameter(std::string("DirectoryId"), directoryId);
}

std::vector<std::string> DescribeCloudDriveGroupsRequest::getGroupId() const {
  return groupId_;
}

void DescribeCloudDriveGroupsRequest::setGroupId(const std::vector<std::string> &groupId) {
  groupId_ = groupId;
}

std::string DescribeCloudDriveGroupsRequest::getDirectoryName() const {
  return directoryName_;
}

void DescribeCloudDriveGroupsRequest::setDirectoryName(const std::string &directoryName) {
  directoryName_ = directoryName;
  setParameter(std::string("DirectoryName"), directoryName);
}

std::string DescribeCloudDriveGroupsRequest::getGroupName() const {
  return groupName_;
}

void DescribeCloudDriveGroupsRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string DescribeCloudDriveGroupsRequest::getCdsId() const {
  return cdsId_;
}

void DescribeCloudDriveGroupsRequest::setCdsId(const std::string &cdsId) {
  cdsId_ = cdsId;
  setParameter(std::string("CdsId"), cdsId);
}

std::string DescribeCloudDriveGroupsRequest::getDriveStatus() const {
  return driveStatus_;
}

void DescribeCloudDriveGroupsRequest::setDriveStatus(const std::string &driveStatus) {
  driveStatus_ = driveStatus;
  setParameter(std::string("DriveStatus"), driveStatus);
}

int DescribeCloudDriveGroupsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeCloudDriveGroupsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

