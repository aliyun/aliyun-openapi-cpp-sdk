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

#include <alibabacloud/dataworks-public/model/GetOpRiskDataRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetOpRiskDataRequest;

GetOpRiskDataRequest::GetOpRiskDataRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetOpRiskData") {
  setMethod(HttpRequest::Method::Get);
}

GetOpRiskDataRequest::~GetOpRiskDataRequest() {}

std::string GetOpRiskDataRequest::getDate() const {
  return date_;
}

void GetOpRiskDataRequest::setDate(const std::string &date) {
  date_ = date;
  setParameter(std::string("Date"), date);
}

std::string GetOpRiskDataRequest::getRiskType() const {
  return riskType_;
}

void GetOpRiskDataRequest::setRiskType(const std::string &riskType) {
  riskType_ = riskType;
  setParameter(std::string("RiskType"), riskType);
}

int GetOpRiskDataRequest::getPageNo() const {
  return pageNo_;
}

void GetOpRiskDataRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

int GetOpRiskDataRequest::getPageSize() const {
  return pageSize_;
}

void GetOpRiskDataRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetOpRiskDataRequest::getName() const {
  return name_;
}

void GetOpRiskDataRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

