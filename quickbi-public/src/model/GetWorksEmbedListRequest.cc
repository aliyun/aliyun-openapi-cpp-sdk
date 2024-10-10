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

#include <alibabacloud/quickbi-public/model/GetWorksEmbedListRequest.h>

using AlibabaCloud::Quickbi_public::Model::GetWorksEmbedListRequest;

GetWorksEmbedListRequest::GetWorksEmbedListRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "GetWorksEmbedList") {
  setMethod(HttpRequest::Method::Post);
}

GetWorksEmbedListRequest::~GetWorksEmbedListRequest() {}

std::string GetWorksEmbedListRequest::getWsId() const {
  return wsId_;
}

void GetWorksEmbedListRequest::setWsId(const std::string &wsId) {
  wsId_ = wsId;
  setParameter(std::string("WsId"), wsId);
}

std::string GetWorksEmbedListRequest::getAccessPoint() const {
  return accessPoint_;
}

void GetWorksEmbedListRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

int GetWorksEmbedListRequest::getPageSize() const {
  return pageSize_;
}

void GetWorksEmbedListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetWorksEmbedListRequest::getKeyword() const {
  return keyword_;
}

void GetWorksEmbedListRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string GetWorksEmbedListRequest::getWorksType() const {
  return worksType_;
}

void GetWorksEmbedListRequest::setWorksType(const std::string &worksType) {
  worksType_ = worksType;
  setParameter(std::string("WorksType"), worksType);
}

std::string GetWorksEmbedListRequest::getSignType() const {
  return signType_;
}

void GetWorksEmbedListRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

int GetWorksEmbedListRequest::getPageNo() const {
  return pageNo_;
}

void GetWorksEmbedListRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

