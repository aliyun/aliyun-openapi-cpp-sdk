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

#include <alibabacloud/gpdb/model/DescribeAvailableResourcesRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeAvailableResourcesRequest;

DescribeAvailableResourcesRequest::DescribeAvailableResourcesRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeAvailableResources") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAvailableResourcesRequest::~DescribeAvailableResourcesRequest() {}

std::string DescribeAvailableResourcesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeAvailableResourcesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeAvailableResourcesRequest::getZoneId() const {
  return zoneId_;
}

void DescribeAvailableResourcesRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DescribeAvailableResourcesRequest::getChargeType() const {
  return chargeType_;
}

void DescribeAvailableResourcesRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

std::string DescribeAvailableResourcesRequest::getRegion() const {
  return region_;
}

void DescribeAvailableResourcesRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

