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

#include <alibabacloud/ehpc/model/DescribeJobRequest.h>

using AlibabaCloud::EHPC::Model::DescribeJobRequest;

DescribeJobRequest::DescribeJobRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "DescribeJob") {
  setMethod(HttpRequest::Method::Get);
}

DescribeJobRequest::~DescribeJobRequest() {}

std::string DescribeJobRequest::getClusterId() const {
  return clusterId_;
}

void DescribeJobRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DescribeJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeJobRequest::getJobId() const {
  return jobId_;
}

void DescribeJobRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

bool DescribeJobRequest::getAsync() const {
  return async_;
}

void DescribeJobRequest::setAsync(bool async) {
  async_ = async;
  setParameter(std::string("Async"), async ? "true" : "false");
}

