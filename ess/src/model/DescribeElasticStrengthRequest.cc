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

#include <alibabacloud/ess/model/DescribeElasticStrengthRequest.h>

using AlibabaCloud::Ess::Model::DescribeElasticStrengthRequest;

DescribeElasticStrengthRequest::DescribeElasticStrengthRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DescribeElasticStrength") {
  setMethod(HttpRequest::Method::Get);
}

DescribeElasticStrengthRequest::~DescribeElasticStrengthRequest() {}

std::string DescribeElasticStrengthRequest::getImageId() const {
  return imageId_;
}

void DescribeElasticStrengthRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::vector<std::string> DescribeElasticStrengthRequest::getDataDiskCategories() const {
  return dataDiskCategories_;
}

void DescribeElasticStrengthRequest::setDataDiskCategories(const std::vector<std::string> &dataDiskCategories) {
  dataDiskCategories_ = dataDiskCategories;
}

std::string DescribeElasticStrengthRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void DescribeElasticStrengthRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::vector<std::string> DescribeElasticStrengthRequest::getVSwitchIds() const {
  return vSwitchIds_;
}

void DescribeElasticStrengthRequest::setVSwitchIds(const std::vector<std::string> &vSwitchIds) {
  vSwitchIds_ = vSwitchIds;
}

std::vector<std::string> DescribeElasticStrengthRequest::getInstanceTypes() const {
  return instanceTypes_;
}

void DescribeElasticStrengthRequest::setInstanceTypes(const std::vector<std::string> &instanceTypes) {
  instanceTypes_ = instanceTypes;
}

std::string DescribeElasticStrengthRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeElasticStrengthRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeElasticStrengthRequest::getRegionId() const {
  return regionId_;
}

void DescribeElasticStrengthRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeElasticStrengthRequest::getImageName() const {
  return imageName_;
}

void DescribeElasticStrengthRequest::setImageName(const std::string &imageName) {
  imageName_ = imageName;
  setParameter(std::string("ImageName"), imageName);
}

std::vector<std::string> DescribeElasticStrengthRequest::getScalingGroupIds() const {
  return scalingGroupIds_;
}

void DescribeElasticStrengthRequest::setScalingGroupIds(const std::vector<std::string> &scalingGroupIds) {
  scalingGroupIds_ = scalingGroupIds;
}

int DescribeElasticStrengthRequest::getIpv6AddressCount() const {
  return ipv6AddressCount_;
}

void DescribeElasticStrengthRequest::setIpv6AddressCount(int ipv6AddressCount) {
  ipv6AddressCount_ = ipv6AddressCount;
  setParameter(std::string("Ipv6AddressCount"), std::to_string(ipv6AddressCount));
}

std::vector<std::string> DescribeElasticStrengthRequest::getSystemDiskCategories() const {
  return systemDiskCategories_;
}

void DescribeElasticStrengthRequest::setSystemDiskCategories(const std::vector<std::string> &systemDiskCategories) {
  systemDiskCategories_ = systemDiskCategories;
}

std::string DescribeElasticStrengthRequest::getSpotStrategy() const {
  return spotStrategy_;
}

void DescribeElasticStrengthRequest::setSpotStrategy(const std::string &spotStrategy) {
  spotStrategy_ = spotStrategy;
  setParameter(std::string("SpotStrategy"), spotStrategy);
}

std::string DescribeElasticStrengthRequest::getPriorityStrategy() const {
  return priorityStrategy_;
}

void DescribeElasticStrengthRequest::setPriorityStrategy(const std::string &priorityStrategy) {
  priorityStrategy_ = priorityStrategy;
  setParameter(std::string("PriorityStrategy"), priorityStrategy);
}

std::string DescribeElasticStrengthRequest::getImageFamily() const {
  return imageFamily_;
}

void DescribeElasticStrengthRequest::setImageFamily(const std::string &imageFamily) {
  imageFamily_ = imageFamily;
  setParameter(std::string("ImageFamily"), imageFamily);
}

