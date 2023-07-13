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

#include <alibabacloud/mse/model/RestartClusterRequest.h>

using AlibabaCloud::Mse::Model::RestartClusterRequest;

RestartClusterRequest::RestartClusterRequest()
    : RpcServiceRequest("mse", "2019-05-31", "RestartCluster") {
  setMethod(HttpRequest::Method::Post);
}

RestartClusterRequest::~RestartClusterRequest() {}

std::string RestartClusterRequest::getMseSessionId() const {
  return mseSessionId_;
}

void RestartClusterRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string RestartClusterRequest::getPodNameList() const {
  return podNameList_;
}

void RestartClusterRequest::setPodNameList(const std::string &podNameList) {
  podNameList_ = podNameList;
  setParameter(std::string("PodNameList"), podNameList);
}

std::string RestartClusterRequest::getRequestPars() const {
  return requestPars_;
}

void RestartClusterRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string RestartClusterRequest::getClusterId() const {
  return clusterId_;
}

void RestartClusterRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string RestartClusterRequest::getInstanceId() const {
  return instanceId_;
}

void RestartClusterRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string RestartClusterRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void RestartClusterRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

