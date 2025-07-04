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

#include <alibabacloud/rds/model/DescribeRCSnapshotsRequest.h>

using AlibabaCloud::Rds::Model::DescribeRCSnapshotsRequest;

DescribeRCSnapshotsRequest::DescribeRCSnapshotsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeRCSnapshots") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRCSnapshotsRequest::~DescribeRCSnapshotsRequest() {}

std::string DescribeRCSnapshotsRequest::getSnapshotIds() const {
  return snapshotIds_;
}

void DescribeRCSnapshotsRequest::setSnapshotIds(const std::string &snapshotIds) {
  snapshotIds_ = snapshotIds;
  setParameter(std::string("SnapshotIds"), snapshotIds);
}

long DescribeRCSnapshotsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRCSnapshotsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeRCSnapshotsRequest::getRegionId() const {
  return regionId_;
}

void DescribeRCSnapshotsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeRCSnapshotsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRCSnapshotsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeRCSnapshotsRequest::getDiskId() const {
  return diskId_;
}

void DescribeRCSnapshotsRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

std::vector<DescribeRCSnapshotsRequest::Tag> DescribeRCSnapshotsRequest::getTag() const {
  return tag_;
}

void DescribeRCSnapshotsRequest::setTag(const std::vector<DescribeRCSnapshotsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

