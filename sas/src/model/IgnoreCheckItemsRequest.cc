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

#include <alibabacloud/sas/model/IgnoreCheckItemsRequest.h>

using AlibabaCloud::Sas::Model::IgnoreCheckItemsRequest;

IgnoreCheckItemsRequest::IgnoreCheckItemsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "IgnoreCheckItems") {
  setMethod(HttpRequest::Method::Post);
}

IgnoreCheckItemsRequest::~IgnoreCheckItemsRequest() {}

std::string IgnoreCheckItemsRequest::getReason() const {
  return reason_;
}

void IgnoreCheckItemsRequest::setReason(const std::string &reason) {
  reason_ = reason;
  setParameter(std::string("Reason"), reason);
}

int IgnoreCheckItemsRequest::getType() const {
  return type_;
}

void IgnoreCheckItemsRequest::setType(int type) {
  type_ = type;
  setParameter(std::string("Type"), std::to_string(type));
}

std::vector<std::string> IgnoreCheckItemsRequest::getUuidList() const {
  return uuidList_;
}

void IgnoreCheckItemsRequest::setUuidList(const std::vector<std::string> &uuidList) {
  uuidList_ = uuidList;
}

std::string IgnoreCheckItemsRequest::getLang() const {
  return lang_;
}

void IgnoreCheckItemsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::vector<IgnoreCheckItemsRequest::CheckAndRiskTypeList> IgnoreCheckItemsRequest::getCheckAndRiskTypeList() const {
  return checkAndRiskTypeList_;
}

void IgnoreCheckItemsRequest::setCheckAndRiskTypeList(const std::vector<IgnoreCheckItemsRequest::CheckAndRiskTypeList> &checkAndRiskTypeList) {
  checkAndRiskTypeList_ = checkAndRiskTypeList;
  for(int dep1 = 0; dep1 != checkAndRiskTypeList.size(); dep1++) {
  auto checkAndRiskTypeListObj = checkAndRiskTypeList.at(dep1);
  std::string checkAndRiskTypeListObjStr = std::string("CheckAndRiskTypeList") + "." + std::to_string(dep1 + 1);
    setParameter(checkAndRiskTypeListObjStr + ".RiskType", checkAndRiskTypeListObj.riskType);
    setParameter(checkAndRiskTypeListObjStr + ".CheckId", std::to_string(checkAndRiskTypeListObj.checkId));
  }
}

