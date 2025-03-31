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

#include <alibabacloud/cloud-siem/model/DescribeCloudSiemAssetsRequest.h>

using AlibabaCloud::Cloud_siem::Model::DescribeCloudSiemAssetsRequest;

DescribeCloudSiemAssetsRequest::DescribeCloudSiemAssetsRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DescribeCloudSiemAssets") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCloudSiemAssetsRequest::~DescribeCloudSiemAssetsRequest() {}

long DescribeCloudSiemAssetsRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeCloudSiemAssetsRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string DescribeCloudSiemAssetsRequest::getAssetName() const {
  return assetName_;
}

void DescribeCloudSiemAssetsRequest::setAssetName(const std::string &assetName) {
  assetName_ = assetName;
  setBodyParameter(std::string("AssetName"), assetName);
}

std::string DescribeCloudSiemAssetsRequest::getRegionId() const {
  return regionId_;
}

void DescribeCloudSiemAssetsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int DescribeCloudSiemAssetsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCloudSiemAssetsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeCloudSiemAssetsRequest::getRoleType() const {
  return roleType_;
}

void DescribeCloudSiemAssetsRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

std::string DescribeCloudSiemAssetsRequest::getAssetType() const {
  return assetType_;
}

void DescribeCloudSiemAssetsRequest::setAssetType(const std::string &assetType) {
  assetType_ = assetType;
  setBodyParameter(std::string("AssetType"), assetType);
}

std::string DescribeCloudSiemAssetsRequest::getAssetUuid() const {
  return assetUuid_;
}

void DescribeCloudSiemAssetsRequest::setAssetUuid(const std::string &assetUuid) {
  assetUuid_ = assetUuid;
  setBodyParameter(std::string("AssetUuid"), assetUuid);
}

int DescribeCloudSiemAssetsRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeCloudSiemAssetsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeCloudSiemAssetsRequest::getIncidentUuid() const {
  return incidentUuid_;
}

void DescribeCloudSiemAssetsRequest::setIncidentUuid(const std::string &incidentUuid) {
  incidentUuid_ = incidentUuid;
  setBodyParameter(std::string("IncidentUuid"), incidentUuid);
}

