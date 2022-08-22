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

#include <alibabacloud/dbfs/model/DescribeDbfsSpecificationsRequest.h>

using AlibabaCloud::DBFS::Model::DescribeDbfsSpecificationsRequest;

DescribeDbfsSpecificationsRequest::DescribeDbfsSpecificationsRequest()
    : RpcServiceRequest("dbfs", "2020-04-18", "DescribeDbfsSpecifications") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDbfsSpecificationsRequest::~DescribeDbfsSpecificationsRequest() {}

std::string DescribeDbfsSpecificationsRequest::getEcsInstanceType() const {
  return ecsInstanceType_;
}

void DescribeDbfsSpecificationsRequest::setEcsInstanceType(const std::string &ecsInstanceType) {
  ecsInstanceType_ = ecsInstanceType;
  setParameter(std::string("EcsInstanceType"), ecsInstanceType);
}

std::string DescribeDbfsSpecificationsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDbfsSpecificationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDbfsSpecificationsRequest::getCategory() const {
  return category_;
}

void DescribeDbfsSpecificationsRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

