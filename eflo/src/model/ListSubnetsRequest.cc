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

#include <alibabacloud/eflo/model/ListSubnetsRequest.h>

using AlibabaCloud::Eflo::Model::ListSubnetsRequest;

ListSubnetsRequest::ListSubnetsRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "ListSubnets") {
  setMethod(HttpRequest::Method::Post);
}

ListSubnetsRequest::~ListSubnetsRequest() {}

std::string ListSubnetsRequest::getType() const {
  return type_;
}

void ListSubnetsRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

int ListSubnetsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListSubnetsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListSubnetsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListSubnetsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListSubnetsRequest::getRegionId() const {
  return regionId_;
}

void ListSubnetsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListSubnetsRequest::getPageSize() const {
  return pageSize_;
}

void ListSubnetsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<ListSubnetsRequest::Tag> ListSubnetsRequest::getTag() const {
  return tag_;
}

void ListSubnetsRequest::setTag(const std::vector<ListSubnetsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setBodyParameter(tagObjStr + ".Value", tagObj.value);
    setBodyParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string ListSubnetsRequest::getSubnetId() const {
  return subnetId_;
}

void ListSubnetsRequest::setSubnetId(const std::string &subnetId) {
  subnetId_ = subnetId;
  setBodyParameter(std::string("SubnetId"), subnetId);
}

std::string ListSubnetsRequest::getVpdId() const {
  return vpdId_;
}

void ListSubnetsRequest::setVpdId(const std::string &vpdId) {
  vpdId_ = vpdId;
  setBodyParameter(std::string("VpdId"), vpdId);
}

bool ListSubnetsRequest::getEnablePage() const {
  return enablePage_;
}

void ListSubnetsRequest::setEnablePage(bool enablePage) {
  enablePage_ = enablePage;
  setBodyParameter(std::string("EnablePage"), enablePage ? "true" : "false");
}

std::string ListSubnetsRequest::getZoneId() const {
  return zoneId_;
}

void ListSubnetsRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setBodyParameter(std::string("ZoneId"), zoneId);
}

std::string ListSubnetsRequest::getSubnetName() const {
  return subnetName_;
}

void ListSubnetsRequest::setSubnetName(const std::string &subnetName) {
  subnetName_ = subnetName;
  setBodyParameter(std::string("SubnetName"), subnetName);
}

std::string ListSubnetsRequest::getStatus() const {
  return status_;
}

void ListSubnetsRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}

