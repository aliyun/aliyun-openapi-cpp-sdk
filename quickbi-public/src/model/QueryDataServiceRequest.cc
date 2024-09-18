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

#include <alibabacloud/quickbi-public/model/QueryDataServiceRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryDataServiceRequest;

QueryDataServiceRequest::QueryDataServiceRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QueryDataService") {
  setMethod(HttpRequest::Method::Post);
}

QueryDataServiceRequest::~QueryDataServiceRequest() {}

std::string QueryDataServiceRequest::getAccessPoint() const {
  return accessPoint_;
}

void QueryDataServiceRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string QueryDataServiceRequest::getSignType() const {
  return signType_;
}

void QueryDataServiceRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string QueryDataServiceRequest::getReturnFields() const {
  return returnFields_;
}

void QueryDataServiceRequest::setReturnFields(const std::string &returnFields) {
  returnFields_ = returnFields;
  setParameter(std::string("ReturnFields"), returnFields);
}

std::string QueryDataServiceRequest::getConditions() const {
  return conditions_;
}

void QueryDataServiceRequest::setConditions(const std::string &conditions) {
  conditions_ = conditions;
  setParameter(std::string("Conditions"), conditions);
}

std::string QueryDataServiceRequest::getApiId() const {
  return apiId_;
}

void QueryDataServiceRequest::setApiId(const std::string &apiId) {
  apiId_ = apiId;
  setParameter(std::string("ApiId"), apiId);
}

