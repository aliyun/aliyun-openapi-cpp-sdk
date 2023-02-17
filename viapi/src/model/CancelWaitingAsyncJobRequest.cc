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

#include <alibabacloud/viapi/model/CancelWaitingAsyncJobRequest.h>

using AlibabaCloud::Viapi::Model::CancelWaitingAsyncJobRequest;

CancelWaitingAsyncJobRequest::CancelWaitingAsyncJobRequest()
    : RpcServiceRequest("viapi", "2023-01-17", "CancelWaitingAsyncJob") {
  setMethod(HttpRequest::Method::Post);
}

CancelWaitingAsyncJobRequest::~CancelWaitingAsyncJobRequest() {}

std::string CancelWaitingAsyncJobRequest::getJobId() const {
  return jobId_;
}

void CancelWaitingAsyncJobRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setBodyParameter(std::string("JobId"), jobId);
}

bool CancelWaitingAsyncJobRequest::getAsync() const {
  return async_;
}

void CancelWaitingAsyncJobRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

