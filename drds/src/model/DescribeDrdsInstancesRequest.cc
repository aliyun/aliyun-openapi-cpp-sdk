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

#include <alibabacloud/drds/model/DescribeDrdsInstancesRequest.h>

using AlibabaCloud::Drds::Model::DescribeDrdsInstancesRequest;

DescribeDrdsInstancesRequest::DescribeDrdsInstancesRequest()
    : RpcServiceRequest("drds", "2019-01-23", "DescribeDrdsInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDrdsInstancesRequest::~DescribeDrdsInstancesRequest() {}

std::string DescribeDrdsInstancesRequest::getDescription() const {
  return description_;
}

void DescribeDrdsInstancesRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string DescribeDrdsInstancesRequest::getProductVersion() const {
  return productVersion_;
}

void DescribeDrdsInstancesRequest::setProductVersion(const std::string &productVersion) {
  productVersion_ = productVersion;
  setParameter(std::string("ProductVersion"), productVersion);
}

std::string DescribeDrdsInstancesRequest::getType() const {
  return type_;
}

void DescribeDrdsInstancesRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int DescribeDrdsInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDrdsInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDrdsInstancesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDrdsInstancesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDrdsInstancesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDrdsInstancesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

bool DescribeDrdsInstancesRequest::getExpired() const {
  return expired_;
}

void DescribeDrdsInstancesRequest::setExpired(bool expired) {
  expired_ = expired;
  setParameter(std::string("Expired"), expired ? "true" : "false");
}

std::string DescribeDrdsInstancesRequest::getRegionId() const {
  return regionId_;
}

void DescribeDrdsInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeDrdsInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDrdsInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeDrdsInstancesRequest::Tag> DescribeDrdsInstancesRequest::getTag() const {
  return tag_;
}

void DescribeDrdsInstancesRequest::setTag(const std::vector<DescribeDrdsInstancesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

bool DescribeDrdsInstancesRequest::getMix() const {
  return mix_;
}

void DescribeDrdsInstancesRequest::setMix(bool mix) {
  mix_ = mix;
  setParameter(std::string("Mix"), mix ? "true" : "false");
}

