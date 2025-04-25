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

#include <alibabacloud/ess/model/DescribeScalingGroupsRequest.h>

using AlibabaCloud::Ess::Model::DescribeScalingGroupsRequest;

DescribeScalingGroupsRequest::DescribeScalingGroupsRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DescribeScalingGroups") {
  setMethod(HttpRequest::Method::Post);
}

DescribeScalingGroupsRequest::~DescribeScalingGroupsRequest() {}

long DescribeScalingGroupsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeScalingGroupsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeScalingGroupsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeScalingGroupsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeScalingGroupsRequest::getGroupType() const {
  return groupType_;
}

void DescribeScalingGroupsRequest::setGroupType(const std::string &groupType) {
  groupType_ = groupType;
  setParameter(std::string("GroupType"), groupType);
}

std::vector<DescribeScalingGroupsRequest::Tag> DescribeScalingGroupsRequest::getTag() const {
  return tag_;
}

void DescribeScalingGroupsRequest::setTag(const std::vector<DescribeScalingGroupsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

long DescribeScalingGroupsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeScalingGroupsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> DescribeScalingGroupsRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void DescribeScalingGroupsRequest::setScalingGroupId(const std::vector<std::string> &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
}

int DescribeScalingGroupsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeScalingGroupsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeScalingGroupsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeScalingGroupsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeScalingGroupsRequest::getRegionId() const {
  return regionId_;
}

void DescribeScalingGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeScalingGroupsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeScalingGroupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeScalingGroupsRequest::getScalingGroupName20() const {
  return scalingGroupName20_;
}

void DescribeScalingGroupsRequest::setScalingGroupName20(const std::string &scalingGroupName20) {
  scalingGroupName20_ = scalingGroupName20;
  setParameter(std::string("ScalingGroupName.20"), scalingGroupName20);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName19() const {
  return scalingGroupName19_;
}

void DescribeScalingGroupsRequest::setScalingGroupName19(const std::string &scalingGroupName19) {
  scalingGroupName19_ = scalingGroupName19;
  setParameter(std::string("ScalingGroupName.19"), scalingGroupName19);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName18() const {
  return scalingGroupName18_;
}

void DescribeScalingGroupsRequest::setScalingGroupName18(const std::string &scalingGroupName18) {
  scalingGroupName18_ = scalingGroupName18;
  setParameter(std::string("ScalingGroupName.18"), scalingGroupName18);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName17() const {
  return scalingGroupName17_;
}

void DescribeScalingGroupsRequest::setScalingGroupName17(const std::string &scalingGroupName17) {
  scalingGroupName17_ = scalingGroupName17;
  setParameter(std::string("ScalingGroupName.17"), scalingGroupName17);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName16() const {
  return scalingGroupName16_;
}

void DescribeScalingGroupsRequest::setScalingGroupName16(const std::string &scalingGroupName16) {
  scalingGroupName16_ = scalingGroupName16;
  setParameter(std::string("ScalingGroupName.16"), scalingGroupName16);
}

std::string DescribeScalingGroupsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeScalingGroupsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName() const {
  return scalingGroupName_;
}

void DescribeScalingGroupsRequest::setScalingGroupName(const std::string &scalingGroupName) {
  scalingGroupName_ = scalingGroupName;
  setParameter(std::string("ScalingGroupName"), scalingGroupName);
}

std::string DescribeScalingGroupsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeScalingGroupsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName1() const {
  return scalingGroupName1_;
}

void DescribeScalingGroupsRequest::setScalingGroupName1(const std::string &scalingGroupName1) {
  scalingGroupName1_ = scalingGroupName1;
  setParameter(std::string("ScalingGroupName.1"), scalingGroupName1);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName2() const {
  return scalingGroupName2_;
}

void DescribeScalingGroupsRequest::setScalingGroupName2(const std::string &scalingGroupName2) {
  scalingGroupName2_ = scalingGroupName2;
  setParameter(std::string("ScalingGroupName.2"), scalingGroupName2);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName7() const {
  return scalingGroupName7_;
}

void DescribeScalingGroupsRequest::setScalingGroupName7(const std::string &scalingGroupName7) {
  scalingGroupName7_ = scalingGroupName7;
  setParameter(std::string("ScalingGroupName.7"), scalingGroupName7);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName11() const {
  return scalingGroupName11_;
}

void DescribeScalingGroupsRequest::setScalingGroupName11(const std::string &scalingGroupName11) {
  scalingGroupName11_ = scalingGroupName11;
  setParameter(std::string("ScalingGroupName.11"), scalingGroupName11);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName8() const {
  return scalingGroupName8_;
}

void DescribeScalingGroupsRequest::setScalingGroupName8(const std::string &scalingGroupName8) {
  scalingGroupName8_ = scalingGroupName8;
  setParameter(std::string("ScalingGroupName.8"), scalingGroupName8);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName10() const {
  return scalingGroupName10_;
}

void DescribeScalingGroupsRequest::setScalingGroupName10(const std::string &scalingGroupName10) {
  scalingGroupName10_ = scalingGroupName10;
  setParameter(std::string("ScalingGroupName.10"), scalingGroupName10);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName9() const {
  return scalingGroupName9_;
}

void DescribeScalingGroupsRequest::setScalingGroupName9(const std::string &scalingGroupName9) {
  scalingGroupName9_ = scalingGroupName9;
  setParameter(std::string("ScalingGroupName.9"), scalingGroupName9);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName3() const {
  return scalingGroupName3_;
}

void DescribeScalingGroupsRequest::setScalingGroupName3(const std::string &scalingGroupName3) {
  scalingGroupName3_ = scalingGroupName3;
  setParameter(std::string("ScalingGroupName.3"), scalingGroupName3);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName15() const {
  return scalingGroupName15_;
}

void DescribeScalingGroupsRequest::setScalingGroupName15(const std::string &scalingGroupName15) {
  scalingGroupName15_ = scalingGroupName15;
  setParameter(std::string("ScalingGroupName.15"), scalingGroupName15);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName4() const {
  return scalingGroupName4_;
}

void DescribeScalingGroupsRequest::setScalingGroupName4(const std::string &scalingGroupName4) {
  scalingGroupName4_ = scalingGroupName4;
  setParameter(std::string("ScalingGroupName.4"), scalingGroupName4);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName14() const {
  return scalingGroupName14_;
}

void DescribeScalingGroupsRequest::setScalingGroupName14(const std::string &scalingGroupName14) {
  scalingGroupName14_ = scalingGroupName14;
  setParameter(std::string("ScalingGroupName.14"), scalingGroupName14);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName5() const {
  return scalingGroupName5_;
}

void DescribeScalingGroupsRequest::setScalingGroupName5(const std::string &scalingGroupName5) {
  scalingGroupName5_ = scalingGroupName5;
  setParameter(std::string("ScalingGroupName.5"), scalingGroupName5);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName13() const {
  return scalingGroupName13_;
}

void DescribeScalingGroupsRequest::setScalingGroupName13(const std::string &scalingGroupName13) {
  scalingGroupName13_ = scalingGroupName13;
  setParameter(std::string("ScalingGroupName.13"), scalingGroupName13);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName6() const {
  return scalingGroupName6_;
}

void DescribeScalingGroupsRequest::setScalingGroupName6(const std::string &scalingGroupName6) {
  scalingGroupName6_ = scalingGroupName6;
  setParameter(std::string("ScalingGroupName.6"), scalingGroupName6);
}

std::string DescribeScalingGroupsRequest::getScalingGroupName12() const {
  return scalingGroupName12_;
}

void DescribeScalingGroupsRequest::setScalingGroupName12(const std::string &scalingGroupName12) {
  scalingGroupName12_ = scalingGroupName12;
  setParameter(std::string("ScalingGroupName.12"), scalingGroupName12);
}

