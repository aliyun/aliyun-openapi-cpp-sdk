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

#include <alibabacloud/mse/model/DeleteEngineNamespaceRequest.h>

using AlibabaCloud::Mse::Model::DeleteEngineNamespaceRequest;

DeleteEngineNamespaceRequest::DeleteEngineNamespaceRequest()
    : RpcServiceRequest("mse", "2019-05-31", "DeleteEngineNamespace") {
  setMethod(HttpRequest::Method::Post);
}

DeleteEngineNamespaceRequest::~DeleteEngineNamespaceRequest() {}

std::string DeleteEngineNamespaceRequest::getMseSessionId() const {
  return mseSessionId_;
}

void DeleteEngineNamespaceRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string DeleteEngineNamespaceRequest::getId() const {
  return id_;
}

void DeleteEngineNamespaceRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("Id"), id);
}

std::string DeleteEngineNamespaceRequest::getClusterId() const {
  return clusterId_;
}

void DeleteEngineNamespaceRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DeleteEngineNamespaceRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteEngineNamespaceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteEngineNamespaceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DeleteEngineNamespaceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

