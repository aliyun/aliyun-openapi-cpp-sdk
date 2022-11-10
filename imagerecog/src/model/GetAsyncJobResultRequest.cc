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

#include <alibabacloud/imagerecog/model/GetAsyncJobResultRequest.h>

using AlibabaCloud::Imagerecog::Model::GetAsyncJobResultRequest;

GetAsyncJobResultRequest::GetAsyncJobResultRequest()
    : RpcServiceRequest("imagerecog", "2019-09-30", "GetAsyncJobResult") {
  setMethod(HttpRequest::Method::Get);
}

GetAsyncJobResultRequest::~GetAsyncJobResultRequest() {}

bool GetAsyncJobResultRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void GetAsyncJobResultRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string GetAsyncJobResultRequest::getJobId() const {
  return jobId_;
}

void GetAsyncJobResultRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string GetAsyncJobResultRequest::getOssFile() const {
  return ossFile_;
}

void GetAsyncJobResultRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string GetAsyncJobResultRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void GetAsyncJobResultRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string GetAsyncJobResultRequest::getAsync() const {
  return async_;
}

void GetAsyncJobResultRequest::setAsync(const std::string &async) {
  async_ = async;
  setParameter(std::string("Async"), async);
}

