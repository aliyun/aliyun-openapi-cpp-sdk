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

#include <alibabacloud/quickbi-public/model/QueryDataRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryDataRequest;

QueryDataRequest::QueryDataRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QueryData") {
  setMethod(HttpRequest::Method::Post);
}

QueryDataRequest::~QueryDataRequest() {}

std::string QueryDataRequest::getAccessPoint() const {
  return accessPoint_;
}

void QueryDataRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string QueryDataRequest::getUserId() const {
  return userId_;
}

void QueryDataRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string QueryDataRequest::getSignType() const {
  return signType_;
}

void QueryDataRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string QueryDataRequest::getReturnFields() const {
  return returnFields_;
}

void QueryDataRequest::setReturnFields(const std::string &returnFields) {
  returnFields_ = returnFields;
  setParameter(std::string("ReturnFields"), returnFields);
}

std::string QueryDataRequest::getConditions() const {
  return conditions_;
}

void QueryDataRequest::setConditions(const std::string &conditions) {
  conditions_ = conditions;
  setParameter(std::string("Conditions"), conditions);
}

std::string QueryDataRequest::getApiId() const {
  return apiId_;
}

void QueryDataRequest::setApiId(const std::string &apiId) {
  apiId_ = apiId;
  setParameter(std::string("ApiId"), apiId);
}

