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

#include <alibabacloud/domain/model/QueryAdvancedDomainListRequest.h>

using AlibabaCloud::Domain::Model::QueryAdvancedDomainListRequest;

QueryAdvancedDomainListRequest::QueryAdvancedDomainListRequest()
    : RpcServiceRequest("domain", "2018-01-29", "QueryAdvancedDomainList") {
  setMethod(HttpRequest::Method::Post);
}

QueryAdvancedDomainListRequest::~QueryAdvancedDomainListRequest() {}

std::string QueryAdvancedDomainListRequest::getProductDomainType() const {
  return productDomainType_;
}

void QueryAdvancedDomainListRequest::setProductDomainType(const std::string &productDomainType) {
  productDomainType_ = productDomainType;
  setParameter(std::string("ProductDomainType"), productDomainType);
}

int QueryAdvancedDomainListRequest::getPageNum() const {
  return pageNum_;
}

void QueryAdvancedDomainListRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string QueryAdvancedDomainListRequest::getExcluded() const {
  return excluded_;
}

void QueryAdvancedDomainListRequest::setExcluded(const std::string &excluded) {
  excluded_ = excluded;
  setParameter(std::string("Excluded"), excluded);
}

int QueryAdvancedDomainListRequest::getStartLength() const {
  return startLength_;
}

void QueryAdvancedDomainListRequest::setStartLength(int startLength) {
  startLength_ = startLength;
  setParameter(std::string("StartLength"), std::to_string(startLength));
}

std::string QueryAdvancedDomainListRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void QueryAdvancedDomainListRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

bool QueryAdvancedDomainListRequest::getExcludedSuffix() const {
  return excludedSuffix_;
}

void QueryAdvancedDomainListRequest::setExcludedSuffix(bool excludedSuffix) {
  excludedSuffix_ = excludedSuffix;
  setParameter(std::string("ExcludedSuffix"), excludedSuffix ? "true" : "false");
}

int QueryAdvancedDomainListRequest::getPageSize() const {
  return pageSize_;
}

void QueryAdvancedDomainListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<QueryAdvancedDomainListRequest::Tag> QueryAdvancedDomainListRequest::getTag() const {
  return tag_;
}

