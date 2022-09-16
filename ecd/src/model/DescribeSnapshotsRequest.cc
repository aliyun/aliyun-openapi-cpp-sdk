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

int DescribeSnapshotsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeSnapshotsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeSnapshotsRequest::getDesktopId() const {
  return desktopId_;
}

void DescribeSnapshotsRequest::setDesktopId(const std::string &desktopId) {
  desktopId_ = desktopId;
  setParameter(std::string("DesktopId"), desktopId);
}

