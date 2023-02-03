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

#include <alibabacloud/mse/model/UpdateMigrationTaskRequest.h>

using AlibabaCloud::Mse::Model::UpdateMigrationTaskRequest;

UpdateMigrationTaskRequest::UpdateMigrationTaskRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateMigrationTask") {
  setMethod(HttpRequest::Method::Post);
}

UpdateMigrationTaskRequest::~UpdateMigrationTaskRequest() {}

std::string UpdateMigrationTaskRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateMigrationTaskRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateMigrationTaskRequest::getTargetClusterUrl() const {
  return targetClusterUrl_;
}

void UpdateMigrationTaskRequest::setTargetClusterUrl(const std::string &targetClusterUrl) {
  targetClusterUrl_ = targetClusterUrl;
  setParameter(std::string("TargetClusterUrl"), targetClusterUrl);
}

std::string UpdateMigrationTaskRequest::getOriginInstanceAddress() const {
  return originInstanceAddress_;
}

void UpdateMigrationTaskRequest::setOriginInstanceAddress(const std::string &originInstanceAddress) {
  originInstanceAddress_ = originInstanceAddress;
  setParameter(std::string("OriginInstanceAddress"), originInstanceAddress);
}

std::string UpdateMigrationTaskRequest::getRequestPars() const {
  return requestPars_;
}

void UpdateMigrationTaskRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string UpdateMigrationTaskRequest::getId() const {
  return id_;
}

void UpdateMigrationTaskRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("Id"), id);
}

std::string UpdateMigrationTaskRequest::getOriginInstanceName() const {
  return originInstanceName_;
}

void UpdateMigrationTaskRequest::setOriginInstanceName(const std::string &originInstanceName) {
  originInstanceName_ = originInstanceName;
  setParameter(std::string("OriginInstanceName"), originInstanceName);
}

std::string UpdateMigrationTaskRequest::getProjectDesc() const {
  return projectDesc_;
}

void UpdateMigrationTaskRequest::setProjectDesc(const std::string &projectDesc) {
  projectDesc_ = projectDesc;
  setParameter(std::string("ProjectDesc"), projectDesc);
}

std::string UpdateMigrationTaskRequest::getOriginInstanceNamespace() const {
  return originInstanceNamespace_;
}

void UpdateMigrationTaskRequest::setOriginInstanceNamespace(const std::string &originInstanceNamespace) {
  originInstanceNamespace_ = originInstanceNamespace;
  setParameter(std::string("OriginInstanceNamespace"), originInstanceNamespace);
}

std::string UpdateMigrationTaskRequest::getClusterType() const {
  return clusterType_;
}

void UpdateMigrationTaskRequest::setClusterType(const std::string &clusterType) {
  clusterType_ = clusterType;
  setParameter(std::string("ClusterType"), clusterType);
}

std::string UpdateMigrationTaskRequest::getTargetInstanceId() const {
  return targetInstanceId_;
}

void UpdateMigrationTaskRequest::setTargetInstanceId(const std::string &targetInstanceId) {
  targetInstanceId_ = targetInstanceId;
  setParameter(std::string("TargetInstanceId"), targetInstanceId);
}

std::string UpdateMigrationTaskRequest::getTargetClusterName() const {
  return targetClusterName_;
}

void UpdateMigrationTaskRequest::setTargetClusterName(const std::string &targetClusterName) {
  targetClusterName_ = targetClusterName;
  setParameter(std::string("TargetClusterName"), targetClusterName);
}

std::string UpdateMigrationTaskRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateMigrationTaskRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

