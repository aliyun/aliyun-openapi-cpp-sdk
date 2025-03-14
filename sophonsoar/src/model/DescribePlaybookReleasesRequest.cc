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

#include <alibabacloud/sophonsoar/model/DescribePlaybookReleasesRequest.h>

using AlibabaCloud::Sophonsoar::Model::DescribePlaybookReleasesRequest;

DescribePlaybookReleasesRequest::DescribePlaybookReleasesRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "DescribePlaybookReleases") {
  setMethod(HttpRequest::Method::Get);
}

DescribePlaybookReleasesRequest::~DescribePlaybookReleasesRequest() {}

std::string DescribePlaybookReleasesRequest::getRoleFor() const {
  return roleFor_;
}

void DescribePlaybookReleasesRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

int DescribePlaybookReleasesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribePlaybookReleasesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribePlaybookReleasesRequest::getPlaybookUuid() const {
  return playbookUuid_;
}

void DescribePlaybookReleasesRequest::setPlaybookUuid(const std::string &playbookUuid) {
  playbookUuid_ = playbookUuid;
  setParameter(std::string("PlaybookUuid"), playbookUuid);
}

int DescribePlaybookReleasesRequest::getPageSize() const {
  return pageSize_;
}

void DescribePlaybookReleasesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribePlaybookReleasesRequest::getRoleType() const {
  return roleType_;
}

void DescribePlaybookReleasesRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string DescribePlaybookReleasesRequest::getLang() const {
  return lang_;
}

void DescribePlaybookReleasesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

