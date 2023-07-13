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

#include <alibabacloud/mse/model/UpdateNacosInstanceRequest.h>

using AlibabaCloud::Mse::Model::UpdateNacosInstanceRequest;

UpdateNacosInstanceRequest::UpdateNacosInstanceRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateNacosInstance") {
  setMethod(HttpRequest::Method::Post);
}

UpdateNacosInstanceRequest::~UpdateNacosInstanceRequest() {}

std::string UpdateNacosInstanceRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateNacosInstanceRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateNacosInstanceRequest::getMetadata() const {
  return metadata_;
}

void UpdateNacosInstanceRequest::setMetadata(const std::string &metadata) {
  metadata_ = metadata;
  setBodyParameter(std::string("Metadata"), metadata);
}

std::string UpdateNacosInstanceRequest::getClusterName() const {
  return clusterName_;
}

void UpdateNacosInstanceRequest::setClusterName(const std::string &clusterName) {
  clusterName_ = clusterName;
  setParameter(std::string("ClusterName"), clusterName);
}

bool UpdateNacosInstanceRequest::getEphemeral() const {
  return ephemeral_;
}

void UpdateNacosInstanceRequest::setEphemeral(bool ephemeral) {
  ephemeral_ = ephemeral;
  setParameter(std::string("Ephemeral"), ephemeral ? "true" : "false");
}

std::string UpdateNacosInstanceRequest::getNamespaceId() const {
  return namespaceId_;
}

void UpdateNacosInstanceRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string UpdateNacosInstanceRequest::getIp() const {
  return ip_;
}

void UpdateNacosInstanceRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

std::string UpdateNacosInstanceRequest::getWeight() const {
  return weight_;
}

void UpdateNacosInstanceRequest::setWeight(const std::string &weight) {
  weight_ = weight;
  setParameter(std::string("Weight"), weight);
}

std::string UpdateNacosInstanceRequest::getGroupName() const {
  return groupName_;
}

void UpdateNacosInstanceRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string UpdateNacosInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateNacosInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int UpdateNacosInstanceRequest::getPort() const {
  return port_;
}

void UpdateNacosInstanceRequest::setPort(int port) {
  port_ = port;
  setParameter(std::string("Port"), std::to_string(port));
}

bool UpdateNacosInstanceRequest::getEnabled() const {
  return enabled_;
}

void UpdateNacosInstanceRequest::setEnabled(bool enabled) {
  enabled_ = enabled;
  setParameter(std::string("Enabled"), enabled ? "true" : "false");
}

std::string UpdateNacosInstanceRequest::getServiceName() const {
  return serviceName_;
}

void UpdateNacosInstanceRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string UpdateNacosInstanceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateNacosInstanceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

