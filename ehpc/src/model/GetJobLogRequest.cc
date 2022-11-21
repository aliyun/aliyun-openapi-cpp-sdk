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

#include <alibabacloud/ehpc/model/GetJobLogRequest.h>

using AlibabaCloud::EHPC::Model::GetJobLogRequest;

GetJobLogRequest::GetJobLogRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "GetJobLog") {
  setMethod(HttpRequest::Method::Get);
}

GetJobLogRequest::~GetJobLogRequest() {}

long GetJobLogRequest::getOffset() const {
  return offset_;
}

void GetJobLogRequest::setOffset(long offset) {
  offset_ = offset;
  setParameter(std::string("Offset"), std::to_string(offset));
}

std::string GetJobLogRequest::getExecHost() const {
  return execHost_;
}

void GetJobLogRequest::setExecHost(const std::string &execHost) {
  execHost_ = execHost;
  setParameter(std::string("ExecHost"), execHost);
}

std::string GetJobLogRequest::getClusterId() const {
  return clusterId_;
}

void GetJobLogRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string GetJobLogRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetJobLogRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetJobLogRequest::getJobId() const {
  return jobId_;
}

void GetJobLogRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

int GetJobLogRequest::getSize() const {
  return size_;
}

void GetJobLogRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

