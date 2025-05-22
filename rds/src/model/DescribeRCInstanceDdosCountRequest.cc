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

#include <alibabacloud/rds/model/DescribeRCInstanceDdosCountRequest.h>

using AlibabaCloud::Rds::Model::DescribeRCInstanceDdosCountRequest;

DescribeRCInstanceDdosCountRequest::DescribeRCInstanceDdosCountRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeRCInstanceDdosCount") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRCInstanceDdosCountRequest::~DescribeRCInstanceDdosCountRequest() {}

std::string DescribeRCInstanceDdosCountRequest::getRegionId() const {
  return regionId_;
}

void DescribeRCInstanceDdosCountRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeRCInstanceDdosCountRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeRCInstanceDdosCountRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeRCInstanceDdosCountRequest::getDdosRegionId() const {
  return ddosRegionId_;
}

void DescribeRCInstanceDdosCountRequest::setDdosRegionId(const std::string &ddosRegionId) {
  ddosRegionId_ = ddosRegionId;
  setParameter(std::string("DdosRegionId"), ddosRegionId);
}

