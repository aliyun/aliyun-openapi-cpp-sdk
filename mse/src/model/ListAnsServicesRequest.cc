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

#include <alibabacloud/mse/model/ListAnsServicesRequest.h>

using AlibabaCloud::Mse::Model::ListAnsServicesRequest;

ListAnsServicesRequest::ListAnsServicesRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListAnsServices") {
  setMethod(HttpRequest::Method::Post);
}

ListAnsServicesRequest::~ListAnsServicesRequest() {}

std::string ListAnsServicesRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListAnsServicesRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ListAnsServicesRequest::getClusterName() const {
  return clusterName_;
}

void ListAnsServicesRequest::setClusterName(const std::string &clusterName) {
  clusterName_ = clusterName;
  setParameter(std::string("ClusterName"), clusterName);
}

int ListAnsServicesRequest::getPageNum() const {
  return pageNum_;
}

void ListAnsServicesRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListAnsServicesRequest::getNamespaceId() const {
  return namespaceId_;
}

void ListAnsServicesRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string ListAnsServicesRequest::getRequestPars() const {
  return requestPars_;
}

void ListAnsServicesRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string ListAnsServicesRequest::getGroupName() const {
  return groupName_;
}

void ListAnsServicesRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string ListAnsServicesRequest::getInstanceId() const {
  return instanceId_;
}

void ListAnsServicesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListAnsServicesRequest::getRegionId() const {
  return regionId_;
}

void ListAnsServicesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListAnsServicesRequest::getPageSize() const {
  return pageSize_;
}

void ListAnsServicesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAnsServicesRequest::getServiceName() const {
  return serviceName_;
}

void ListAnsServicesRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string ListAnsServicesRequest::getClusterId() const {
  return clusterId_;
}

void ListAnsServicesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ListAnsServicesRequest::getHasIpCount() const {
  return hasIpCount_;
}

void ListAnsServicesRequest::setHasIpCount(const std::string &hasIpCount) {
  hasIpCount_ = hasIpCount;
  setParameter(std::string("HasIpCount"), hasIpCount);
}

std::string ListAnsServicesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListAnsServicesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

