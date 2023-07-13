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

#include <alibabacloud/mse/model/UpdateNacosClusterRequest.h>

using AlibabaCloud::Mse::Model::UpdateNacosClusterRequest;

UpdateNacosClusterRequest::UpdateNacosClusterRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateNacosCluster") {
  setMethod(HttpRequest::Method::Post);
}

UpdateNacosClusterRequest::~UpdateNacosClusterRequest() {}

std::string UpdateNacosClusterRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateNacosClusterRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateNacosClusterRequest::getClusterName() const {
  return clusterName_;
}

void UpdateNacosClusterRequest::setClusterName(const std::string &clusterName) {
  clusterName_ = clusterName;
  setParameter(std::string("ClusterName"), clusterName);
}

int UpdateNacosClusterRequest::getCheckPort() const {
  return checkPort_;
}

void UpdateNacosClusterRequest::setCheckPort(int checkPort) {
  checkPort_ = checkPort;
  setParameter(std::string("CheckPort"), std::to_string(checkPort));
}

std::string UpdateNacosClusterRequest::getNamespaceId() const {
  return namespaceId_;
}

void UpdateNacosClusterRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string UpdateNacosClusterRequest::getServiceName() const {
  return serviceName_;
}

void UpdateNacosClusterRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string UpdateNacosClusterRequest::getGroupName() const {
  return groupName_;
}

void UpdateNacosClusterRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string UpdateNacosClusterRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateNacosClusterRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateNacosClusterRequest::getHealthChecker() const {
  return healthChecker_;
}

void UpdateNacosClusterRequest::setHealthChecker(const std::string &healthChecker) {
  healthChecker_ = healthChecker;
  setParameter(std::string("HealthChecker"), healthChecker);
}

std::string UpdateNacosClusterRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateNacosClusterRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

bool UpdateNacosClusterRequest::getUseInstancePortForCheck() const {
  return useInstancePortForCheck_;
}

void UpdateNacosClusterRequest::setUseInstancePortForCheck(bool useInstancePortForCheck) {
  useInstancePortForCheck_ = useInstancePortForCheck;
  setParameter(std::string("UseInstancePortForCheck"), useInstancePortForCheck ? "true" : "false");
}

