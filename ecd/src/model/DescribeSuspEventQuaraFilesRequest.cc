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

#include <alibabacloud/ecd/model/DescribeSuspEventQuaraFilesRequest.h>

using AlibabaCloud::Ecd::Model::DescribeSuspEventQuaraFilesRequest;

DescribeSuspEventQuaraFilesRequest::DescribeSuspEventQuaraFilesRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeSuspEventQuaraFiles") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSuspEventQuaraFilesRequest::~DescribeSuspEventQuaraFilesRequest() {}

std::string DescribeSuspEventQuaraFilesRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void DescribeSuspEventQuaraFilesRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

int DescribeSuspEventQuaraFilesRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeSuspEventQuaraFilesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeSuspEventQuaraFilesRequest::getRegionId() const {
  return regionId_;
}

void DescribeSuspEventQuaraFilesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeSuspEventQuaraFilesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSuspEventQuaraFilesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSuspEventQuaraFilesRequest::getStatus() const {
  return status_;
}

void DescribeSuspEventQuaraFilesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

