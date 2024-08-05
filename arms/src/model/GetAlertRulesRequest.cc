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

#include <alibabacloud/arms/model/GetAlertRulesRequest.h>

using AlibabaCloud::ARMS::Model::GetAlertRulesRequest;

GetAlertRulesRequest::GetAlertRulesRequest()
    : RpcServiceRequest("arms", "2019-08-08", "GetAlertRules") {
  setMethod(HttpRequest::Method::Post);
}

GetAlertRulesRequest::~GetAlertRulesRequest() {}

std::string GetAlertRulesRequest::getProductCode() const {
  return productCode_;
}

void GetAlertRulesRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string GetAlertRulesRequest::getAlertStatus() const {
  return alertStatus_;
}

void GetAlertRulesRequest::setAlertStatus(const std::string &alertStatus) {
  alertStatus_ = alertStatus;
  setParameter(std::string("AlertStatus"), alertStatus);
}

std::string GetAlertRulesRequest::getClusterId() const {
  return clusterId_;
}

void GetAlertRulesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string GetAlertRulesRequest::getProxyUserId() const {
  return proxyUserId_;
}

void GetAlertRulesRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

std::vector<GetAlertRulesRequest::Tags> GetAlertRulesRequest::getTags() const {
  return tags_;
}

void GetAlertRulesRequest::setTags(const std::vector<GetAlertRulesRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
  }
}

std::string GetAlertRulesRequest::getAlertNames() const {
  return alertNames_;
}

void GetAlertRulesRequest::setAlertNames(const std::string &alertNames) {
  alertNames_ = alertNames;
  setParameter(std::string("AlertNames"), alertNames);
}

std::string GetAlertRulesRequest::getAlertType() const {
  return alertType_;
}

void GetAlertRulesRequest::setAlertType(const std::string &alertType) {
  alertType_ = alertType;
  setParameter(std::string("AlertType"), alertType);
}

long GetAlertRulesRequest::getSize() const {
  return size_;
}

void GetAlertRulesRequest::setSize(long size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

std::string GetAlertRulesRequest::getAlertIds() const {
  return alertIds_;
}

void GetAlertRulesRequest::setAlertIds(const std::string &alertIds) {
  alertIds_ = alertIds;
  setParameter(std::string("AlertIds"), alertIds);
}

std::string GetAlertRulesRequest::getRegionId() const {
  return regionId_;
}

void GetAlertRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long GetAlertRulesRequest::getPage() const {
  return page_;
}

void GetAlertRulesRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

bool GetAlertRulesRequest::getIsOr() const {
  return isOr_;
}

void GetAlertRulesRequest::setIsOr(bool isOr) {
  isOr_ = isOr;
  setParameter(std::string("IsOr"), isOr ? "true" : "false");
}

