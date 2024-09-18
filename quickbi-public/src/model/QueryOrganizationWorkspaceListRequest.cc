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

#include <alibabacloud/quickbi-public/model/QueryOrganizationWorkspaceListRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryOrganizationWorkspaceListRequest;

QueryOrganizationWorkspaceListRequest::QueryOrganizationWorkspaceListRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QueryOrganizationWorkspaceList") {
  setMethod(HttpRequest::Method::Post);
}

QueryOrganizationWorkspaceListRequest::~QueryOrganizationWorkspaceListRequest() {}

std::string QueryOrganizationWorkspaceListRequest::getAccessPoint() const {
  return accessPoint_;
}

void QueryOrganizationWorkspaceListRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

int QueryOrganizationWorkspaceListRequest::getPageNum() const {
  return pageNum_;
}

void QueryOrganizationWorkspaceListRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string QueryOrganizationWorkspaceListRequest::getUserId() const {
  return userId_;
}

void QueryOrganizationWorkspaceListRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

int QueryOrganizationWorkspaceListRequest::getPageSize() const {
  return pageSize_;
}

void QueryOrganizationWorkspaceListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryOrganizationWorkspaceListRequest::getKeyword() const {
  return keyword_;
}

void QueryOrganizationWorkspaceListRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string QueryOrganizationWorkspaceListRequest::getSignType() const {
  return signType_;
}

void QueryOrganizationWorkspaceListRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

