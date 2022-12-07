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

#include <alibabacloud/ehpc/model/StopJobsRequest.h>

using AlibabaCloud::EHPC::Model::StopJobsRequest;

StopJobsRequest::StopJobsRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "StopJobs") {
  setMethod(HttpRequest::Method::Get);
}

StopJobsRequest::~StopJobsRequest() {}

std::string StopJobsRequest::getJobs() const {
  return jobs_;
}

void StopJobsRequest::setJobs(const std::string &jobs) {
  jobs_ = jobs;
  setParameter(std::string("Jobs"), jobs);
}

std::string StopJobsRequest::getClusterId() const {
  return clusterId_;
}

void StopJobsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string StopJobsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void StopJobsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

bool StopJobsRequest::getAsync() const {
  return async_;
}

void StopJobsRequest::setAsync(bool async) {
  async_ = async;
  setParameter(std::string("Async"), async ? "true" : "false");
}

