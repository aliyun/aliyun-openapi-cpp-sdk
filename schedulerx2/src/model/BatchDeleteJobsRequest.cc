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

#include <alibabacloud/schedulerx2/model/BatchDeleteJobsRequest.h>

using AlibabaCloud::Schedulerx2::Model::BatchDeleteJobsRequest;

BatchDeleteJobsRequest::BatchDeleteJobsRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "BatchDeleteJobs") {
  setMethod(HttpRequest::Method::Post);
}

BatchDeleteJobsRequest::~BatchDeleteJobsRequest() {}

std::string BatchDeleteJobsRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void BatchDeleteJobsRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setParameter(std::string("NamespaceSource"), namespaceSource);
}

std::string BatchDeleteJobsRequest::getGroupId() const {
  return groupId_;
}

void BatchDeleteJobsRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::vector<long> BatchDeleteJobsRequest::getJobIdList() const {
  return jobIdList_;
}

void BatchDeleteJobsRequest::setJobIdList(const std::vector<long> &jobIdList) {
  jobIdList_ = jobIdList;
}

std::string BatchDeleteJobsRequest::getRegionId() const {
  return regionId_;
}

void BatchDeleteJobsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string BatchDeleteJobsRequest::get_Namespace() const {
  return _namespace_;
}

void BatchDeleteJobsRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

