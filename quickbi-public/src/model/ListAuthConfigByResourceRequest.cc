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

#include <alibabacloud/quickbi-public/model/ListAuthConfigByResourceRequest.h>

using AlibabaCloud::Quickbi_public::Model::ListAuthConfigByResourceRequest;

ListAuthConfigByResourceRequest::ListAuthConfigByResourceRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "ListAuthConfigByResource") {
  setMethod(HttpRequest::Method::Post);
}

ListAuthConfigByResourceRequest::~ListAuthConfigByResourceRequest() {}

std::string ListAuthConfigByResourceRequest::getAccessPoint() const {
  return accessPoint_;
}

void ListAuthConfigByResourceRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

bool ListAuthConfigByResourceRequest::getHasAuth() const {
  return hasAuth_;
}

void ListAuthConfigByResourceRequest::setHasAuth(bool hasAuth) {
  hasAuth_ = hasAuth;
  setParameter(std::string("HasAuth"), hasAuth ? "true" : "false");
}

std::string ListAuthConfigByResourceRequest::getKeyword() const {
  return keyword_;
}

void ListAuthConfigByResourceRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string ListAuthConfigByResourceRequest::getResourceId() const {
  return resourceId_;
}

void ListAuthConfigByResourceRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string ListAuthConfigByResourceRequest::getWorksType() const {
  return worksType_;
}

void ListAuthConfigByResourceRequest::setWorksType(const std::string &worksType) {
  worksType_ = worksType;
  setParameter(std::string("WorksType"), worksType);
}

std::string ListAuthConfigByResourceRequest::getSignType() const {
  return signType_;
}

void ListAuthConfigByResourceRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

int ListAuthConfigByResourceRequest::getShareToType() const {
  return shareToType_;
}

void ListAuthConfigByResourceRequest::setShareToType(int shareToType) {
  shareToType_ = shareToType;
  setParameter(std::string("ShareToType"), std::to_string(shareToType));
}

