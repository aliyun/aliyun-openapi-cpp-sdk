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

#include <alibabacloud/mse/model/ListAnsInstancesRequest.h>

using AlibabaCloud::Mse::Model::ListAnsInstancesRequest;

ListAnsInstancesRequest::ListAnsInstancesRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListAnsInstances") {
  setMethod(HttpRequest::Method::Get);
}

ListAnsInstancesRequest::~ListAnsInstancesRequest() {}

std::string ListAnsInstancesRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListAnsInstancesRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ListAnsInstancesRequest::getClusterName() const {
  return clusterName_;
}

void ListAnsInstancesRequest::setClusterName(const std::string &clusterName) {
  clusterName_ = clusterName;
  setParameter(std::string("ClusterName"), clusterName);
}

int ListAnsInstancesRequest::getPageNum() const {
  return pageNum_;
}

void ListAnsInstancesRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListAnsInstancesRequest::getNamespaceId() const {
  return namespaceId_;
}

void ListAnsInstancesRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string ListAnsInstancesRequest::getRequestPars() const {
  return requestPars_;
}

void ListAnsInstancesRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

int ListAnsInstancesRequest::getPageSize() const {
  return pageSize_;
}

void ListAnsInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAnsInstancesRequest::getServiceName() const {
  return serviceName_;
}

void ListAnsInstancesRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string ListAnsInstancesRequest::getClusterId() const {
  return clusterId_;
}

void ListAnsInstancesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ListAnsInstancesRequest::getGroupName() const {
  return groupName_;
}

void ListAnsInstancesRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string ListAnsInstancesRequest::getInstanceId() const {
  return instanceId_;
}

void ListAnsInstancesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListAnsInstancesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListAnsInstancesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

