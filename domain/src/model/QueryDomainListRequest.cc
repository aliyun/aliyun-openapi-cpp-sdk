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

#include <alibabacloud/domain/model/QueryDomainListRequest.h>

using AlibabaCloud::Domain::Model::QueryDomainListRequest;

QueryDomainListRequest::QueryDomainListRequest()
    : RpcServiceRequest("domain", "2018-01-29", "QueryDomainList") {
  setMethod(HttpRequest::Method::Post);
}

QueryDomainListRequest::~QueryDomainListRequest() {}

std::string QueryDomainListRequest::getProductDomainType() const {
  return productDomainType_;
}

void QueryDomainListRequest::setProductDomainType(const std::string &productDomainType) {
  productDomainType_ = productDomainType;
  setParameter(std::string("ProductDomainType"), productDomainType);
}

std::string QueryDomainListRequest::getCcompany() const {
  return ccompany_;
}

void QueryDomainListRequest::setCcompany(const std::string &ccompany) {
  ccompany_ = ccompany;
  setParameter(std::string("Ccompany"), ccompany);
}

std::string QueryDomainListRequest::getOrderKeyType() const {
  return orderKeyType_;
}

void QueryDomainListRequest::setOrderKeyType(const std::string &orderKeyType) {
  orderKeyType_ = orderKeyType;
  setParameter(std::string("OrderKeyType"), orderKeyType);
}

int QueryDomainListRequest::getPageNum() const {
  return pageNum_;
}

void QueryDomainListRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string QueryDomainListRequest::getOrderByType() const {
  return orderByType_;
}

void QueryDomainListRequest::setOrderByType(const std::string &orderByType) {
  orderByType_ = orderByType;
  setParameter(std::string("OrderByType"), orderByType);
}

std::string QueryDomainListRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void QueryDomainListRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int QueryDomainListRequest::getPageSize() const {
  return pageSize_;
}

void QueryDomainListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<QueryDomainListRequest::Tag> QueryDomainListRequest::getTag() const {
  return tag_;
}

void QueryDomainListRequest::setTag(const std::vector<QueryDomainListRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string QueryDomainListRequest::getLang() const {
  return lang_;
}

void QueryDomainListRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string QueryDomainListRequest::getQueryType() const {
  return queryType_;
}

void QueryDomainListRequest::setQueryType(const std::string &queryType) {
  queryType_ = queryType;
  setParameter(std::string("QueryType"), queryType);
}

long QueryDomainListRequest::getEndExpirationDate() const {
  return endExpirationDate_;
}

void QueryDomainListRequest::setEndExpirationDate(long endExpirationDate) {
  endExpirationDate_ = endExpirationDate;
  setParameter(std::string("EndExpirationDate"), std::to_string(endExpirationDate));
}

std::string QueryDomainListRequest::getDomainName() const {
  return domainName_;
}

void QueryDomainListRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long QueryDomainListRequest::getStartExpirationDate() const {
  return startExpirationDate_;
}

void QueryDomainListRequest::setStartExpirationDate(long startExpirationDate) {
  startExpirationDate_ = startExpirationDate;
  setParameter(std::string("StartExpirationDate"), std::to_string(startExpirationDate));
}

std::string QueryDomainListRequest::getDomainGroupId() const {
  return domainGroupId_;
}

void QueryDomainListRequest::setDomainGroupId(const std::string &domainGroupId) {
  domainGroupId_ = domainGroupId;
  setParameter(std::string("DomainGroupId"), domainGroupId);
}

long QueryDomainListRequest::getEndRegistrationDate() const {
  return endRegistrationDate_;
}

void QueryDomainListRequest::setEndRegistrationDate(long endRegistrationDate) {
  endRegistrationDate_ = endRegistrationDate;
  setParameter(std::string("EndRegistrationDate"), std::to_string(endRegistrationDate));
}

std::string QueryDomainListRequest::getUserClientIp() const {
  return userClientIp_;
}

void QueryDomainListRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

long QueryDomainListRequest::getStartRegistrationDate() const {
  return startRegistrationDate_;
}

void QueryDomainListRequest::setStartRegistrationDate(long startRegistrationDate) {
  startRegistrationDate_ = startRegistrationDate;
  setParameter(std::string("StartRegistrationDate"), std::to_string(startRegistrationDate));
}

