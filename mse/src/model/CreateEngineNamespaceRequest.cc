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

#include <alibabacloud/mse/model/CreateEngineNamespaceRequest.h>

using AlibabaCloud::Mse::Model::CreateEngineNamespaceRequest;

CreateEngineNamespaceRequest::CreateEngineNamespaceRequest()
    : RpcServiceRequest("mse", "2019-05-31", "CreateEngineNamespace") {
  setMethod(HttpRequest::Method::Post);
}

CreateEngineNamespaceRequest::~CreateEngineNamespaceRequest() {}

std::string CreateEngineNamespaceRequest::getMseSessionId() const {
  return mseSessionId_;
}

void CreateEngineNamespaceRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

int CreateEngineNamespaceRequest::getServiceCount() const {
  return serviceCount_;
}

void CreateEngineNamespaceRequest::setServiceCount(int serviceCount) {
  serviceCount_ = serviceCount;
  setParameter(std::string("ServiceCount"), std::to_string(serviceCount));
}

std::string CreateEngineNamespaceRequest::getId() const {
  return id_;
}

void CreateEngineNamespaceRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("Id"), id);
}

std::string CreateEngineNamespaceRequest::getClusterId() const {
  return clusterId_;
}

void CreateEngineNamespaceRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string CreateEngineNamespaceRequest::getInstanceId() const {
  return instanceId_;
}

void CreateEngineNamespaceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateEngineNamespaceRequest::getName() const {
  return name_;
}

void CreateEngineNamespaceRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateEngineNamespaceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void CreateEngineNamespaceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string CreateEngineNamespaceRequest::getDesc() const {
  return desc_;
}

void CreateEngineNamespaceRequest::setDesc(const std::string &desc) {
  desc_ = desc;
  setParameter(std::string("Desc"), desc);
}

