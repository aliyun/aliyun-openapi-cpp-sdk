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

#include <alibabacloud/quickbi-public/model/QueryWorksByWorkspaceRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryWorksByWorkspaceRequest;

QueryWorksByWorkspaceRequest::QueryWorksByWorkspaceRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QueryWorksByWorkspace") {
  setMethod(HttpRequest::Method::Post);
}

QueryWorksByWorkspaceRequest::~QueryWorksByWorkspaceRequest() {}

int QueryWorksByWorkspaceRequest::getThirdPartAuthFlag() const {
  return thirdPartAuthFlag_;
}

void QueryWorksByWorkspaceRequest::setThirdPartAuthFlag(int thirdPartAuthFlag) {
  thirdPartAuthFlag_ = thirdPartAuthFlag;
  setParameter(std::string("ThirdPartAuthFlag"), std::to_string(thirdPartAuthFlag));
}

std::string QueryWorksByWorkspaceRequest::getAccessPoint() const {
  return accessPoint_;
}

void QueryWorksByWorkspaceRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

int QueryWorksByWorkspaceRequest::getPageNum() const {
  return pageNum_;
}

void QueryWorksByWorkspaceRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

int QueryWorksByWorkspaceRequest::getPageSize() const {
  return pageSize_;
}

void QueryWorksByWorkspaceRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryWorksByWorkspaceRequest::getWorksType() const {
  return worksType_;
}

void QueryWorksByWorkspaceRequest::setWorksType(const std::string &worksType) {
  worksType_ = worksType;
  setParameter(std::string("WorksType"), worksType);
}

std::string QueryWorksByWorkspaceRequest::getSignType() const {
  return signType_;
}

void QueryWorksByWorkspaceRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string QueryWorksByWorkspaceRequest::getWorkspaceId() const {
  return workspaceId_;
}

void QueryWorksByWorkspaceRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), workspaceId);
}

int QueryWorksByWorkspaceRequest::getStatus() const {
  return status_;
}

void QueryWorksByWorkspaceRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

