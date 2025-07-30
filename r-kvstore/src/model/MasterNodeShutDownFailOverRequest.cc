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

#include <alibabacloud/r-kvstore/model/MasterNodeShutDownFailOverRequest.h>

using AlibabaCloud::R_kvstore::Model::MasterNodeShutDownFailOverRequest;

MasterNodeShutDownFailOverRequest::MasterNodeShutDownFailOverRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "MasterNodeShutDownFailOver") {
  setMethod(HttpRequest::Method::Post);
}

MasterNodeShutDownFailOverRequest::~MasterNodeShutDownFailOverRequest() {}

std::string MasterNodeShutDownFailOverRequest::getFailMode() const {
  return failMode_;
}

void MasterNodeShutDownFailOverRequest::setFailMode(const std::string &failMode) {
  failMode_ = failMode;
  setParameter(std::string("FailMode"), failMode);
}

std::string MasterNodeShutDownFailOverRequest::getProxyFaultMode() const {
  return proxyFaultMode_;
}

void MasterNodeShutDownFailOverRequest::setProxyFaultMode(const std::string &proxyFaultMode) {
  proxyFaultMode_ = proxyFaultMode;
  setParameter(std::string("ProxyFaultMode"), proxyFaultMode);
}

std::string MasterNodeShutDownFailOverRequest::getProxyInstanceIds() const {
  return proxyInstanceIds_;
}

void MasterNodeShutDownFailOverRequest::setProxyInstanceIds(const std::string &proxyInstanceIds) {
  proxyInstanceIds_ = proxyInstanceIds;
  setParameter(std::string("ProxyInstanceIds"), proxyInstanceIds);
}

std::string MasterNodeShutDownFailOverRequest::getDBNodes() const {
  return dBNodes_;
}

void MasterNodeShutDownFailOverRequest::setDBNodes(const std::string &dBNodes) {
  dBNodes_ = dBNodes;
  setParameter(std::string("DBNodes"), dBNodes);
}

std::string MasterNodeShutDownFailOverRequest::getDBFaultMode() const {
  return dBFaultMode_;
}

void MasterNodeShutDownFailOverRequest::setDBFaultMode(const std::string &dBFaultMode) {
  dBFaultMode_ = dBFaultMode;
  setParameter(std::string("DBFaultMode"), dBFaultMode);
}

std::string MasterNodeShutDownFailOverRequest::getInstanceId() const {
  return instanceId_;
}

void MasterNodeShutDownFailOverRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string MasterNodeShutDownFailOverRequest::getCategory() const {
  return category_;
}

void MasterNodeShutDownFailOverRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

