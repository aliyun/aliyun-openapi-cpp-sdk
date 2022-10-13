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

#include <alibabacloud/dataworks-public/model/TestNetworkConnectionRequest.h>

using AlibabaCloud::Dataworks_public::Model::TestNetworkConnectionRequest;

TestNetworkConnectionRequest::TestNetworkConnectionRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "TestNetworkConnection") {
  setMethod(HttpRequest::Method::Post);
}

TestNetworkConnectionRequest::~TestNetworkConnectionRequest() {}

std::string TestNetworkConnectionRequest::getResourceGroup() const {
  return resourceGroup_;
}

void TestNetworkConnectionRequest::setResourceGroup(const std::string &resourceGroup) {
  resourceGroup_ = resourceGroup;
  setParameter(std::string("ResourceGroup"), resourceGroup);
}

std::string TestNetworkConnectionRequest::getDatasourceName() const {
  return datasourceName_;
}

void TestNetworkConnectionRequest::setDatasourceName(const std::string &datasourceName) {
  datasourceName_ = datasourceName;
  setParameter(std::string("DatasourceName"), datasourceName);
}

std::string TestNetworkConnectionRequest::getEnvType() const {
  return envType_;
}

void TestNetworkConnectionRequest::setEnvType(const std::string &envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), envType);
}

long TestNetworkConnectionRequest::getProjectId() const {
  return projectId_;
}

void TestNetworkConnectionRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

