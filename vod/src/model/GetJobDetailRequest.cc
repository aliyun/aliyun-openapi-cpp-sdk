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

#include <alibabacloud/vod/model/GetJobDetailRequest.h>

using AlibabaCloud::Vod::Model::GetJobDetailRequest;

GetJobDetailRequest::GetJobDetailRequest()
    : RpcServiceRequest("vod", "2017-03-21", "GetJobDetail") {
  setMethod(HttpRequest::Method::Post);
}

GetJobDetailRequest::~GetJobDetailRequest() {}

std::string GetJobDetailRequest::getJobType() const {
  return jobType_;
}

void GetJobDetailRequest::setJobType(const std::string &jobType) {
  jobType_ = jobType;
  setParameter(std::string("JobType"), jobType);
}

std::string GetJobDetailRequest::getJobId() const {
  return jobId_;
}

void GetJobDetailRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

