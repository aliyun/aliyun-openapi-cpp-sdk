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

#include <alibabacloud/schedulerx2/model/ListJobsRequest.h>

using AlibabaCloud::Schedulerx2::Model::ListJobsRequest;

ListJobsRequest::ListJobsRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "ListJobs") {
  setMethod(HttpRequest::Method::Get);
}

ListJobsRequest::~ListJobsRequest() {}

std::string ListJobsRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void ListJobsRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setParameter(std::string("NamespaceSource"), namespaceSource);
}

std::string ListJobsRequest::getGroupId() const {
  return groupId_;
}

void ListJobsRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string ListJobsRequest::getRegionId() const {
  return regionId_;
}

void ListJobsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListJobsRequest::get_Namespace() const {
  return _namespace_;
}

void ListJobsRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string ListJobsRequest::getJobName() const {
  return jobName_;
}

void ListJobsRequest::setJobName(const std::string &jobName) {
  jobName_ = jobName;
  setParameter(std::string("JobName"), jobName);
}

std::string ListJobsRequest::getStatus() const {
  return status_;
}

void ListJobsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

