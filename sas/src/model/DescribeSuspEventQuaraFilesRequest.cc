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

#include <alibabacloud/sas/model/DescribeSuspEventQuaraFilesRequest.h>

using AlibabaCloud::Sas::Model::DescribeSuspEventQuaraFilesRequest;

DescribeSuspEventQuaraFilesRequest::DescribeSuspEventQuaraFilesRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeSuspEventQuaraFiles") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSuspEventQuaraFilesRequest::~DescribeSuspEventQuaraFilesRequest() {}

std::string DescribeSuspEventQuaraFilesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeSuspEventQuaraFilesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeSuspEventQuaraFilesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSuspEventQuaraFilesRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeSuspEventQuaraFilesRequest::getFrom() const {
  return from_;
}

void DescribeSuspEventQuaraFilesRequest::setFrom(const std::string &from) {
  from_ = from;
  setParameter(std::string("From"), from);
}

long DescribeSuspEventQuaraFilesRequest::getGroupingId() const {
  return groupingId_;
}

void DescribeSuspEventQuaraFilesRequest::setGroupingId(long groupingId) {
  groupingId_ = groupingId;
  setParameter(std::string("GroupingId"), std::to_string(groupingId));
}

std::string DescribeSuspEventQuaraFilesRequest::getGroupId() const {
  return groupId_;
}

void DescribeSuspEventQuaraFilesRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeSuspEventQuaraFilesRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeSuspEventQuaraFilesRequest::setCurrentPage(const std::string &currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), currentPage);
}

std::string DescribeSuspEventQuaraFilesRequest::getQuaraTag() const {
  return quaraTag_;
}

void DescribeSuspEventQuaraFilesRequest::setQuaraTag(const std::string &quaraTag) {
  quaraTag_ = quaraTag;
  setParameter(std::string("QuaraTag"), quaraTag);
}

std::string DescribeSuspEventQuaraFilesRequest::getStatus() const {
  return status_;
}

void DescribeSuspEventQuaraFilesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

