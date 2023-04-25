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

#include <alibabacloud/ccc/model/EndConferenceRequest.h>

using AlibabaCloud::CCC::Model::EndConferenceRequest;

EndConferenceRequest::EndConferenceRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "EndConference") {
  setMethod(HttpRequest::Method::Post);
}

EndConferenceRequest::~EndConferenceRequest() {}

std::string EndConferenceRequest::getUserId() const {
  return userId_;
}

void EndConferenceRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string EndConferenceRequest::getJobId() const {
  return jobId_;
}

void EndConferenceRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string EndConferenceRequest::getInstanceId() const {
  return instanceId_;
}

void EndConferenceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

