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

#include <alibabacloud/sas/model/DescribeSecurityEventOperationStatusRequest.h>

using AlibabaCloud::Sas::Model::DescribeSecurityEventOperationStatusRequest;

DescribeSecurityEventOperationStatusRequest::DescribeSecurityEventOperationStatusRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeSecurityEventOperationStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSecurityEventOperationStatusRequest::~DescribeSecurityEventOperationStatusRequest() {}

long DescribeSecurityEventOperationStatusRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSecurityEventOperationStatusRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<std::string> DescribeSecurityEventOperationStatusRequest::getSecurityEventIds() const {
  return securityEventIds_;
}

void DescribeSecurityEventOperationStatusRequest::setSecurityEventIds(const std::vector<std::string> &securityEventIds) {
  securityEventIds_ = securityEventIds;
}

std::string DescribeSecurityEventOperationStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeSecurityEventOperationStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long DescribeSecurityEventOperationStatusRequest::getTaskId() const {
  return taskId_;
}

void DescribeSecurityEventOperationStatusRequest::setTaskId(long taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), std::to_string(taskId));
}

