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

#include <alibabacloud/cdn/model/DescribeDomainNamesOfVersionRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainNamesOfVersionRequest;

DescribeDomainNamesOfVersionRequest::DescribeDomainNamesOfVersionRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainNamesOfVersion") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainNamesOfVersionRequest::~DescribeDomainNamesOfVersionRequest() {}

std::string DescribeDomainNamesOfVersionRequest::getVersionId() const {
  return versionId_;
}

void DescribeDomainNamesOfVersionRequest::setVersionId(const std::string &versionId) {
  versionId_ = versionId;
  setParameter(std::string("VersionId"), versionId);
}

std::string DescribeDomainNamesOfVersionRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDomainNamesOfVersionRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

int DescribeDomainNamesOfVersionRequest::getPageIndex() const {
  return pageIndex_;
}

void DescribeDomainNamesOfVersionRequest::setPageIndex(int pageIndex) {
  pageIndex_ = pageIndex;
  setParameter(std::string("PageIndex"), std::to_string(pageIndex));
}

long DescribeDomainNamesOfVersionRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainNamesOfVersionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

