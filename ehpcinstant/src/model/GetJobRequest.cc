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

#include <alibabacloud/ehpcinstant/model/GetJobRequest.h>

using AlibabaCloud::EhpcInstant::Model::GetJobRequest;

GetJobRequest::GetJobRequest()
    : RpcServiceRequest("ehpcinstant", "2023-07-01", "GetJob") {
  setMethod(HttpRequest::Method::Post);
}

GetJobRequest::~GetJobRequest() {}

std::string GetJobRequest::getJobId() const {
  return jobId_;
}

void GetJobRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

