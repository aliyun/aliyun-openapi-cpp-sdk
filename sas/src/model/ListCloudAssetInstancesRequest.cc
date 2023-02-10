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

#include <alibabacloud/sas/model/ListCloudAssetInstancesRequest.h>

using AlibabaCloud::Sas::Model::ListCloudAssetInstancesRequest;

ListCloudAssetInstancesRequest::ListCloudAssetInstancesRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListCloudAssetInstances") {
  setMethod(HttpRequest::Method::Post);
}

ListCloudAssetInstancesRequest::~ListCloudAssetInstancesRequest() {}

std::string ListCloudAssetInstancesRequest::getCriteria() const {
  return criteria_;
}

void ListCloudAssetInstancesRequest::setCriteria(const std::string &criteria) {
  criteria_ = criteria;
  setParameter(std::string("Criteria"), criteria);
}

std::string ListCloudAssetInstancesRequest::getSourceIp() const {
  return sourceIp_;
}

void ListCloudAssetInstancesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ListCloudAssetInstancesRequest::getRegionId() const {
  return regionId_;
}

void ListCloudAssetInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListCloudAssetInstancesRequest::getPageSize() const {
  return pageSize_;
}

void ListCloudAssetInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListCloudAssetInstancesRequest::getLogicalExp() const {
  return logicalExp_;
}

void ListCloudAssetInstancesRequest::setLogicalExp(const std::string &logicalExp) {
  logicalExp_ = logicalExp;
  setParameter(std::string("LogicalExp"), logicalExp);
}

std::vector<ListCloudAssetInstancesRequest::CloudAssetTypes> ListCloudAssetInstancesRequest::getCloudAssetTypes() const {
  return cloudAssetTypes_;
}

void ListCloudAssetInstancesRequest::setCloudAssetTypes(const std::vector<ListCloudAssetInstancesRequest::CloudAssetTypes> &cloudAssetTypes) {
  cloudAssetTypes_ = cloudAssetTypes;
  for(int dep1 = 0; dep1 != cloudAssetTypes.size(); dep1++) {
  auto cloudAssetTypesObj = cloudAssetTypes.at(dep1);
  std::string cloudAssetTypesObjStr = std::string("CloudAssetTypes") + "." + std::to_string(dep1 + 1);
    setParameter(cloudAssetTypesObjStr + ".AssetSubType", std::to_string(cloudAssetTypesObj.assetSubType));
    setParameter(cloudAssetTypesObjStr + ".AssetType", std::to_string(cloudAssetTypesObj.assetType));
  }
}

int ListCloudAssetInstancesRequest::getCurrentPage() const {
  return currentPage_;
}

void ListCloudAssetInstancesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

