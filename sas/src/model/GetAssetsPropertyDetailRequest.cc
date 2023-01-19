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

#include <alibabacloud/sas/model/GetAssetsPropertyDetailRequest.h>

using AlibabaCloud::Sas::Model::GetAssetsPropertyDetailRequest;

GetAssetsPropertyDetailRequest::GetAssetsPropertyDetailRequest()
    : RpcServiceRequest("sas", "2018-12-03", "GetAssetsPropertyDetail") {
  setMethod(HttpRequest::Method::Post);
}

GetAssetsPropertyDetailRequest::~GetAssetsPropertyDetailRequest() {}

std::string GetAssetsPropertyDetailRequest::getRemark() const {
  return remark_;
}

void GetAssetsPropertyDetailRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string GetAssetsPropertyDetailRequest::getUuid() const {
  return uuid_;
}

void GetAssetsPropertyDetailRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string GetAssetsPropertyDetailRequest::getBiz() const {
  return biz_;
}

void GetAssetsPropertyDetailRequest::setBiz(const std::string &biz) {
  biz_ = biz;
  setParameter(std::string("Biz"), biz);
}

long GetAssetsPropertyDetailRequest::getMaxId() const {
  return maxId_;
}

void GetAssetsPropertyDetailRequest::setMaxId(long maxId) {
  maxId_ = maxId;
  setParameter(std::string("MaxId"), std::to_string(maxId));
}

std::string GetAssetsPropertyDetailRequest::getSourceIp() const {
  return sourceIp_;
}

void GetAssetsPropertyDetailRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int GetAssetsPropertyDetailRequest::getPageSize() const {
  return pageSize_;
}

void GetAssetsPropertyDetailRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetAssetsPropertyDetailRequest::getLang() const {
  return lang_;
}

void GetAssetsPropertyDetailRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::vector<GetAssetsPropertyDetailRequest::SearchCriteriaList> GetAssetsPropertyDetailRequest::getSearchCriteriaList() const {
  return searchCriteriaList_;
}

void GetAssetsPropertyDetailRequest::setSearchCriteriaList(const std::vector<GetAssetsPropertyDetailRequest::SearchCriteriaList> &searchCriteriaList) {
  searchCriteriaList_ = searchCriteriaList;
  for(int dep1 = 0; dep1 != searchCriteriaList.size(); dep1++) {
  auto searchCriteriaListObj = searchCriteriaList.at(dep1);
  std::string searchCriteriaListObjStr = std::string("SearchCriteriaList") + "." + std::to_string(dep1 + 1);
    setParameter(searchCriteriaListObjStr + ".Name", searchCriteriaListObj.name);
    setParameter(searchCriteriaListObjStr + ".Value", searchCriteriaListObj.value);
  }
}

std::string GetAssetsPropertyDetailRequest::getItemName() const {
  return itemName_;
}

void GetAssetsPropertyDetailRequest::setItemName(const std::string &itemName) {
  itemName_ = itemName;
  setParameter(std::string("ItemName"), itemName);
}

int GetAssetsPropertyDetailRequest::getCurrentPage() const {
  return currentPage_;
}

void GetAssetsPropertyDetailRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

