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

#include <alibabacloud/ecs/model/CreateImagePipelineRequest.h>

using AlibabaCloud::Ecs::Model::CreateImagePipelineRequest;

CreateImagePipelineRequest::CreateImagePipelineRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateImagePipeline") {
  setMethod(HttpRequest::Method::Post);
}

CreateImagePipelineRequest::~CreateImagePipelineRequest() {}

std::string CreateImagePipelineRequest::getBaseImageType() const {
  return baseImageType_;
}

void CreateImagePipelineRequest::setBaseImageType(const std::string &baseImageType) {
  baseImageType_ = baseImageType;
  setParameter(std::string("BaseImageType"), baseImageType);
}

long CreateImagePipelineRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateImagePipelineRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateImagePipelineRequest::getClientToken() const {
  return clientToken_;
}

void CreateImagePipelineRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<std::string> CreateImagePipelineRequest::getToRegionId() const {
  return toRegionId_;
}

void CreateImagePipelineRequest::setToRegionId(const std::vector<std::string> &toRegionId) {
  toRegionId_ = toRegionId;
}

int CreateImagePipelineRequest::getInternetMaxBandwidthOut() const {
  return internetMaxBandwidthOut_;
}

void CreateImagePipelineRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut) {
  internetMaxBandwidthOut_ = internetMaxBandwidthOut;
  setParameter(std::string("InternetMaxBandwidthOut"), std::to_string(internetMaxBandwidthOut));
}

std::string CreateImagePipelineRequest::getDescription() const {
  return description_;
}

void CreateImagePipelineRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateImagePipelineRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateImagePipelineRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateImagePipelineRequest::getRegionId() const {
  return regionId_;
}

void CreateImagePipelineRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateImagePipelineRequest::getImageName() const {
  return imageName_;
}

void CreateImagePipelineRequest::setImageName(const std::string &imageName) {
  imageName_ = imageName;
  setParameter(std::string("ImageName"), imageName);
}

int CreateImagePipelineRequest::getSystemDiskSize() const {
  return systemDiskSize_;
}

void CreateImagePipelineRequest::setSystemDiskSize(int systemDiskSize) {
  systemDiskSize_ = systemDiskSize;
  setParameter(std::string("SystemDiskSize"), std::to_string(systemDiskSize));
}

std::string CreateImagePipelineRequest::getInstanceType() const {
  return instanceType_;
}

void CreateImagePipelineRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::vector<CreateImagePipelineRequest::Tag> CreateImagePipelineRequest::getTag() const {
  return tag_;
}

void CreateImagePipelineRequest::setTag(const std::vector<CreateImagePipelineRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string CreateImagePipelineRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateImagePipelineRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateImagePipelineRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateImagePipelineRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateImagePipelineRequest::getOwnerId() const {
  return ownerId_;
}

void CreateImagePipelineRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateImagePipelineRequest::getBaseImage() const {
  return baseImage_;
}

void CreateImagePipelineRequest::setBaseImage(const std::string &baseImage) {
  baseImage_ = baseImage;
  setParameter(std::string("BaseImage"), baseImage);
}

std::string CreateImagePipelineRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateImagePipelineRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::vector<long> CreateImagePipelineRequest::getAddAccount() const {
  return addAccount_;
}

void CreateImagePipelineRequest::setAddAccount(const std::vector<long> &addAccount) {
  addAccount_ = addAccount;
}

bool CreateImagePipelineRequest::getDeleteInstanceOnFailure() const {
  return deleteInstanceOnFailure_;
}

void CreateImagePipelineRequest::setDeleteInstanceOnFailure(bool deleteInstanceOnFailure) {
  deleteInstanceOnFailure_ = deleteInstanceOnFailure;
  setParameter(std::string("DeleteInstanceOnFailure"), deleteInstanceOnFailure ? "true" : "false");
}

std::string CreateImagePipelineRequest::getName() const {
  return name_;
}

void CreateImagePipelineRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateImagePipelineRequest::getBuildContent() const {
  return buildContent_;
}

void CreateImagePipelineRequest::setBuildContent(const std::string &buildContent) {
  buildContent_ = buildContent;
  setParameter(std::string("BuildContent"), buildContent);
}

