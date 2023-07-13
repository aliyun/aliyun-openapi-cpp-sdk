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

#include <alibabacloud/mse/model/ListAuthPolicyRequest.h>

using AlibabaCloud::Mse::Model::ListAuthPolicyRequest;

ListAuthPolicyRequest::ListAuthPolicyRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListAuthPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ListAuthPolicyRequest::~ListAuthPolicyRequest() {}

std::string ListAuthPolicyRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListAuthPolicyRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ListAuthPolicyRequest::getSource() const {
  return source_;
}

void ListAuthPolicyRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string ListAuthPolicyRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAuthPolicyRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string ListAuthPolicyRequest::getProtocol() const {
  return protocol_;
}

void ListAuthPolicyRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string ListAuthPolicyRequest::getPageSize() const {
  return pageSize_;
}

void ListAuthPolicyRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string ListAuthPolicyRequest::getAppId() const {
  return appId_;
}

void ListAuthPolicyRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string ListAuthPolicyRequest::getName() const {
  return name_;
}

void ListAuthPolicyRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListAuthPolicyRequest::get_Namespace() const {
  return _namespace_;
}

void ListAuthPolicyRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string ListAuthPolicyRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListAuthPolicyRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string ListAuthPolicyRequest::getRegion() const {
  return region_;
}

void ListAuthPolicyRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

