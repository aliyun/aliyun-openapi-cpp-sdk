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

#include <alibabacloud/schedulerx2/model/BatchEnableJobsRequest.h>

using AlibabaCloud::Schedulerx2::Model::BatchEnableJobsRequest;

BatchEnableJobsRequest::BatchEnableJobsRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "BatchEnableJobs") {
  setMethod(HttpRequest::Method::Post);
}

BatchEnableJobsRequest::~BatchEnableJobsRequest() {}

std::string BatchEnableJobsRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void BatchEnableJobsRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setParameter(std::string("NamespaceSource"), namespaceSource);
}

std::string BatchEnableJobsRequest::getGroupId() const {
  return groupId_;
}

void BatchEnableJobsRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::vector<long> BatchEnableJobsRequest::getJobIdList() const {
  return jobIdList_;
}

void BatchEnableJobsRequest::setJobIdList(const std::vector<long> &jobIdList) {
  jobIdList_ = jobIdList;
}

std::string BatchEnableJobsRequest::getRegionId() const {
  return regionId_;
}

void BatchEnableJobsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string BatchEnableJobsRequest::get_Namespace() const {
  return _namespace_;
}

void BatchEnableJobsRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

