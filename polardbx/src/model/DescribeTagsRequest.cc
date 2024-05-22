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

#include <alibabacloud/polardbx/model/DescribeTagsRequest.h>

using AlibabaCloud::Polardbx::Model::DescribeTagsRequest;

DescribeTagsRequest::DescribeTagsRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "DescribeTags") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTagsRequest::~DescribeTagsRequest() {}

std::string DescribeTagsRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void DescribeTagsRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

std::string DescribeTagsRequest::getRegionId() const {
  return regionId_;
}

void DescribeTagsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeTagsRequest::getTagKey() const {
  return tagKey_;
}

void DescribeTagsRequest::setTagKey(const std::string &tagKey) {
  tagKey_ = tagKey;
  setParameter(std::string("TagKey"), tagKey);
}

