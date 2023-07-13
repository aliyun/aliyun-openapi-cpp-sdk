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

#include <alibabacloud/mse/model/UpdateClusterSpecRequest.h>

using AlibabaCloud::Mse::Model::UpdateClusterSpecRequest;

UpdateClusterSpecRequest::UpdateClusterSpecRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateClusterSpec") {
  setMethod(HttpRequest::Method::Post);
}

UpdateClusterSpecRequest::~UpdateClusterSpecRequest() {}

std::string UpdateClusterSpecRequest::getClusterSpecification() const {
  return clusterSpecification_;
}

void UpdateClusterSpecRequest::setClusterSpecification(const std::string &clusterSpecification) {
  clusterSpecification_ = clusterSpecification;
  setParameter(std::string("ClusterSpecification"), clusterSpecification);
}

std::string UpdateClusterSpecRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateClusterSpecRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

int UpdateClusterSpecRequest::getInstanceCount() const {
  return instanceCount_;
}

void UpdateClusterSpecRequest::setInstanceCount(int instanceCount) {
  instanceCount_ = instanceCount;
  setParameter(std::string("InstanceCount"), std::to_string(instanceCount));
}

std::string UpdateClusterSpecRequest::getClusterId() const {
  return clusterId_;
}

void UpdateClusterSpecRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string UpdateClusterSpecRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateClusterSpecRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateClusterSpecRequest::getMseVersion() const {
  return mseVersion_;
}

void UpdateClusterSpecRequest::setMseVersion(const std::string &mseVersion) {
  mseVersion_ = mseVersion;
  setParameter(std::string("MseVersion"), mseVersion);
}

std::string UpdateClusterSpecRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateClusterSpecRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

