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

#include <alibabacloud/viapi/model/GetAsyncJobResultRequest.h>

using AlibabaCloud::Viapi::Model::GetAsyncJobResultRequest;

GetAsyncJobResultRequest::GetAsyncJobResultRequest()
    : RpcServiceRequest("viapi", "2023-01-17", "GetAsyncJobResult") {
  setMethod(HttpRequest::Method::Post);
}

GetAsyncJobResultRequest::~GetAsyncJobResultRequest() {}

std::string GetAsyncJobResultRequest::getJobId() const {
  return jobId_;
}

void GetAsyncJobResultRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setBodyParameter(std::string("JobId"), jobId);
}

bool GetAsyncJobResultRequest::getAsync() const {
  return async_;
}

void GetAsyncJobResultRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

