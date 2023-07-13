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

#include <alibabacloud/mse/model/GetServiceListenersRequest.h>

using AlibabaCloud::Mse::Model::GetServiceListenersRequest;

GetServiceListenersRequest::GetServiceListenersRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetServiceListeners") {
  setMethod(HttpRequest::Method::Post);
}

GetServiceListenersRequest::~GetServiceListenersRequest() {}

std::string GetServiceListenersRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetServiceListenersRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string GetServiceListenersRequest::getClusterName() const {
  return clusterName_;
}

void GetServiceListenersRequest::setClusterName(const std::string &clusterName) {
  clusterName_ = clusterName;
  setParameter(std::string("ClusterName"), clusterName);
}

int GetServiceListenersRequest::getPageNum() const {
  return pageNum_;
}

void GetServiceListenersRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string GetServiceListenersRequest::getNamespaceId() const {
  return namespaceId_;
}

void GetServiceListenersRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string GetServiceListenersRequest::getRequestPars() const {
  return requestPars_;
}

void GetServiceListenersRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string GetServiceListenersRequest::getGroupName() const {
  return groupName_;
}

void GetServiceListenersRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string GetServiceListenersRequest::getInstanceId() const {
  return instanceId_;
}

void GetServiceListenersRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetServiceListenersRequest::getRegionId() const {
  return regionId_;
}

void GetServiceListenersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int GetServiceListenersRequest::getPageSize() const {
  return pageSize_;
}

void GetServiceListenersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetServiceListenersRequest::getServiceName() const {
  return serviceName_;
}

void GetServiceListenersRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string GetServiceListenersRequest::getClusterId() const {
  return clusterId_;
}

void GetServiceListenersRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string GetServiceListenersRequest::getHasIpCount() const {
  return hasIpCount_;
}

void GetServiceListenersRequest::setHasIpCount(const std::string &hasIpCount) {
  hasIpCount_ = hasIpCount;
  setParameter(std::string("HasIpCount"), hasIpCount);
}

std::string GetServiceListenersRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetServiceListenersRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

