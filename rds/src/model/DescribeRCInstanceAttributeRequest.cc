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

#include <alibabacloud/rds/model/DescribeRCInstanceAttributeRequest.h>

using AlibabaCloud::Rds::Model::DescribeRCInstanceAttributeRequest;

DescribeRCInstanceAttributeRequest::DescribeRCInstanceAttributeRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeRCInstanceAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRCInstanceAttributeRequest::~DescribeRCInstanceAttributeRequest() {}

std::string DescribeRCInstanceAttributeRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void DescribeRCInstanceAttributeRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

std::string DescribeRCInstanceAttributeRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeRCInstanceAttributeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeRCInstanceAttributeRequest::getRegionId() const {
  return regionId_;
}

void DescribeRCInstanceAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeRCInstanceAttributeRequest::getMaxDisksResults() const {
  return maxDisksResults_;
}

void DescribeRCInstanceAttributeRequest::setMaxDisksResults(long maxDisksResults) {
  maxDisksResults_ = maxDisksResults;
  setParameter(std::string("MaxDisksResults"), std::to_string(maxDisksResults));
}

