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

#include <alibabacloud/mse/model/GetServiceListPageRequest.h>

using AlibabaCloud::Mse::Model::GetServiceListPageRequest;

GetServiceListPageRequest::GetServiceListPageRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetServiceListPage") {
  setMethod(HttpRequest::Method::Post);
}

GetServiceListPageRequest::~GetServiceListPageRequest() {}

std::string GetServiceListPageRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetServiceListPageRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

int GetServiceListPageRequest::getPageNumber() const {
  return pageNumber_;
}

void GetServiceListPageRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int GetServiceListPageRequest::getPageSize() const {
  return pageSize_;
}

void GetServiceListPageRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetServiceListPageRequest::getServiceName() const {
  return serviceName_;
}

void GetServiceListPageRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string GetServiceListPageRequest::getSide() const {
  return side_;
}

void GetServiceListPageRequest::setSide(const std::string &side) {
  side_ = side;
  setParameter(std::string("Side"), side);
}

std::string GetServiceListPageRequest::getIp() const {
  return ip_;
}

void GetServiceListPageRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

std::string GetServiceListPageRequest::getServiceType() const {
  return serviceType_;
}

void GetServiceListPageRequest::setServiceType(const std::string &serviceType) {
  serviceType_ = serviceType;
  setParameter(std::string("ServiceType"), serviceType);
}

std::string GetServiceListPageRequest::getAppId() const {
  return appId_;
}

void GetServiceListPageRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string GetServiceListPageRequest::get_Namespace() const {
  return _namespace_;
}

void GetServiceListPageRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string GetServiceListPageRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetServiceListPageRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string GetServiceListPageRequest::getRegion() const {
  return region_;
}

void GetServiceListPageRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

