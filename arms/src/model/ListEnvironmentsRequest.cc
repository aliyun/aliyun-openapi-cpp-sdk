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

#include <alibabacloud/arms/model/ListEnvironmentsRequest.h>

using AlibabaCloud::ARMS::Model::ListEnvironmentsRequest;

ListEnvironmentsRequest::ListEnvironmentsRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListEnvironments") {
  setMethod(HttpRequest::Method::Post);
}

ListEnvironmentsRequest::~ListEnvironmentsRequest() {}

std::string ListEnvironmentsRequest::getFilterRegionIds() const {
  return filterRegionIds_;
}

void ListEnvironmentsRequest::setFilterRegionIds(const std::string &filterRegionIds) {
  filterRegionIds_ = filterRegionIds;
  setParameter(std::string("FilterRegionIds"), filterRegionIds);
}

std::string ListEnvironmentsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListEnvironmentsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListEnvironmentsRequest::getRegionId() const {
  return regionId_;
}

void ListEnvironmentsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListEnvironmentsRequest::getAddonName() const {
  return addonName_;
}

void ListEnvironmentsRequest::setAddonName(const std::string &addonName) {
  addonName_ = addonName;
  setParameter(std::string("AddonName"), addonName);
}

std::string ListEnvironmentsRequest::getEnvironmentType() const {
  return environmentType_;
}

void ListEnvironmentsRequest::setEnvironmentType(const std::string &environmentType) {
  environmentType_ = environmentType;
  setParameter(std::string("EnvironmentType"), environmentType);
}

std::vector<ListEnvironmentsRequest::Tag> ListEnvironmentsRequest::getTag() const {
  return tag_;
}

void ListEnvironmentsRequest::setTag(const std::vector<ListEnvironmentsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

std::string ListEnvironmentsRequest::getBindResourceId() const {
  return bindResourceId_;
}

void ListEnvironmentsRequest::setBindResourceId(const std::string &bindResourceId) {
  bindResourceId_ = bindResourceId;
  setParameter(std::string("BindResourceId"), bindResourceId);
}

std::string ListEnvironmentsRequest::getFeePackage() const {
  return feePackage_;
}

void ListEnvironmentsRequest::setFeePackage(const std::string &feePackage) {
  feePackage_ = feePackage;
  setParameter(std::string("FeePackage"), feePackage);
}

