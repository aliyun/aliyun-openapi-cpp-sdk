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

#include <alibabacloud/apds/model/DescribeOssStsRequest.h>

using AlibabaCloud::Apds::Model::DescribeOssStsRequest;

DescribeOssStsRequest::DescribeOssStsRequest()
    : RoaServiceRequest("apds", "2022-03-31") {
  setResourcePath("/okss-services/file-job/sts"};
  setMethod(HttpRequest::Method::Post);
}

DescribeOssStsRequest::~DescribeOssStsRequest() {}

string DescribeOssStsRequest::getCloudType() const {
  return cloudType_;
}

void DescribeOssStsRequest::setCloudType(string cloudType) {
  cloudType_ = cloudType;
  setParameter(std::string("cloudType"), std::to_string(cloudType));
}

string DescribeOssStsRequest::getAk() const {
  return ak_;
}

void DescribeOssStsRequest::setAk(string ak) {
  ak_ = ak;
  setParameter(std::string("ak"), std::to_string(ak));
}

string DescribeOssStsRequest::getRegionId() const {
  return regionId_;
}

void DescribeOssStsRequest::setRegionId(string regionId) {
  regionId_ = regionId;
  setParameter(std::string("regionId"), std::to_string(regionId));
}

string DescribeOssStsRequest::getSk() const {
  return sk_;
}

void DescribeOssStsRequest::setSk(string sk) {
  sk_ = sk;
  setParameter(std::string("sk"), std::to_string(sk));
}

string DescribeOssStsRequest::getTenantId() const {
  return tenantId_;
}

void DescribeOssStsRequest::setTenantId(string tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("tenantId"), std::to_string(tenantId));
}

string DescribeOssStsRequest::getRegion() const {
  return region_;
}

void DescribeOssStsRequest::setRegion(string region) {
  region_ = region;
  setParameter(std::string("region"), std::to_string(region));
}

