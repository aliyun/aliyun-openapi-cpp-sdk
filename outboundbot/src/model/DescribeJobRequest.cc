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

#include <alibabacloud/outboundbot/model/DescribeJobRequest.h>

using AlibabaCloud::OutboundBot::Model::DescribeJobRequest;

DescribeJobRequest::DescribeJobRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "DescribeJob") {
  setMethod(HttpRequest::Method::Post);
}

DescribeJobRequest::~DescribeJobRequest() {}

std::string DescribeJobRequest::getJobId() const {
  return jobId_;
}

void DescribeJobRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string DescribeJobRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeJobRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

bool DescribeJobRequest::getWithScript() const {
  return withScript_;
}

void DescribeJobRequest::setWithScript(bool withScript) {
  withScript_ = withScript;
  setParameter(std::string("WithScript"), withScript ? "true" : "false");
}

