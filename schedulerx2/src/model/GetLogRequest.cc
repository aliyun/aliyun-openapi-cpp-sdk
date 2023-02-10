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

#include <alibabacloud/schedulerx2/model/GetLogRequest.h>

using AlibabaCloud::Schedulerx2::Model::GetLogRequest;

GetLogRequest::GetLogRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "GetLog") {
  setMethod(HttpRequest::Method::Get);
}

GetLogRequest::~GetLogRequest() {}

std::string GetLogRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void GetLogRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setParameter(std::string("NamespaceSource"), namespaceSource);
}

int GetLogRequest::getLine() const {
  return line_;
}

void GetLogRequest::setLine(int line) {
  line_ = line;
  setParameter(std::string("Line"), std::to_string(line));
}

long GetLogRequest::getStartTimestamp() const {
  return startTimestamp_;
}

void GetLogRequest::setStartTimestamp(long startTimestamp) {
  startTimestamp_ = startTimestamp;
  setParameter(std::string("StartTimestamp"), std::to_string(startTimestamp));
}

long GetLogRequest::getEndTimestamp() const {
  return endTimestamp_;
}

void GetLogRequest::setEndTimestamp(long endTimestamp) {
  endTimestamp_ = endTimestamp;
  setParameter(std::string("EndTimestamp"), std::to_string(endTimestamp));
}

std::string GetLogRequest::getJobId() const {
  return jobId_;
}

void GetLogRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string GetLogRequest::getRegionId() const {
  return regionId_;
}

void GetLogRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetLogRequest::getKeyword() const {
  return keyword_;
}

void GetLogRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

int GetLogRequest::getOffset() const {
  return offset_;
}

void GetLogRequest::setOffset(int offset) {
  offset_ = offset;
  setParameter(std::string("Offset"), std::to_string(offset));
}

std::string GetLogRequest::getGroupId() const {
  return groupId_;
}

void GetLogRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

bool GetLogRequest::getReverse() const {
  return reverse_;
}

void GetLogRequest::setReverse(bool reverse) {
  reverse_ = reverse;
  setParameter(std::string("Reverse"), reverse ? "true" : "false");
}

std::string GetLogRequest::get_Namespace() const {
  return _namespace_;
}

void GetLogRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string GetLogRequest::getJobInstanceId() const {
  return jobInstanceId_;
}

void GetLogRequest::setJobInstanceId(const std::string &jobInstanceId) {
  jobInstanceId_ = jobInstanceId;
  setParameter(std::string("JobInstanceId"), jobInstanceId);
}

