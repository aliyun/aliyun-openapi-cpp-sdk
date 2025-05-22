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

#include <alibabacloud/rds/model/DescribeRCDisksRequest.h>

using AlibabaCloud::Rds::Model::DescribeRCDisksRequest;

DescribeRCDisksRequest::DescribeRCDisksRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeRCDisks") {
  setMethod(HttpRequest::Method::Get);
}

DescribeRCDisksRequest::~DescribeRCDisksRequest() {}

long DescribeRCDisksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRCDisksRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeRCDisksRequest::getRegionId() const {
  return regionId_;
}

void DescribeRCDisksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeRCDisksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRCDisksRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeRCDisksRequest::getDiskIds() const {
  return diskIds_;
}

void DescribeRCDisksRequest::setDiskIds(const std::string &diskIds) {
  diskIds_ = diskIds;
  setParameter(std::string("DiskIds"), diskIds);
}

std::vector<DescribeRCDisksRequest::Tag> DescribeRCDisksRequest::getTag() const {
  return tag_;
}

void DescribeRCDisksRequest::setTag(const std::vector<DescribeRCDisksRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeRCDisksRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeRCDisksRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

