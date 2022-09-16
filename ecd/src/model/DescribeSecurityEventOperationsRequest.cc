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

#include <alibabacloud/ecd/model/DescribeSecurityEventOperationsRequest.h>

using AlibabaCloud::Ecd::Model::DescribeSecurityEventOperationsRequest;

DescribeSecurityEventOperationsRequest::DescribeSecurityEventOperationsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeSecurityEventOperations") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSecurityEventOperationsRequest::~DescribeSecurityEventOperationsRequest() {}

std::string DescribeSecurityEventOperationsRequest::getRegionId() const {
  return regionId_;
}

void DescribeSecurityEventOperationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeSecurityEventOperationsRequest::getSecurityEventId() const {
  return securityEventId_;
}

void DescribeSecurityEventOperationsRequest::setSecurityEventId(long securityEventId) {
  securityEventId_ = securityEventId;
  setParameter(std::string("SecurityEventId"), std::to_string(securityEventId));
}

