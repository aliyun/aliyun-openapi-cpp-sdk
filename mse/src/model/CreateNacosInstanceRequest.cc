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

#include <alibabacloud/mse/model/CreateNacosInstanceRequest.h>

using AlibabaCloud::Mse::Model::CreateNacosInstanceRequest;

CreateNacosInstanceRequest::CreateNacosInstanceRequest()
    : RpcServiceRequest("mse", "2019-05-31", "CreateNacosInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateNacosInstanceRequest::~CreateNacosInstanceRequest() {}

std::string CreateNacosInstanceRequest::getMseSessionId() const {
  return mseSessionId_;
}

void CreateNacosInstanceRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string CreateNacosInstanceRequest::getMetadata() const {
  return metadata_;
}

void CreateNacosInstanceRequest::setMetadata(const std::string &metadata) {
  metadata_ = metadata;
  setBodyParameter(std::string("Metadata"), metadata);
}

std::string CreateNacosInstanceRequest::getClusterName() const {
  return clusterName_;
}

void CreateNacosInstanceRequest::setClusterName(const std::string &clusterName) {
  clusterName_ = clusterName;
  setParameter(std::string("ClusterName"), clusterName);
}

bool CreateNacosInstanceRequest::getEphemeral() const {
  return ephemeral_;
}

void CreateNacosInstanceRequest::setEphemeral(bool ephemeral) {
  ephemeral_ = ephemeral;
  setParameter(std::string("Ephemeral"), ephemeral ? "true" : "false");
}

std::string CreateNacosInstanceRequest::getNamespaceId() const {
  return namespaceId_;
}

void CreateNacosInstanceRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string CreateNacosInstanceRequest::getIp() const {
  return ip_;
}

void CreateNacosInstanceRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

std::string CreateNacosInstanceRequest::getWeight() const {
  return weight_;
}

void CreateNacosInstanceRequest::setWeight(const std::string &weight) {
  weight_ = weight;
  setParameter(std::string("Weight"), weight);
}

std::string CreateNacosInstanceRequest::getGroupName() const {
  return groupName_;
}

void CreateNacosInstanceRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string CreateNacosInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void CreateNacosInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int CreateNacosInstanceRequest::getPort() const {
  return port_;
}

void CreateNacosInstanceRequest::setPort(int port) {
  port_ = port;
  setParameter(std::string("Port"), std::to_string(port));
}

bool CreateNacosInstanceRequest::getEnabled() const {
  return enabled_;
}

void CreateNacosInstanceRequest::setEnabled(bool enabled) {
  enabled_ = enabled;
  setParameter(std::string("Enabled"), enabled ? "true" : "false");
}

std::string CreateNacosInstanceRequest::getServiceName() const {
  return serviceName_;
}

void CreateNacosInstanceRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string CreateNacosInstanceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void CreateNacosInstanceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

