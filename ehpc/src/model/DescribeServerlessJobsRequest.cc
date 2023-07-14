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

#include <alibabacloud/ehpc/model/DescribeServerlessJobsRequest.h>

using AlibabaCloud::EHPC::Model::DescribeServerlessJobsRequest;

DescribeServerlessJobsRequest::DescribeServerlessJobsRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "DescribeServerlessJobs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeServerlessJobsRequest::~DescribeServerlessJobsRequest() {}

std::string DescribeServerlessJobsRequest::getClusterId() const {
  return clusterId_;
}

void DescribeServerlessJobsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DescribeServerlessJobsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeServerlessJobsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::vector<DescribeServerlessJobsRequest::std::string> DescribeServerlessJobsRequest::getJobIds() const {
  return jobIds_;
}

void DescribeServerlessJobsRequest::setJobIds(const std::vector<DescribeServerlessJobsRequest::std::string> &jobIds) {
  jobIds_ = jobIds;
  for(int dep1 = 0; dep1 != jobIds.size(); dep1++) {
    setParameter(std::string("JobIds") + "." + std::to_string(dep1 + 1), jobIds[dep1]);
  }
}

