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

#include <alibabacloud/quickbi-public/model/QueryDataServiceListRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryDataServiceListRequest;

QueryDataServiceListRequest::QueryDataServiceListRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QueryDataServiceList") {
  setMethod(HttpRequest::Method::Post);
}

QueryDataServiceListRequest::~QueryDataServiceListRequest() {}

std::string QueryDataServiceListRequest::getAccessPoint() const {
  return accessPoint_;
}

void QueryDataServiceListRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string QueryDataServiceListRequest::getUserId() const {
  return userId_;
}

void QueryDataServiceListRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

int QueryDataServiceListRequest::getPageSize() const {
  return pageSize_;
}

void QueryDataServiceListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryDataServiceListRequest::getSignType() const {
  return signType_;
}

void QueryDataServiceListRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

int QueryDataServiceListRequest::getPageNo() const {
  return pageNo_;
}

void QueryDataServiceListRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string QueryDataServiceListRequest::getName() const {
  return name_;
}

void QueryDataServiceListRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

