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

#include <alibabacloud/mse/model/ListClusterHealthCheckTaskRequest.h>

using AlibabaCloud::Mse::Model::ListClusterHealthCheckTaskRequest;

ListClusterHealthCheckTaskRequest::ListClusterHealthCheckTaskRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListClusterHealthCheckTask") {
  setMethod(HttpRequest::Method::Post);
}

ListClusterHealthCheckTaskRequest::~ListClusterHealthCheckTaskRequest() {}

std::string ListClusterHealthCheckTaskRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListClusterHealthCheckTaskRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

int ListClusterHealthCheckTaskRequest::getPageNum() const {
  return pageNum_;
}

void ListClusterHealthCheckTaskRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListClusterHealthCheckTaskRequest::getRegionId() const {
  return regionId_;
}

void ListClusterHealthCheckTaskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListClusterHealthCheckTaskRequest::getPageSize() const {
  return pageSize_;
}

void ListClusterHealthCheckTaskRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListClusterHealthCheckTaskRequest::getRequestPars() const {
  return requestPars_;
}

void ListClusterHealthCheckTaskRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string ListClusterHealthCheckTaskRequest::getInstanceId() const {
  return instanceId_;
}

void ListClusterHealthCheckTaskRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListClusterHealthCheckTaskRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListClusterHealthCheckTaskRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

