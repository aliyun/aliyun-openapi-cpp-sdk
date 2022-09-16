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

#include <alibabacloud/ecd/model/DescribeSecurityEventOperationStatusRequest.h>

using AlibabaCloud::Ecd::Model::DescribeSecurityEventOperationStatusRequest;

DescribeSecurityEventOperationStatusRequest::DescribeSecurityEventOperationStatusRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeSecurityEventOperationStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSecurityEventOperationStatusRequest::~DescribeSecurityEventOperationStatusRequest() {}

std::string DescribeSecurityEventOperationStatusRequest::getRegionId() const {
  return regionId_;
}

void DescribeSecurityEventOperationStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> DescribeSecurityEventOperationStatusRequest::getSecurityEventId() const {
  return securityEventId_;
}

void DescribeSecurityEventOperationStatusRequest::setSecurityEventId(const std::vector<std::string> &securityEventId) {
  securityEventId_ = securityEventId;
}

long DescribeSecurityEventOperationStatusRequest::getTaskId() const {
  return taskId_;
}

void DescribeSecurityEventOperationStatusRequest::setTaskId(long taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), std::to_string(taskId));
}

