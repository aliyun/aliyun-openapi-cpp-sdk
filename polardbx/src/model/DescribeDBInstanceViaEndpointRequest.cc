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

#include <alibabacloud/polardbx/model/DescribeDBInstanceViaEndpointRequest.h>

using AlibabaCloud::Polardbx::Model::DescribeDBInstanceViaEndpointRequest;

DescribeDBInstanceViaEndpointRequest::DescribeDBInstanceViaEndpointRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "DescribeDBInstanceViaEndpoint") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceViaEndpointRequest::~DescribeDBInstanceViaEndpointRequest() {}

std::string DescribeDBInstanceViaEndpointRequest::getEndpoint() const {
  return endpoint_;
}

void DescribeDBInstanceViaEndpointRequest::setEndpoint(const std::string &endpoint) {
  endpoint_ = endpoint;
  setParameter(std::string("Endpoint"), endpoint);
}

std::string DescribeDBInstanceViaEndpointRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBInstanceViaEndpointRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

