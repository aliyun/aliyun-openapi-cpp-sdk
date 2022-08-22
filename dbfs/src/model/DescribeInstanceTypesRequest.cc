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

#include <alibabacloud/dbfs/model/DescribeInstanceTypesRequest.h>

using AlibabaCloud::DBFS::Model::DescribeInstanceTypesRequest;

DescribeInstanceTypesRequest::DescribeInstanceTypesRequest()
    : RpcServiceRequest("dbfs", "2020-04-18", "DescribeInstanceTypes") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceTypesRequest::~DescribeInstanceTypesRequest() {}

std::string DescribeInstanceTypesRequest::getRegionId() const {
  return regionId_;
}

void DescribeInstanceTypesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

