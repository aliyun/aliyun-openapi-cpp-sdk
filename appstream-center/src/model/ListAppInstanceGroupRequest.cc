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

#include <alibabacloud/appstream-center/model/ListAppInstanceGroupRequest.h>

using AlibabaCloud::Appstream_center::Model::ListAppInstanceGroupRequest;

ListAppInstanceGroupRequest::ListAppInstanceGroupRequest()
    : RpcServiceRequest("appstream-center", "2021-09-01", "ListAppInstanceGroup") {
  setMethod(HttpRequest::Method::Post);
}

ListAppInstanceGroupRequest::~ListAppInstanceGroupRequest() {}

std::string ListAppInstanceGroupRequest::getBizRegionId() const {
  return bizRegionId_;
}

void ListAppInstanceGroupRequest::setBizRegionId(const std::string &bizRegionId) {
  bizRegionId_ = bizRegionId;
  setParameter(std::string("BizRegionId"), bizRegionId);
}

int ListAppInstanceGroupRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAppInstanceGroupRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListAppInstanceGroupRequest::getProductType() const {
  return productType_;
}

void ListAppInstanceGroupRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string ListAppInstanceGroupRequest::getAppCenterImageId() const {
  return appCenterImageId_;
}

void ListAppInstanceGroupRequest::setAppCenterImageId(const std::string &appCenterImageId) {
  appCenterImageId_ = appCenterImageId;
  setParameter(std::string("AppCenterImageId"), appCenterImageId);
}

std::string ListAppInstanceGroupRequest::getRegionId() const {
  return regionId_;
}

void ListAppInstanceGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListAppInstanceGroupRequest::getPageSize() const {
  return pageSize_;
}

void ListAppInstanceGroupRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAppInstanceGroupRequest::getNodeInstanceType() const {
  return nodeInstanceType_;
}

void ListAppInstanceGroupRequest::setNodeInstanceType(const std::string &nodeInstanceType) {
  nodeInstanceType_ = nodeInstanceType;
  setParameter(std::string("NodeInstanceType"), nodeInstanceType);
}

std::string ListAppInstanceGroupRequest::getAppInstanceGroupName() const {
  return appInstanceGroupName_;
}

void ListAppInstanceGroupRequest::setAppInstanceGroupName(const std::string &appInstanceGroupName) {
  appInstanceGroupName_ = appInstanceGroupName;
  setParameter(std::string("AppInstanceGroupName"), appInstanceGroupName);
}

std::string ListAppInstanceGroupRequest::getAppInstanceGroupId() const {
  return appInstanceGroupId_;
}

void ListAppInstanceGroupRequest::setAppInstanceGroupId(const std::string &appInstanceGroupId) {
  appInstanceGroupId_ = appInstanceGroupId;
  setParameter(std::string("AppInstanceGroupId"), appInstanceGroupId);
}

std::vector<std::string> ListAppInstanceGroupRequest::getStatus() const {
  return status_;
}

void ListAppInstanceGroupRequest::setStatus(const std::vector<std::string> &status) {
  status_ = status;
}

