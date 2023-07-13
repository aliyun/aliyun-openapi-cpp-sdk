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

#include <alibabacloud/mse/model/CreateClusterRequest.h>

using AlibabaCloud::Mse::Model::CreateClusterRequest;

CreateClusterRequest::CreateClusterRequest()
    : RpcServiceRequest("mse", "2019-05-31", "CreateCluster") {
  setMethod(HttpRequest::Method::Post);
}

CreateClusterRequest::~CreateClusterRequest() {}

std::string CreateClusterRequest::getClusterSpecification() const {
  return clusterSpecification_;
}

void CreateClusterRequest::setClusterSpecification(const std::string &clusterSpecification) {
  clusterSpecification_ = clusterSpecification;
  setParameter(std::string("ClusterSpecification"), clusterSpecification);
}

std::string CreateClusterRequest::getMseSessionId() const {
  return mseSessionId_;
}

void CreateClusterRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string CreateClusterRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateClusterRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateClusterRequest::getRequestPars() const {
  return requestPars_;
}

void CreateClusterRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::vector<CreateClusterRequest::Tag> CreateClusterRequest::getTag() const {
  return tag_;
}

void CreateClusterRequest::setTag(const std::vector<CreateClusterRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateClusterRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateClusterRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateClusterRequest::getClusterType() const {
  return clusterType_;
}

void CreateClusterRequest::setClusterType(const std::string &clusterType) {
  clusterType_ = clusterType;
  setParameter(std::string("ClusterType"), clusterType);
}

std::string CreateClusterRequest::getInstanceName() const {
  return instanceName_;
}

void CreateClusterRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string CreateClusterRequest::getNetType() const {
  return netType_;
}

void CreateClusterRequest::setNetType(const std::string &netType) {
  netType_ = netType;
  setParameter(std::string("NetType"), netType);
}

std::string CreateClusterRequest::getMseVersion() const {
  return mseVersion_;
}

void CreateClusterRequest::setMseVersion(const std::string &mseVersion) {
  mseVersion_ = mseVersion;
  setParameter(std::string("MseVersion"), mseVersion);
}

std::string CreateClusterRequest::getRegion() const {
  return region_;
}

void CreateClusterRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::string CreateClusterRequest::getPubSlbSpecification() const {
  return pubSlbSpecification_;
}

void CreateClusterRequest::setPubSlbSpecification(const std::string &pubSlbSpecification) {
  pubSlbSpecification_ = pubSlbSpecification;
  setParameter(std::string("PubSlbSpecification"), pubSlbSpecification);
}

std::string CreateClusterRequest::getPrivateSlbSpecification() const {
  return privateSlbSpecification_;
}

void CreateClusterRequest::setPrivateSlbSpecification(const std::string &privateSlbSpecification) {
  privateSlbSpecification_ = privateSlbSpecification;
  setParameter(std::string("PrivateSlbSpecification"), privateSlbSpecification);
}

int CreateClusterRequest::getInstanceCount() const {
  return instanceCount_;
}

void CreateClusterRequest::setInstanceCount(int instanceCount) {
  instanceCount_ = instanceCount;
  setParameter(std::string("InstanceCount"), std::to_string(instanceCount));
}

std::string CreateClusterRequest::getConnectionType() const {
  return connectionType_;
}

void CreateClusterRequest::setConnectionType(const std::string &connectionType) {
  connectionType_ = connectionType;
  setParameter(std::string("ConnectionType"), connectionType);
}

std::string CreateClusterRequest::getClusterVersion() const {
  return clusterVersion_;
}

void CreateClusterRequest::setClusterVersion(const std::string &clusterVersion) {
  clusterVersion_ = clusterVersion;
  setParameter(std::string("ClusterVersion"), clusterVersion);
}

int CreateClusterRequest::getDiskCapacity() const {
  return diskCapacity_;
}

void CreateClusterRequest::setDiskCapacity(int diskCapacity) {
  diskCapacity_ = diskCapacity;
  setParameter(std::string("DiskCapacity"), std::to_string(diskCapacity));
}

std::string CreateClusterRequest::getDiskType() const {
  return diskType_;
}

void CreateClusterRequest::setDiskType(const std::string &diskType) {
  diskType_ = diskType;
  setParameter(std::string("DiskType"), diskType);
}

std::string CreateClusterRequest::getPubNetworkFlow() const {
  return pubNetworkFlow_;
}

void CreateClusterRequest::setPubNetworkFlow(const std::string &pubNetworkFlow) {
  pubNetworkFlow_ = pubNetworkFlow;
  setParameter(std::string("PubNetworkFlow"), pubNetworkFlow);
}

std::string CreateClusterRequest::getVpcId() const {
  return vpcId_;
}

void CreateClusterRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateClusterRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void CreateClusterRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string CreateClusterRequest::getChargeType() const {
  return chargeType_;
}

void CreateClusterRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