void QueryAdvancedDomainListRequest::setTag(const std::vector<QueryAdvancedDomainListRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string QueryAdvancedDomainListRequest::getLang() const {
  return lang_;
}

void QueryAdvancedDomainListRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

bool QueryAdvancedDomainListRequest::getExcludedPrefix() const {
  return excludedPrefix_;
}

void QueryAdvancedDomainListRequest::setExcludedPrefix(bool excludedPrefix) {
  excludedPrefix_ = excludedPrefix;
  setParameter(std::string("ExcludedPrefix"), excludedPrefix ? "true" : "false");
}

std::string QueryAdvancedDomainListRequest::getKeyWord() const {
  return keyWord_;
}

void QueryAdvancedDomainListRequest::setKeyWord(const std::string &keyWord) {
  keyWord_ = keyWord;
  setParameter(std::string("KeyWord"), keyWord);
}

bool QueryAdvancedDomainListRequest::getProductDomainTypeSort() const {
  return productDomainTypeSort_;
}

void QueryAdvancedDomainListRequest::setProductDomainTypeSort(bool productDomainTypeSort) {
  productDomainTypeSort_ = productDomainTypeSort;
  setParameter(std::string("ProductDomainTypeSort"), productDomainTypeSort ? "true" : "false");
}

long QueryAdvancedDomainListRequest::getEndExpirationDate() const {
  return endExpirationDate_;
}

void QueryAdvancedDomainListRequest::setEndExpirationDate(long endExpirationDate) {
  endExpirationDate_ = endExpirationDate;
  setParameter(std::string("EndExpirationDate"), std::to_string(endExpirationDate));
}

std::string QueryAdvancedDomainListRequest::getSuffixs() const {
  return suffixs_;
}

void QueryAdvancedDomainListRequest::setSuffixs(const std::string &suffixs) {
  suffixs_ = suffixs;
  setParameter(std::string("Suffixs"), suffixs);
}

bool QueryAdvancedDomainListRequest::getDomainNameSort() const {
  return domainNameSort_;
}

void QueryAdvancedDomainListRequest::setDomainNameSort(bool domainNameSort) {
  domainNameSort_ = domainNameSort;
  setParameter(std::string("DomainNameSort"), domainNameSort ? "true" : "false");
}

bool QueryAdvancedDomainListRequest::getExpirationDateSort() const {
  return expirationDateSort_;
}

void QueryAdvancedDomainListRequest::setExpirationDateSort(bool expirationDateSort) {
  expirationDateSort_ = expirationDateSort;
  setParameter(std::string("ExpirationDateSort"), expirationDateSort ? "true" : "false");
}

long QueryAdvancedDomainListRequest::getStartExpirationDate() const {
  return startExpirationDate_;
}

void QueryAdvancedDomainListRequest::setStartExpirationDate(long startExpirationDate) {
  startExpirationDate_ = startExpirationDate;
  setParameter(std::string("StartExpirationDate"), std::to_string(startExpirationDate));
}

int QueryAdvancedDomainListRequest::getDomainStatus() const {
  return domainStatus_;
}

void QueryAdvancedDomainListRequest::setDomainStatus(int domainStatus) {
  domainStatus_ = domainStatus;
  setParameter(std::string("DomainStatus"), std::to_string(domainStatus));
}

long QueryAdvancedDomainListRequest::getDomainGroupId() const {
  return domainGroupId_;
}

void QueryAdvancedDomainListRequest::setDomainGroupId(long domainGroupId) {
  domainGroupId_ = domainGroupId;
  setParameter(std::string("DomainGroupId"), std::to_string(domainGroupId));
}

bool QueryAdvancedDomainListRequest::getKeyWordSuffix() const {
  return keyWordSuffix_;
}

void QueryAdvancedDomainListRequest::setKeyWordSuffix(bool keyWordSuffix) {
  keyWordSuffix_ = keyWordSuffix;
  setParameter(std::string("KeyWordSuffix"), keyWordSuffix ? "true" : "false");
}

bool QueryAdvancedDomainListRequest::getKeyWordPrefix() const {
  return keyWordPrefix_;
}

void QueryAdvancedDomainListRequest::setKeyWordPrefix(bool keyWordPrefix) {
  keyWordPrefix_ = keyWordPrefix;
  setParameter(std::string("KeyWordPrefix"), keyWordPrefix ? "true" : "false");
}

int QueryAdvancedDomainListRequest::getTradeType() const {
  return tradeType_;
}

void QueryAdvancedDomainListRequest::setTradeType(int tradeType) {
  tradeType_ = tradeType;
  setParameter(std::string("TradeType"), std::to_string(tradeType));
}

long QueryAdvancedDomainListRequest::getEndRegistrationDate() const {
  return endRegistrationDate_;
}

void QueryAdvancedDomainListRequest::setEndRegistrationDate(long endRegistrationDate) {
  endRegistrationDate_ = endRegistrationDate;
  setParameter(std::string("EndRegistrationDate"), std::to_string(endRegistrationDate));
}

int QueryAdvancedDomainListRequest::getForm() const {
  return form_;
}

void QueryAdvancedDomainListRequest::setForm(int form) {
  form_ = form;
  setParameter(std::string("Form"), std::to_string(form));
}

bool QueryAdvancedDomainListRequest::getIsPremiumDomain() const {
  return isPremiumDomain_;
}

void QueryAdvancedDomainListRequest::setIsPremiumDomain(bool isPremiumDomain) {
  isPremiumDomain_ = isPremiumDomain;
  setParameter(std::string("IsPremiumDomain"), isPremiumDomain ? "true" : "false");
}

std::string QueryAdvancedDomainListRequest::getUserClientIp() const {
  return userClientIp_;
}

void QueryAdvancedDomainListRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

bool QueryAdvancedDomainListRequest::getRegistrationDateSort() const {
  return registrationDateSort_;
}

void QueryAdvancedDomainListRequest::setRegistrationDateSort(bool registrationDateSort) {
  registrationDateSort_ = registrationDateSort;
  setParameter(std::string("RegistrationDateSort"), registrationDateSort ? "true" : "false");
}

long QueryAdvancedDomainListRequest::getStartRegistrationDate() const {
  return startRegistrationDate_;
}

void QueryAdvancedDomainListRequest::setStartRegistrationDate(long startRegistrationDate) {
  startRegistrationDate_ = startRegistrationDate;
  setParameter(std::string("StartRegistrationDate"), std::to_string(startRegistrationDate));
}

int QueryAdvancedDomainListRequest::getEndLength() const {
  return endLength_;
}

void QueryAdvancedDomainListRequest::setEndLength(int endLength) {
  endLength_ = endLength;
  setParameter(std::string("EndLength"), std::to_string(endLength));
}

