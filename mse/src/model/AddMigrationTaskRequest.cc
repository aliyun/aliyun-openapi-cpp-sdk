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

#include <alibabacloud/mse/model/AddMigrationTaskRequest.h>

using AlibabaCloud::Mse::Model::AddMigrationTaskRequest;

AddMigrationTaskRequest::AddMigrationTaskRequest()
    : RpcServiceRequest("mse", "2019-05-31", "AddMigrationTask") {
  setMethod(HttpRequest::Method::Post);
}

AddMigrationTaskRequest::~AddMigrationTaskRequest() {}

std::string AddMigrationTaskRequest::getMseSessionId() const {
  return mseSessionId_;
}

void AddMigrationTaskRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string AddMigrationTaskRequest::getTargetClusterUrl() const {
  return targetClusterUrl_;
}

void AddMigrationTaskRequest::setTargetClusterUrl(const std::string &targetClusterUrl) {
  targetClusterUrl_ = targetClusterUrl;
  setParameter(std::string("TargetClusterUrl"), targetClusterUrl);
}

std::string AddMigrationTaskRequest::getOriginInstanceAddress() const {
  return originInstanceAddress_;
}

void AddMigrationTaskRequest::setOriginInstanceAddress(const std::string &originInstanceAddress) {
  originInstanceAddress_ = originInstanceAddress;
  setParameter(std::string("OriginInstanceAddress"), originInstanceAddress);
}

std::string AddMigrationTaskRequest::getRequestPars() const {
  return requestPars_;
}

void AddMigrationTaskRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string AddMigrationTaskRequest::getId() const {
  return id_;
}

void AddMigrationTaskRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("Id"), id);
}

std::string AddMigrationTaskRequest::getOriginInstanceName() const {
  return originInstanceName_;
}

void AddMigrationTaskRequest::setOriginInstanceName(const std::string &originInstanceName) {
  originInstanceName_ = originInstanceName;
  setParameter(std::string("OriginInstanceName"), originInstanceName);
}

std::string AddMigrationTaskRequest::getProjectDesc() const {
  return projectDesc_;
}

void AddMigrationTaskRequest::setProjectDesc(const std::string &projectDesc) {
  projectDesc_ = projectDesc;
  setParameter(std::string("ProjectDesc"), projectDesc);
}

std::string AddMigrationTaskRequest::getOriginInstanceNamespace() const {
  return originInstanceNamespace_;
}

void AddMigrationTaskRequest::setOriginInstanceNamespace(const std::string &originInstanceNamespace) {
  originInstanceNamespace_ = originInstanceNamespace;
  setParameter(std::string("OriginInstanceNamespace"), originInstanceNamespace);
}

std::string AddMigrationTaskRequest::getClusterType() const {
  return clusterType_;
}

void AddMigrationTaskRequest::setClusterType(const std::string &clusterType) {
  clusterType_ = clusterType;
  setParameter(std::string("ClusterType"), clusterType);
}

std::string AddMigrationTaskRequest::getTargetInstanceId() const {
  return targetInstanceId_;
}

void AddMigrationTaskRequest::setTargetInstanceId(const std::string &targetInstanceId) {
  targetInstanceId_ = targetInstanceId;
  setParameter(std::string("TargetInstanceId"), targetInstanceId);
}

std::string AddMigrationTaskRequest::getTargetClusterName() const {
  return targetClusterName_;
}

void AddMigrationTaskRequest::setTargetClusterName(const std::string &targetClusterName) {
  targetClusterName_ = targetClusterName;
  setParameter(std::string("TargetClusterName"), targetClusterName);
}

std::string AddMigrationTaskRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void AddMigrationTaskRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

