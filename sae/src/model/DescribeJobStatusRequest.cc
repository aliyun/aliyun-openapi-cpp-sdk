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

#include <alibabacloud/sae/model/DescribeJobStatusRequest.h>

using AlibabaCloud::Sae::Model::DescribeJobStatusRequest;

DescribeJobStatusRequest::DescribeJobStatusRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/job/describeJobStatus"};
  setMethod(HttpRequest::Method::Get);
}

DescribeJobStatusRequest::~DescribeJobStatusRequest() {}

std::string DescribeJobStatusRequest::getJobId() const {
  return jobId_;
}

void DescribeJobStatusRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string DescribeJobStatusRequest::getAppId() const {
  return appId_;
}

void DescribeJobStatusRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

