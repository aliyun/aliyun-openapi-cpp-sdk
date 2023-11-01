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

std::string DescribeCloudSiemAssetsRequest::getAssetType() const {
  return assetType_;
}

void DescribeCloudSiemAssetsRequest::setAssetType(const std::string &assetType) {
  assetType_ = assetType;
  setBodyParameter(std::string("AssetType"), assetType);
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

