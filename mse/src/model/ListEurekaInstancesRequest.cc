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

#include <alibabacloud/mse/model/ListEurekaInstancesRequest.h>

using AlibabaCloud::Mse::Model::ListEurekaInstancesRequest;

ListEurekaInstancesRequest::ListEurekaInstancesRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListEurekaInstances") {
  setMethod(HttpRequest::Method::Get);
}

ListEurekaInstancesRequest::~ListEurekaInstancesRequest() {}

std::string ListEurekaInstancesRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListEurekaInstancesRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

int ListEurekaInstancesRequest::getPageNum() const {
  return pageNum_;
}

void ListEurekaInstancesRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListEurekaInstancesRequest::getRequestPars() const {
  return requestPars_;
}

void ListEurekaInstancesRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

int ListEurekaInstancesRequest::getPageSize() const {
  return pageSize_;
}

void ListEurekaInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListEurekaInstancesRequest::getServiceName() const {
  return serviceName_;
}

void ListEurekaInstancesRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string ListEurekaInstancesRequest::getClusterId() const {
  return clusterId_;
}

void ListEurekaInstancesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ListEurekaInstancesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListEurekaInstancesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

