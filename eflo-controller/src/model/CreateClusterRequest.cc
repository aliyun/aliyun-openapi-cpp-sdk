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

#include <alibabacloud/eflo-controller/model/CreateClusterRequest.h>

using AlibabaCloud::Eflo_controller::Model::CreateClusterRequest;

CreateClusterRequest::CreateClusterRequest()
    : RpcServiceRequest("eflo-controller", "2022-12-15", "CreateCluster") {
  setMethod(HttpRequest::Method::Post);
}

CreateClusterRequest::~CreateClusterRequest() {}

std::vector<CreateClusterRequest::Components> CreateClusterRequest::getComponents() const {
  return components_;
}

void CreateClusterRequest::setComponents(const std::vector<CreateClusterRequest::Components> &components) {
  components_ = components;
  for(int dep1 = 0; dep1 != components.size(); dep1++) {
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".ComponentType", components[dep1].componentType);
    setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".ComponentConfig.BasicArgs", std::to_string(components[dep1].componentConfig.basicArgs));
    for(int dep2 = 0; dep2 != components[dep1].componentConfig.nodeUnits.size(); dep2++) {
      setBodyParameter(std::string("Components") + "." + std::to_string(dep1 + 1) + ".ComponentConfig.NodeUnits." + std::to_string(dep2 + 1), std::to_string(components[dep1].componentConfig.nodeUnits[dep2]));
    }
  }
}

std::string CreateClusterRequest::getClusterName() const {
  return clusterName_;
}

void CreateClusterRequest::setClusterName(const std::string &clusterName) {
  clusterName_ = clusterName;
  setBodyParameter(std::string("ClusterName"), clusterName);
}

CreateClusterRequest::Networks CreateClusterRequest::getNetworks() const {
  return networks_;
}

void CreateClusterRequest::setNetworks(const CreateClusterRequest::Networks &networks) {
  networks_ = networks;
  setBodyParameter(std::string("Networks") + ".NewVpdInfo.MonitorVswitchId", networks.newVpdInfo.monitorVswitchId);
  for(int dep1 = 0; dep1 != networks.newVpdInfo.vpdSubnets.size(); dep1++) {
    setBodyParameter(std::string("Networks") + ".NewVpdInfo.VpdSubnets." + std::to_string(dep1 + 1) + ".SubnetType", networks.newVpdInfo.vpdSubnets[dep1].subnetType);
    setBodyParameter(std::string("Networks") + ".NewVpdInfo.VpdSubnets." + std::to_string(dep1 + 1) + ".ZoneId", networks.newVpdInfo.vpdSubnets[dep1].zoneId);
    setBodyParameter(std::string("Networks") + ".NewVpdInfo.VpdSubnets." + std::to_string(dep1 + 1) + ".SubnetCidr", networks.newVpdInfo.vpdSubnets[dep1].subnetCidr);
  }
  setBodyParameter(std::string("Networks") + ".NewVpdInfo.CloudLinkId", networks.newVpdInfo.cloudLinkId);
  setBodyParameter(std::string("Networks") + ".NewVpdInfo.VpdCidr", networks.newVpdInfo.vpdCidr);
  setBodyParameter(std::string("Networks") + ".NewVpdInfo.CloudLinkCidr", networks.newVpdInfo.cloudLinkCidr);
  setBodyParameter(std::string("Networks") + ".NewVpdInfo.CenId", networks.newVpdInfo.cenId);
  setBodyParameter(std::string("Networks") + ".NewVpdInfo.MonitorVpcId", networks.newVpdInfo.monitorVpcId);
}

std::string CreateClusterRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateClusterRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateClusterRequest::getClusterDescription() const {
  return clusterDescription_;
}

void CreateClusterRequest::setClusterDescription(const std::string &clusterDescription) {
  clusterDescription_ = clusterDescription;
  setBodyParameter(std::string("ClusterDescription"), clusterDescription);
}

std::vector<CreateClusterRequest::NodeGroups> CreateClusterRequest::getNodeGroups() const {
  return nodeGroups_;
}

void CreateClusterRequest::setNodeGroups(const std::vector<CreateClusterRequest::NodeGroups> &nodeGroups) {
  nodeGroups_ = nodeGroups;
  for(int dep1 = 0; dep1 != nodeGroups.size(); dep1++) {
    setBodyParameter(std::string("NodeGroups") + "." + std::to_string(dep1 + 1) + ".NodeGroupName", nodeGroups[dep1].nodeGroupName);
    for(int dep2 = 0; dep2 != nodeGroups[dep1].nodes.size(); dep2++) {
      setBodyParameter(std::string("NodeGroups") + "." + std::to_string(dep1 + 1) + ".Nodes." + std::to_string(dep2 + 1) + ".Hostname", nodeGroups[dep1].nodes[dep2].hostname);
      setBodyParameter(std::string("NodeGroups") + "." + std::to_string(dep1 + 1) + ".Nodes." + std::to_string(dep2 + 1) + ".LoginPassword", nodeGroups[dep1].nodes[dep2].loginPassword);
      setBodyParameter(std::string("NodeGroups") + "." + std::to_string(dep1 + 1) + ".Nodes." + std::to_string(dep2 + 1) + ".NodeId", nodeGroups[dep1].nodes[dep2].nodeId);
    }
    setBodyParameter(std::string("NodeGroups") + "." + std::to_string(dep1 + 1) + ".ImageId", nodeGroups[dep1].imageId);
    setBodyParameter(std::string("NodeGroups") + "." + std::to_string(dep1 + 1) + ".NodeGroupDescription", nodeGroups[dep1].nodeGroupDescription);
    setBodyParameter(std::string("NodeGroups") + "." + std::to_string(dep1 + 1) + ".ZoneId", nodeGroups[dep1].zoneId);
    setBodyParameter(std::string("NodeGroups") + "." + std::to_string(dep1 + 1) + ".MachineType", nodeGroups[dep1].machineType);
  }
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

bool CreateClusterRequest::getIgnoreFailedNodeTasks() const {
  return ignoreFailedNodeTasks_;
}

void CreateClusterRequest::setIgnoreFailedNodeTasks(bool ignoreFailedNodeTasks) {
  ignoreFailedNodeTasks_ = ignoreFailedNodeTasks;
  setBodyParameter(std::string("IgnoreFailedNodeTasks"), ignoreFailedNodeTasks ? "true" : "false");
}

std::string CreateClusterRequest::getClusterType() const {
  return clusterType_;
}

void CreateClusterRequest::setClusterType(const std::string &clusterType) {
  clusterType_ = clusterType;
  setBodyParameter(std::string("ClusterType"), clusterType);
}

