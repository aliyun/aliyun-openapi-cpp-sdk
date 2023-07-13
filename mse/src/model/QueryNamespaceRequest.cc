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

#include <alibabacloud/mse/model/QueryNamespaceRequest.h>

using AlibabaCloud::Mse::Model::QueryNamespaceRequest;

QueryNamespaceRequest::QueryNamespaceRequest()
    : RpcServiceRequest("mse", "2019-05-31", "QueryNamespace") {
  setMethod(HttpRequest::Method::Post);
}

QueryNamespaceRequest::~QueryNamespaceRequest() {}

std::string QueryNamespaceRequest::getMseSessionId() const {
  return mseSessionId_;
}

void QueryNamespaceRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string QueryNamespaceRequest::getName() const {
  return name_;
}

void QueryNamespaceRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string QueryNamespaceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void QueryNamespaceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string QueryNamespaceRequest::getRegion() const {
  return region_;
}

void QueryNamespaceRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

