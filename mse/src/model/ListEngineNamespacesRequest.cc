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

#include <alibabacloud/mse/model/ListEngineNamespacesRequest.h>

using AlibabaCloud::Mse::Model::ListEngineNamespacesRequest;

ListEngineNamespacesRequest::ListEngineNamespacesRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListEngineNamespaces") {
  setMethod(HttpRequest::Method::Post);
}

ListEngineNamespacesRequest::~ListEngineNamespacesRequest() {}

std::string ListEngineNamespacesRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListEngineNamespacesRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

int ListEngineNamespacesRequest::getPageNum() const {
  return pageNum_;
}

void ListEngineNamespacesRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

int ListEngineNamespacesRequest::getPageSize() const {
  return pageSize_;
}

void ListEngineNamespacesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListEngineNamespacesRequest::getClusterId() const {
  return clusterId_;
}

void ListEngineNamespacesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ListEngineNamespacesRequest::getInstanceId() const {
  return instanceId_;
}

void ListEngineNamespacesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListEngineNamespacesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListEngineNamespacesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

