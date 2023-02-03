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

#include <alibabacloud/mse/model/QueryClusterSpecificationRequest.h>

using AlibabaCloud::Mse::Model::QueryClusterSpecificationRequest;

QueryClusterSpecificationRequest::QueryClusterSpecificationRequest()
    : RpcServiceRequest("mse", "2019-05-31", "QueryClusterSpecification") {
  setMethod(HttpRequest::Method::Post);
}

QueryClusterSpecificationRequest::~QueryClusterSpecificationRequest() {}

std::string QueryClusterSpecificationRequest::getMseSessionId() const {
  return mseSessionId_;
}

void QueryClusterSpecificationRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string QueryClusterSpecificationRequest::getConnectType() const {
  return connectType_;
}

void QueryClusterSpecificationRequest::setConnectType(const std::string &connectType) {
  connectType_ = connectType;
  setParameter(std::string("ConnectType"), connectType);
}

std::string QueryClusterSpecificationRequest::getMseVersion() const {
  return mseVersion_;
}

void QueryClusterSpecificationRequest::setMseVersion(const std::string &mseVersion) {
  mseVersion_ = mseVersion;
  setParameter(std::string("MseVersion"), mseVersion);
}

std::string QueryClusterSpecificationRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void QueryClusterSpecificationRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

