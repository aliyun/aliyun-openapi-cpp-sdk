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

#include <alibabacloud/schedulerx2/model/SetJobInstanceSuccessRequest.h>

using AlibabaCloud::Schedulerx2::Model::SetJobInstanceSuccessRequest;

SetJobInstanceSuccessRequest::SetJobInstanceSuccessRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "SetJobInstanceSuccess") {
  setMethod(HttpRequest::Method::Post);
}

SetJobInstanceSuccessRequest::~SetJobInstanceSuccessRequest() {}

std::string SetJobInstanceSuccessRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void SetJobInstanceSuccessRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setParameter(std::string("NamespaceSource"), namespaceSource);
}

std::string SetJobInstanceSuccessRequest::getGroupId() const {
  return groupId_;
}

void SetJobInstanceSuccessRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

long SetJobInstanceSuccessRequest::getJobId() const {
  return jobId_;
}

void SetJobInstanceSuccessRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), std::to_string(jobId));
}

std::string SetJobInstanceSuccessRequest::getRegionId() const {
  return regionId_;
}

void SetJobInstanceSuccessRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SetJobInstanceSuccessRequest::get_Namespace() const {
  return _namespace_;
}

void SetJobInstanceSuccessRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

long SetJobInstanceSuccessRequest::getJobInstanceId() const {
  return jobInstanceId_;
}

void SetJobInstanceSuccessRequest::setJobInstanceId(long jobInstanceId) {
  jobInstanceId_ = jobInstanceId;
  setParameter(std::string("JobInstanceId"), std::to_string(jobInstanceId));
}

