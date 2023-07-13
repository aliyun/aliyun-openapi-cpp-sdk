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

#include <alibabacloud/mse/model/DeleteNacosInstanceRequest.h>

using AlibabaCloud::Mse::Model::DeleteNacosInstanceRequest;

DeleteNacosInstanceRequest::DeleteNacosInstanceRequest()
    : RpcServiceRequest("mse", "2019-05-31", "DeleteNacosInstance") {
  setMethod(HttpRequest::Method::Post);
}

DeleteNacosInstanceRequest::~DeleteNacosInstanceRequest() {}

std::string DeleteNacosInstanceRequest::getMseSessionId() const {
  return mseSessionId_;
}

void DeleteNacosInstanceRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string DeleteNacosInstanceRequest::getClusterName() const {
  return clusterName_;
}

void DeleteNacosInstanceRequest::setClusterName(const std::string &clusterName) {
  clusterName_ = clusterName;
  setParameter(std::string("ClusterName"), clusterName);
}

bool DeleteNacosInstanceRequest::getEphemeral() const {
  return ephemeral_;
}

void DeleteNacosInstanceRequest::setEphemeral(bool ephemeral) {
  ephemeral_ = ephemeral;
  setParameter(std::string("Ephemeral"), ephemeral ? "true" : "false");
}

std::string DeleteNacosInstanceRequest::getNamespaceId() const {
  return namespaceId_;
}

void DeleteNacosInstanceRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string DeleteNacosInstanceRequest::getServiceName() const {
  return serviceName_;
}

void DeleteNacosInstanceRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string DeleteNacosInstanceRequest::getIp() const {
  return ip_;
}

void DeleteNacosInstanceRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

std::string DeleteNacosInstanceRequest::getGroupName() const {
  return groupName_;
}

void DeleteNacosInstanceRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string DeleteNacosInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteNacosInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int DeleteNacosInstanceRequest::getPort() const {
  return port_;
}

void DeleteNacosInstanceRequest::setPort(int port) {
  port_ = port;
  setParameter(std::string("Port"), std::to_string(port));
}

std::string DeleteNacosInstanceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DeleteNacosInstanceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

