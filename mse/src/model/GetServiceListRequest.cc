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

#include <alibabacloud/mse/model/GetServiceListRequest.h>

using AlibabaCloud::Mse::Model::GetServiceListRequest;

GetServiceListRequest::GetServiceListRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetServiceList") {
  setMethod(HttpRequest::Method::Post);
}

GetServiceListRequest::~GetServiceListRequest() {}

std::string GetServiceListRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetServiceListRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string GetServiceListRequest::getServiceName() const {
  return serviceName_;
}

void GetServiceListRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string GetServiceListRequest::getIp() const {
  return ip_;
}

void GetServiceListRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

std::string GetServiceListRequest::getServiceType() const {
  return serviceType_;
}

void GetServiceListRequest::setServiceType(const std::string &serviceType) {
  serviceType_ = serviceType;
  setParameter(std::string("ServiceType"), serviceType);
}

std::string GetServiceListRequest::getAppId() const {
  return appId_;
}

void GetServiceListRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string GetServiceListRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetServiceListRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string GetServiceListRequest::getRegion() const {
  return region_;
}

void GetServiceListRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

