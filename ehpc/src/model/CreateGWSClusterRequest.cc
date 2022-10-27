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

#include <alibabacloud/ehpc/model/CreateGWSClusterRequest.h>

using AlibabaCloud::EHPC::Model::CreateGWSClusterRequest;

CreateGWSClusterRequest::CreateGWSClusterRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "CreateGWSCluster") {
  setMethod(HttpRequest::Method::Get);
}

CreateGWSClusterRequest::~CreateGWSClusterRequest() {}

std::string CreateGWSClusterRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateGWSClusterRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateGWSClusterRequest::getClusterType() const {
  return clusterType_;
}

void CreateGWSClusterRequest::setClusterType(const std::string &clusterType) {
  clusterType_ = clusterType;
  setParameter(std::string("ClusterType"), clusterType);
}

std::string CreateGWSClusterRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateGWSClusterRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateGWSClusterRequest::getVpcId() const {
  return vpcId_;
}

void CreateGWSClusterRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateGWSClusterRequest::getName() const {
  return name_;
}

void CreateGWSClusterRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

