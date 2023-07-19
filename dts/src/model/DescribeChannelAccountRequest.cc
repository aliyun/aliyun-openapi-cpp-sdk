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

#include <alibabacloud/dts/model/DescribeChannelAccountRequest.h>

using AlibabaCloud::Dts::Model::DescribeChannelAccountRequest;

DescribeChannelAccountRequest::DescribeChannelAccountRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeChannelAccount") {
  setMethod(HttpRequest::Method::Post);
}

DescribeChannelAccountRequest::~DescribeChannelAccountRequest() {}

std::string DescribeChannelAccountRequest::getType() const {
  return type_;
}

void DescribeChannelAccountRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeChannelAccountRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeChannelAccountRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeChannelAccountRequest::getRegionId() const {
  return regionId_;
}

void DescribeChannelAccountRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeChannelAccountRequest::getDtsJobId() const {
  return dtsJobId_;
}

void DescribeChannelAccountRequest::setDtsJobId(const std::string &dtsJobId) {
  dtsJobId_ = dtsJobId;
  setParameter(std::string("DtsJobId"), dtsJobId);
}

std::string DescribeChannelAccountRequest::getOriginType() const {
  return originType_;
}

void DescribeChannelAccountRequest::setOriginType(const std::string &originType) {
  originType_ = originType;
  setParameter(std::string("OriginType"), originType);
}

std::string DescribeChannelAccountRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeChannelAccountRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string DescribeChannelAccountRequest::getTags() const {
  return tags_;
}

void DescribeChannelAccountRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string DescribeChannelAccountRequest::getRegion() const {
  return region_;
}

void DescribeChannelAccountRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

