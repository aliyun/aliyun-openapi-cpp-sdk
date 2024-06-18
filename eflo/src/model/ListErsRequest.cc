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

#include <alibabacloud/eflo/model/ListErsRequest.h>

using AlibabaCloud::Eflo::Model::ListErsRequest;

ListErsRequest::ListErsRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "ListErs") {
  setMethod(HttpRequest::Method::Post);
}

ListErsRequest::~ListErsRequest() {}

std::string ListErsRequest::getMasterZoneId() const {
  return masterZoneId_;
}

void ListErsRequest::setMasterZoneId(const std::string &masterZoneId) {
  masterZoneId_ = masterZoneId;
  setBodyParameter(std::string("MasterZoneId"), masterZoneId);
}

int ListErsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListErsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListErsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListErsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListErsRequest::getRegionId() const {
  return regionId_;
}

void ListErsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListErsRequest::getPageSize() const {
  return pageSize_;
}

void ListErsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListErsRequest::getInstanceType() const {
  return instanceType_;
}

void ListErsRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setBodyParameter(std::string("InstanceType"), instanceType);
}

std::string ListErsRequest::getErId() const {
  return erId_;
}

void ListErsRequest::setErId(const std::string &erId) {
  erId_ = erId;
  setBodyParameter(std::string("ErId"), erId);
}

std::string ListErsRequest::getErName() const {
  return erName_;
}

void ListErsRequest::setErName(const std::string &erName) {
  erName_ = erName;
  setBodyParameter(std::string("ErName"), erName);
}

std::string ListErsRequest::getInstanceId() const {
  return instanceId_;
}

void ListErsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

bool ListErsRequest::getEnablePage() const {
  return enablePage_;
}

void ListErsRequest::setEnablePage(bool enablePage) {
  enablePage_ = enablePage;
  setBodyParameter(std::string("EnablePage"), enablePage ? "true" : "false");
}

