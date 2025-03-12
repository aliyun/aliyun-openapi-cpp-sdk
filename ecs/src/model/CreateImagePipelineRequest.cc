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

std::string CreateImagePipelineRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateImagePipelineRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

CreateImagePipelineRequest::ImageOptions CreateImagePipelineRequest::getImageOptions() const {
  return imageOptions_;
}

void CreateImagePipelineRequest::setImageOptions(const CreateImagePipelineRequest::ImageOptions &imageOptions) {
  imageOptions_ = imageOptions;
  setParameter(std::string("ImageOptions") + ".ImageName", imageOptions.imageName);
  setParameter(std::string("ImageOptions") + ".ImageFamily", imageOptions.imageFamily);
  setParameter(std::string("ImageOptions") + ".Description", imageOptions.description);
  setParameter(std::string("ImageOptions") + ".ImageFeatures.NvmeSupport", imageOptions.imageFeatures.nvmeSupport);
  for(int dep1 = 0; dep1 != imageOptions.imageTags.size(); dep1++) {
    setParameter(std::string("ImageOptions") + ".ImageTags." + std::to_string(dep1 + 1) + ".Key", imageOptions.imageTags[dep1].key);
    setParameter(std::string("ImageOptions") + ".ImageTags." + std::to_string(dep1 + 1) + ".Value", imageOptions.imageTags[dep1].value);
  }
}

int CreateImagePipelineRequest::getSystemDiskSize() const {
  return systemDiskSize_;
}

void CreateImagePipelineRequest::setSystemDiskSize(int systemDiskSize) {
  systemDiskSize_ = systemDiskSize;
  setParameter(std::string("SystemDiskSize"), std::to_string(systemDiskSize));
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

CreateImagePipelineRequest::AdvancedOptions CreateImagePipelineRequest::getAdvancedOptions() const {
  return advancedOptions_;
}

void CreateImagePipelineRequest::setAdvancedOptions(const CreateImagePipelineRequest::AdvancedOptions &advancedOptions) {
  advancedOptions_ = advancedOptions;
  setParameter(std::string("AdvancedOptions") + ".RetainCloudAssistant", advancedOptions.retainCloudAssistant ? "true" : "false");
  setParameter(std::string("AdvancedOptions") + ".SkipBuildImage", advancedOptions.skipBuildImage ? "true" : "false");
  setParameter(std::string("AdvancedOptions") + ".SkipCheckImage", advancedOptions.skipCheckImage ? "true" : "false");
  setParameter(std::string("AdvancedOptions") + ".ImageNameSuffix", advancedOptions.imageNameSuffix);
}

std::string CreateImagePipelineRequest::getRepairMode() const {
  return repairMode_;
}

void CreateImagePipelineRequest::setRepairMode(const std::string &repairMode) {
  repairMode_ = repairMode;
  setParameter(std::string("RepairMode"), repairMode);
}

long CreateImagePipelineRequest::getOwnerId() const {
  return ownerId_;
}

void CreateImagePipelineRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
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

CreateImagePipelineRequest::ImportImageOptions CreateImagePipelineRequest::getImportImageOptions() const {
  return importImageOptions_;
}

void CreateImagePipelineRequest::setImportImageOptions(const CreateImagePipelineRequest::ImportImageOptions &importImageOptions) {
  importImageOptions_ = importImageOptions;
  setParameter(std::string("ImportImageOptions") + ".Architecture", importImageOptions.architecture);
  setParameter(std::string("ImportImageOptions") + ".OSType", importImageOptions.oSType);
  setParameter(std::string("ImportImageOptions") + ".Platform", importImageOptions.platform);
  setParameter(std::string("ImportImageOptions") + ".BootMode", importImageOptions.bootMode);
  setParameter(std::string("ImportImageOptions") + ".LicenseType", importImageOptions.licenseType);
  for(int dep1 = 0; dep1 != importImageOptions.diskDeviceMappings.size(); dep1++) {
    setParameter(std::string("ImportImageOptions") + ".DiskDeviceMappings." + std::to_string(dep1 + 1) + ".OSSBucket", importImageOptions.diskDeviceMappings[dep1].oSSBucket);
    setParameter(std::string("ImportImageOptions") + ".DiskDeviceMappings." + std::to_string(dep1 + 1) + ".OSSObject", importImageOptions.diskDeviceMappings[dep1].oSSObject);
    setParameter(std::string("ImportImageOptions") + ".DiskDeviceMappings." + std::to_string(dep1 + 1) + ".Format", importImageOptions.diskDeviceMappings[dep1].format);
    setParameter(std::string("ImportImageOptions") + ".DiskDeviceMappings." + std::to_string(dep1 + 1) + ".DiskImageSize", std::to_string(importImageOptions.diskDeviceMappings[dep1].diskImageSize));
  }
  setParameter(std::string("ImportImageOptions") + ".Features.NvmeSupport", importImageOptions.features.nvmeSupport);
  setParameter(std::string("ImportImageOptions") + ".RetainImportedImage", importImageOptions.retainImportedImage ? "true" : "false");
}

std::string CreateImagePipelineRequest::getTestContent() const {
  return testContent_;
}

void CreateImagePipelineRequest::setTestContent(const std::string &testContent) {
  testContent_ = testContent;
  setParameter(std::string("TestContent"), testContent);
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

std::string CreateImagePipelineRequest::getInstanceType() const {
  return instanceType_;
}

void CreateImagePipelineRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string CreateImagePipelineRequest::getNvmeSupport() const {
  return nvmeSupport_;
}

void CreateImagePipelineRequest::setNvmeSupport(const std::string &nvmeSupport) {
  nvmeSupport_ = nvmeSupport;
  setParameter(std::string("NvmeSupport"), nvmeSupport);
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

std::string CreateImagePipelineRequest::getBaseImage() const {
  return baseImage_;
}

void CreateImagePipelineRequest::setBaseImage(const std::string &baseImage) {
  baseImage_ = baseImage;
  setParameter(std::string("BaseImage"), baseImage);
}

std::string CreateImagePipelineRequest::getImageFamily() const {
  return imageFamily_;
}

void CreateImagePipelineRequest::setImageFamily(const std::string &imageFamily) {
  imageFamily_ = imageFamily;
  setParameter(std::string("ImageFamily"), imageFamily);
}

std::string CreateImagePipelineRequest::getBuildContent() const {
  return buildContent_;
}

void CreateImagePipelineRequest::setBuildContent(const std::string &buildContent) {
  buildContent_ = buildContent;
  setParameter(std::string("BuildContent"), buildContent);
}

