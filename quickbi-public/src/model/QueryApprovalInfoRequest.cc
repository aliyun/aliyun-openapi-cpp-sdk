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

#include <alibabacloud/quickbi-public/model/QueryApprovalInfoRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryApprovalInfoRequest;

QueryApprovalInfoRequest::QueryApprovalInfoRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QueryApprovalInfo") {
  setMethod(HttpRequest::Method::Post);
}

QueryApprovalInfoRequest::~QueryApprovalInfoRequest() {}

std::string QueryApprovalInfoRequest::getAccessPoint() const {
  return accessPoint_;
}

void QueryApprovalInfoRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string QueryApprovalInfoRequest::getUserId() const {
  return userId_;
}

void QueryApprovalInfoRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

int QueryApprovalInfoRequest::getPageSize() const {
  return pageSize_;
}

void QueryApprovalInfoRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryApprovalInfoRequest::getSignType() const {
  return signType_;
}

void QueryApprovalInfoRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

int QueryApprovalInfoRequest::getPage() const {
  return page_;
}

void QueryApprovalInfoRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

int QueryApprovalInfoRequest::getStatus() const {
  return status_;
}

void QueryApprovalInfoRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

