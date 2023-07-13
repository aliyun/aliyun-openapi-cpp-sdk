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

#include <alibabacloud/mse/model/UpgradeClusterRequest.h>

using AlibabaCloud::Mse::Model::UpgradeClusterRequest;

UpgradeClusterRequest::UpgradeClusterRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpgradeCluster") {
  setMethod(HttpRequest::Method::Post);
}

UpgradeClusterRequest::~UpgradeClusterRequest() {}

std::string UpgradeClusterRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpgradeClusterRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpgradeClusterRequest::getRequestPars() const {
  return requestPars_;
}

void UpgradeClusterRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string UpgradeClusterRequest::getUpgradeVersion() const {
  return upgradeVersion_;
}

void UpgradeClusterRequest::setUpgradeVersion(const std::string &upgradeVersion) {
  upgradeVersion_ = upgradeVersion;
  setParameter(std::string("UpgradeVersion"), upgradeVersion);
}

std::string UpgradeClusterRequest::getInstanceId() const {
  return instanceId_;
}

void UpgradeClusterRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpgradeClusterRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpgradeClusterRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

