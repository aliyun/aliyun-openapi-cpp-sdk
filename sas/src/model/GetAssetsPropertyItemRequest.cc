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

#include <alibabacloud/sas/model/GetAssetsPropertyItemRequest.h>

using AlibabaCloud::Sas::Model::GetAssetsPropertyItemRequest;

GetAssetsPropertyItemRequest::GetAssetsPropertyItemRequest()
    : RpcServiceRequest("sas", "2018-12-03", "GetAssetsPropertyItem") {
  setMethod(HttpRequest::Method::Post);
}

GetAssetsPropertyItemRequest::~GetAssetsPropertyItemRequest() {}

std::string GetAssetsPropertyItemRequest::getSearchItem() const {
  return searchItem_;
}

void GetAssetsPropertyItemRequest::setSearchItem(const std::string &searchItem) {
  searchItem_ = searchItem;
  setParameter(std::string("SearchItem"), searchItem);
}

std::string GetAssetsPropertyItemRequest::getBiz() const {
  return biz_;
}

void GetAssetsPropertyItemRequest::setBiz(const std::string &biz) {
  biz_ = biz;
  setParameter(std::string("Biz"), biz);
}

std::string GetAssetsPropertyItemRequest::getSourceIp() const {
  return sourceIp_;
}

void GetAssetsPropertyItemRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int GetAssetsPropertyItemRequest::getPageSize() const {
  return pageSize_;
}

void GetAssetsPropertyItemRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetAssetsPropertyItemRequest::getLang() const {
  return lang_;
}

void GetAssetsPropertyItemRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

bool GetAssetsPropertyItemRequest::getForceFlush() const {
  return forceFlush_;
}

void GetAssetsPropertyItemRequest::setForceFlush(bool forceFlush) {
  forceFlush_ = forceFlush;
  setParameter(std::string("ForceFlush"), forceFlush ? "true" : "false");
}

std::string GetAssetsPropertyItemRequest::getSearchInfo() const {
  return searchInfo_;
}

void GetAssetsPropertyItemRequest::setSearchInfo(const std::string &searchInfo) {
  searchInfo_ = searchInfo;
  setParameter(std::string("SearchInfo"), searchInfo);
}

int GetAssetsPropertyItemRequest::getCurrentPage() const {
  return currentPage_;
}

void GetAssetsPropertyItemRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

