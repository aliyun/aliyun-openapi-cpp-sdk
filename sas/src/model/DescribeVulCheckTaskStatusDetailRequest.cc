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

#include <alibabacloud/sas/model/DescribeVulCheckTaskStatusDetailRequest.h>

using AlibabaCloud::Sas::Model::DescribeVulCheckTaskStatusDetailRequest;

DescribeVulCheckTaskStatusDetailRequest::DescribeVulCheckTaskStatusDetailRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeVulCheckTaskStatusDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVulCheckTaskStatusDetailRequest::~DescribeVulCheckTaskStatusDetailRequest() {}

std::vector<std::string> DescribeVulCheckTaskStatusDetailRequest::getTaskIds() const {
  return taskIds_;
}

void DescribeVulCheckTaskStatusDetailRequest::setTaskIds(const std::vector<std::string> &taskIds) {
  taskIds_ = taskIds;
}

std::string DescribeVulCheckTaskStatusDetailRequest::getUuid() const {
  return uuid_;
}

void DescribeVulCheckTaskStatusDetailRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string DescribeVulCheckTaskStatusDetailRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeVulCheckTaskStatusDetailRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<std::string> DescribeVulCheckTaskStatusDetailRequest::getTypes() const {
  return types_;
}

void DescribeVulCheckTaskStatusDetailRequest::setTypes(const std::vector<std::string> &types) {
  types_ = types;
}

