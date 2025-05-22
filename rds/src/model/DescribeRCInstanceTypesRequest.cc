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

#include <alibabacloud/rds/model/DescribeRCInstanceTypesRequest.h>

using AlibabaCloud::Rds::Model::DescribeRCInstanceTypesRequest;

DescribeRCInstanceTypesRequest::DescribeRCInstanceTypesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeRCInstanceTypes") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRCInstanceTypesRequest::~DescribeRCInstanceTypesRequest() {}

std::string DescribeRCInstanceTypesRequest::getInstanceTypeFamily() const {
  return instanceTypeFamily_;
}

void DescribeRCInstanceTypesRequest::setInstanceTypeFamily(const std::string &instanceTypeFamily) {
  instanceTypeFamily_ = instanceTypeFamily;
  setParameter(std::string("InstanceTypeFamily"), instanceTypeFamily);
}

std::string DescribeRCInstanceTypesRequest::getCommodityCode() const {
  return commodityCode_;
}

void DescribeRCInstanceTypesRequest::setCommodityCode(const std::string &commodityCode) {
  commodityCode_ = commodityCode;
  setParameter(std::string("CommodityCode"), commodityCode);
}

std::string DescribeRCInstanceTypesRequest::getRegionId() const {
  return regionId_;
}

void DescribeRCInstanceTypesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeRCInstanceTypesRequest::getEngine() const {
  return engine_;
}

void DescribeRCInstanceTypesRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::vector<DescribeRCInstanceTypesRequest::std::string> DescribeRCInstanceTypesRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeRCInstanceTypesRequest::setInstanceType(const std::vector<DescribeRCInstanceTypesRequest::std::string> &instanceType) {
  instanceType_ = instanceType;
  for(int dep1 = 0; dep1 != instanceType.size(); dep1++) {
    setParameter(std::string("InstanceType") + "." + std::to_string(dep1 + 1), instanceType[dep1]);
  }
}

