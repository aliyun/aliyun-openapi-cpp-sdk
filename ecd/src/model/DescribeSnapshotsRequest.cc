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

#include <alibabacloud/ecd/model/DescribeSnapshotsRequest.h>

using AlibabaCloud::Ecd::Model::DescribeSnapshotsRequest;

DescribeSnapshotsRequest::DescribeSnapshotsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeSnapshots") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSnapshotsRequest::~DescribeSnapshotsRequest() {}

std::string DescribeSnapshotsRequest::getSnapshotId() const {
  return snapshotId_;
}

void DescribeSnapshotsRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

std::string DescribeSnapshotsRequest::getSnapshotName() const {
  return snapshotName_;
}

void DescribeSnapshotsRequest::setSnapshotName(const std::string &snapshotName) {
  snapshotName_ = snapshotName;
  setParameter(std::string("SnapshotName"), snapshotName);
}

std::string DescribeSnapshotsRequest::getStartTime() const {
  return startTime_;
}

void DescribeSnapshotsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeSnapshotsRequest::getRegionId() const {
  return regionId_;
}

void DescribeSnapshotsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSnapshotsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeSnapshotsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeSnapshotsRequest::getDesktopId() const {
  return desktopId_;
}

void DescribeSnapshotsRequest::setDesktopId(const std::string &desktopId) {
  desktopId_ = desktopId;
  setParameter(std::string("DesktopId"), desktopId);
}

std::string DescribeSnapshotsRequest::getDesktopName() const {
  return desktopName_;
}

void DescribeSnapshotsRequest::setDesktopName(const std::string &desktopName) {
  desktopName_ = desktopName;
  setParameter(std::string("DesktopName"), desktopName);
}

std::string DescribeSnapshotsRequest::getCreator() const {
  return creator_;
}

void DescribeSnapshotsRequest::setCreator(const std::string &creator) {
  creator_ = creator;
  setParameter(std::string("Creator"), creator);
}

std::string DescribeSnapshotsRequest::getSourceDiskType() const {
  return sourceDiskType_;
}

void DescribeSnapshotsRequest::setSourceDiskType(const std::string &sourceDiskType) {
  sourceDiskType_ = sourceDiskType;
  setParameter(std::string("SourceDiskType"), sourceDiskType);
}

std::string DescribeSnapshotsRequest::getEndTime() const {
  return endTime_;
}

void DescribeSnapshotsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeSnapshotsRequest::getSnapshotType() const {
  return snapshotType_;
}

void DescribeSnapshotsRequest::setSnapshotType(const std::string &snapshotType) {
  snapshotType_ = snapshotType;
  setParameter(std::string("SnapshotType"), snapshotType);
}

int DescribeSnapshotsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeSnapshotsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

