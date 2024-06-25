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

#include <alibabacloud/schedulerx2/model/GetJobInstanceListRequest.h>

using AlibabaCloud::Schedulerx2::Model::GetJobInstanceListRequest;

GetJobInstanceListRequest::GetJobInstanceListRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "GetJobInstanceList") {
  setMethod(HttpRequest::Method::Get);
}

GetJobInstanceListRequest::~GetJobInstanceListRequest() {}

std::string GetJobInstanceListRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void GetJobInstanceListRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setParameter(std::string("NamespaceSource"), namespaceSource);
}

long GetJobInstanceListRequest::getStartTimestamp() const {
  return startTimestamp_;
}

void GetJobInstanceListRequest::setStartTimestamp(long startTimestamp) {
  startTimestamp_ = startTimestamp;
  setParameter(std::string("StartTimestamp"), std::to_string(startTimestamp));
}

int GetJobInstanceListRequest::getPageNum() const {
  return pageNum_;
}

void GetJobInstanceListRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

long GetJobInstanceListRequest::getEndTimestamp() const {
  return endTimestamp_;
}

void GetJobInstanceListRequest::setEndTimestamp(long endTimestamp) {
  endTimestamp_ = endTimestamp;
  setParameter(std::string("EndTimestamp"), std::to_string(endTimestamp));
}

long GetJobInstanceListRequest::getJobId() const {
  return jobId_;
}

void GetJobInstanceListRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), std::to_string(jobId));
}

std::string GetJobInstanceListRequest::getRegionId() const {
  return regionId_;
}

void GetJobInstanceListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int GetJobInstanceListRequest::getPageSize() const {
  return pageSize_;
}

void GetJobInstanceListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetJobInstanceListRequest::getGroupId() const {
  return groupId_;
}

void GetJobInstanceListRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string GetJobInstanceListRequest::get_Namespace() const {
  return _namespace_;
}

void GetJobInstanceListRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

int GetJobInstanceListRequest::getStatus() const {
  return status_;
}

void GetJobInstanceListRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

