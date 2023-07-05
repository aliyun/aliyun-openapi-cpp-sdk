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

#include <alibabacloud/privatelink/model/DescribeZonesRequest.h>

using AlibabaCloud::Privatelink::Model::DescribeZonesRequest;

DescribeZonesRequest::DescribeZonesRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "DescribeZones") {
  setMethod(HttpRequest::Method::Post);
}

DescribeZonesRequest::~DescribeZonesRequest() {}

std::string DescribeZonesRequest::getRegionId() const {
  return regionId_;
}

void DescribeZonesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeZonesRequest::getServiceResourceType() const {
  return serviceResourceType_;
}

void DescribeZonesRequest::setServiceResourceType(const std::string &serviceResourceType) {
  serviceResourceType_ = serviceResourceType;
  setParameter(std::string("ServiceResourceType"), serviceResourceType);
}

