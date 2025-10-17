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

#include <alibabacloud/polardb/model/DescribeZonesRequest.h>

using AlibabaCloud::Polardb::Model::DescribeZonesRequest;

DescribeZonesRequest::DescribeZonesRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeZones") {
  setMethod(HttpRequest::Method::Post);
}

DescribeZonesRequest::~DescribeZonesRequest() {}

std::string DescribeZonesRequest::getProductCode() const {
  return productCode_;
}

void DescribeZonesRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

long DescribeZonesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeZonesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeZonesRequest::getEngine() const {
  return engine_;
}

void DescribeZonesRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string DescribeZonesRequest::getRegionId() const {
  return regionId_;
}

void DescribeZonesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeZonesRequest::getExtra() const {
  return extra_;
}

void DescribeZonesRequest::setExtra(const std::string &extra) {
  extra_ = extra;
  setParameter(std::string("Extra"), extra);
}

