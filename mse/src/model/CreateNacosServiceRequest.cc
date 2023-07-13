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

#include <alibabacloud/mse/model/CreateNacosServiceRequest.h>

using AlibabaCloud::Mse::Model::CreateNacosServiceRequest;

CreateNacosServiceRequest::CreateNacosServiceRequest()
    : RpcServiceRequest("mse", "2019-05-31", "CreateNacosService") {
  setMethod(HttpRequest::Method::Post);
}

CreateNacosServiceRequest::~CreateNacosServiceRequest() {}

std::string CreateNacosServiceRequest::getMseSessionId() const {
  return mseSessionId_;
}

void CreateNacosServiceRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

bool CreateNacosServiceRequest::getEphemeral() const {
  return ephemeral_;
}

void CreateNacosServiceRequest::setEphemeral(bool ephemeral) {
  ephemeral_ = ephemeral;
  setParameter(std::string("Ephemeral"), ephemeral ? "true" : "false");
}

std::string CreateNacosServiceRequest::getNamespaceId() const {
  return namespaceId_;
}

void CreateNacosServiceRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string CreateNacosServiceRequest::getServiceName() const {
  return serviceName_;
}

void CreateNacosServiceRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string CreateNacosServiceRequest::getClusterId() const {
  return clusterId_;
}

void CreateNacosServiceRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string CreateNacosServiceRequest::getGroupName() const {
  return groupName_;
}

void CreateNacosServiceRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string CreateNacosServiceRequest::getInstanceId() const {
  return instanceId_;
}

void CreateNacosServiceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateNacosServiceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void CreateNacosServiceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string CreateNacosServiceRequest::getProtectThreshold() const {
  return protectThreshold_;
}

void CreateNacosServiceRequest::setProtectThreshold(const std::string &protectThreshold) {
  protectThreshold_ = protectThreshold;
  setParameter(std::string("ProtectThreshold"), protectThreshold);
}

