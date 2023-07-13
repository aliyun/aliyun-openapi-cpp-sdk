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

#include <alibabacloud/mse/model/ListEurekaServicesRequest.h>

using AlibabaCloud::Mse::Model::ListEurekaServicesRequest;

ListEurekaServicesRequest::ListEurekaServicesRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListEurekaServices") {
  setMethod(HttpRequest::Method::Get);
}

ListEurekaServicesRequest::~ListEurekaServicesRequest() {}

std::string ListEurekaServicesRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListEurekaServicesRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

int ListEurekaServicesRequest::getPageNum() const {
  return pageNum_;
}

void ListEurekaServicesRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListEurekaServicesRequest::getRegionId() const {
  return regionId_;
}

void ListEurekaServicesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListEurekaServicesRequest::getRequestPars() const {
  return requestPars_;
}

void ListEurekaServicesRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

int ListEurekaServicesRequest::getPageSize() const {
  return pageSize_;
}

void ListEurekaServicesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListEurekaServicesRequest::getClusterId() const {
  return clusterId_;
}

void ListEurekaServicesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ListEurekaServicesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListEurekaServicesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

