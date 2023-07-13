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

#include <alibabacloud/mse/model/DeleteNacosServiceRequest.h>

using AlibabaCloud::Mse::Model::DeleteNacosServiceRequest;

DeleteNacosServiceRequest::DeleteNacosServiceRequest()
    : RpcServiceRequest("mse", "2019-05-31", "DeleteNacosService") {
  setMethod(HttpRequest::Method::Post);
}

DeleteNacosServiceRequest::~DeleteNacosServiceRequest() {}

std::string DeleteNacosServiceRequest::getMseSessionId() const {
  return mseSessionId_;
}

void DeleteNacosServiceRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string DeleteNacosServiceRequest::getNamespaceId() const {
  return namespaceId_;
}

void DeleteNacosServiceRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string DeleteNacosServiceRequest::getServiceName() const {
  return serviceName_;
}

void DeleteNacosServiceRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string DeleteNacosServiceRequest::getGroupName() const {
  return groupName_;
}

void DeleteNacosServiceRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string DeleteNacosServiceRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteNacosServiceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteNacosServiceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DeleteNacosServiceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

