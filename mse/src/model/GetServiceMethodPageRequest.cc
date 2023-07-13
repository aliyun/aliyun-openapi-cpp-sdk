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

#include <alibabacloud/mse/model/GetServiceMethodPageRequest.h>

using AlibabaCloud::Mse::Model::GetServiceMethodPageRequest;

GetServiceMethodPageRequest::GetServiceMethodPageRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetServiceMethodPage") {
  setMethod(HttpRequest::Method::Post);
}

GetServiceMethodPageRequest::~GetServiceMethodPageRequest() {}

std::string GetServiceMethodPageRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetServiceMethodPageRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string GetServiceMethodPageRequest::getServiceGroup() const {
  return serviceGroup_;
}

void GetServiceMethodPageRequest::setServiceGroup(const std::string &serviceGroup) {
  serviceGroup_ = serviceGroup;
  setParameter(std::string("ServiceGroup"), serviceGroup);
}

std::string GetServiceMethodPageRequest::getPath() const {
  return path_;
}

void GetServiceMethodPageRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

std::string GetServiceMethodPageRequest::getAppName() const {
  return appName_;
}

void GetServiceMethodPageRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string GetServiceMethodPageRequest::getIp() const {
  return ip_;
}

void GetServiceMethodPageRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

std::string GetServiceMethodPageRequest::getServiceVersion() const {
  return serviceVersion_;
}

void GetServiceMethodPageRequest::setServiceVersion(const std::string &serviceVersion) {
  serviceVersion_ = serviceVersion;
  setParameter(std::string("ServiceVersion"), serviceVersion);
}

std::string GetServiceMethodPageRequest::getName() const {
  return name_;
}

void GetServiceMethodPageRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string GetServiceMethodPageRequest::getRegion() const {
  return region_;
}

void GetServiceMethodPageRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

int GetServiceMethodPageRequest::getPageNumber() const {
  return pageNumber_;
}

void GetServiceMethodPageRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int GetServiceMethodPageRequest::getPageSize() const {
  return pageSize_;
}

void GetServiceMethodPageRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetServiceMethodPageRequest::getServiceName() const {
  return serviceName_;
}

void GetServiceMethodPageRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string GetServiceMethodPageRequest::getServiceType() const {
  return serviceType_;
}

void GetServiceMethodPageRequest::setServiceType(const std::string &serviceType) {
  serviceType_ = serviceType;
  setParameter(std::string("ServiceType"), serviceType);
}

std::string GetServiceMethodPageRequest::getAppId() const {
  return appId_;
}

void GetServiceMethodPageRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string GetServiceMethodPageRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetServiceMethodPageRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string GetServiceMethodPageRequest::getMethodController() const {
  return methodController_;
}

void GetServiceMethodPageRequest::setMethodController(const std::string &methodController) {
  methodController_ = methodController;
  setParameter(std::string("MethodController"), methodController);
}

