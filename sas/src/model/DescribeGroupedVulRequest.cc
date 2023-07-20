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

#include <alibabacloud/sas/model/DescribeGroupedVulRequest.h>

using AlibabaCloud::Sas::Model::DescribeGroupedVulRequest;

DescribeGroupedVulRequest::DescribeGroupedVulRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeGroupedVul") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGroupedVulRequest::~DescribeGroupedVulRequest() {}

int DescribeGroupedVulRequest::getMinScore() const {
  return minScore_;
}

void DescribeGroupedVulRequest::setMinScore(int minScore) {
  minScore_ = minScore;
  setParameter(std::string("MinScore"), std::to_string(minScore));
}

std::string DescribeGroupedVulRequest::getAttachTypes() const {
  return attachTypes_;
}

void DescribeGroupedVulRequest::setAttachTypes(const std::string &attachTypes) {
  attachTypes_ = attachTypes;
  setParameter(std::string("AttachTypes"), attachTypes);
}

std::string DescribeGroupedVulRequest::getType() const {
  return type_;
}

void DescribeGroupedVulRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeGroupedVulRequest::getVpcInstanceIds() const {
  return vpcInstanceIds_;
}

void DescribeGroupedVulRequest::setVpcInstanceIds(const std::string &vpcInstanceIds) {
  vpcInstanceIds_ = vpcInstanceIds;
  setParameter(std::string("VpcInstanceIds"), vpcInstanceIds);
}

long DescribeGroupedVulRequest::getLastTsEnd() const {
  return lastTsEnd_;
}

void DescribeGroupedVulRequest::setLastTsEnd(long lastTsEnd) {
  lastTsEnd_ = lastTsEnd;
  setParameter(std::string("LastTsEnd"), std::to_string(lastTsEnd));
}

long DescribeGroupedVulRequest::getCreateTsStart() const {
  return createTsStart_;
}

void DescribeGroupedVulRequest::setCreateTsStart(long createTsStart) {
  createTsStart_ = createTsStart;
  setParameter(std::string("CreateTsStart"), std::to_string(createTsStart));
}

std::string DescribeGroupedVulRequest::getContainerFieldName() const {
  return containerFieldName_;
}

void DescribeGroupedVulRequest::setContainerFieldName(const std::string &containerFieldName) {
  containerFieldName_ = containerFieldName;
  setParameter(std::string("ContainerFieldName"), containerFieldName);
}

std::string DescribeGroupedVulRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeGroupedVulRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeGroupedVulRequest::getLevel() const {
  return level_;
}

void DescribeGroupedVulRequest::setLevel(const std::string &level) {
  level_ = level;
  setParameter(std::string("Level"), level);
}

std::string DescribeGroupedVulRequest::getGroupId() const {
  return groupId_;
}

void DescribeGroupedVulRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeGroupedVulRequest::getOrderBy() const {
  return orderBy_;
}

void DescribeGroupedVulRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

long DescribeGroupedVulRequest::getPatchId() const {
  return patchId_;
}

void DescribeGroupedVulRequest::setPatchId(long patchId) {
  patchId_ = patchId;
  setParameter(std::string("PatchId"), std::to_string(patchId));
}

std::string DescribeGroupedVulRequest::getAliasName() const {
  return aliasName_;
}

void DescribeGroupedVulRequest::setAliasName(const std::string &aliasName) {
  aliasName_ = aliasName;
  setParameter(std::string("AliasName"), aliasName);
}

std::string DescribeGroupedVulRequest::getName() const {
  return name_;
}

void DescribeGroupedVulRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

long DescribeGroupedVulRequest::getCreateTsEnd() const {
  return createTsEnd_;
}

void DescribeGroupedVulRequest::setCreateTsEnd(long createTsEnd) {
  createTsEnd_ = createTsEnd;
  setParameter(std::string("CreateTsEnd"), std::to_string(createTsEnd));
}

std::string DescribeGroupedVulRequest::getNecessity() const {
  return necessity_;
}

void DescribeGroupedVulRequest::setNecessity(const std::string &necessity) {
  necessity_ = necessity;
  setParameter(std::string("Necessity"), necessity);
}

std::string DescribeGroupedVulRequest::getUuids() const {
  return uuids_;
}

void DescribeGroupedVulRequest::setUuids(const std::string &uuids) {
  uuids_ = uuids;
  setParameter(std::string("Uuids"), uuids);
}

std::string DescribeGroupedVulRequest::getStatusList() const {
  return statusList_;
}

void DescribeGroupedVulRequest::setStatusList(const std::string &statusList) {
  statusList_ = statusList;
  setParameter(std::string("StatusList"), statusList);
}

std::string DescribeGroupedVulRequest::getTargetType() const {
  return targetType_;
}

void DescribeGroupedVulRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string DescribeGroupedVulRequest::getCveId() const {
  return cveId_;
}

void DescribeGroupedVulRequest::setCveId(const std::string &cveId) {
  cveId_ = cveId;
  setParameter(std::string("CveId"), cveId);
}

std::string DescribeGroupedVulRequest::getContainerFieldValue() const {
  return containerFieldValue_;
}

void DescribeGroupedVulRequest::setContainerFieldValue(const std::string &containerFieldValue) {
  containerFieldValue_ = containerFieldValue;
  setParameter(std::string("ContainerFieldValue"), containerFieldValue);
}

int DescribeGroupedVulRequest::getPageSize() const {
  return pageSize_;
}

void DescribeGroupedVulRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeGroupedVulRequest::getLang() const {
  return lang_;
}

void DescribeGroupedVulRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long DescribeGroupedVulRequest::getLastTsStart() const {
  return lastTsStart_;
}

void DescribeGroupedVulRequest::setLastTsStart(long lastTsStart) {
  lastTsStart_ = lastTsStart;
  setParameter(std::string("LastTsStart"), std::to_string(lastTsStart));
}

long DescribeGroupedVulRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void DescribeGroupedVulRequest::setResourceDirectoryAccountId(long resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), std::to_string(resourceDirectoryAccountId));
}

std::string DescribeGroupedVulRequest::getAssetType() const {
  return assetType_;
}

void DescribeGroupedVulRequest::setAssetType(const std::string &assetType) {
  assetType_ = assetType;
  setParameter(std::string("AssetType"), assetType);
}

std::string DescribeGroupedVulRequest::getDirection() const {
  return direction_;
}

void DescribeGroupedVulRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

std::string DescribeGroupedVulRequest::getDealed() const {
  return dealed_;
}

void DescribeGroupedVulRequest::setDealed(const std::string &dealed) {
  dealed_ = dealed;
  setParameter(std::string("Dealed"), dealed);
}

int DescribeGroupedVulRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeGroupedVulRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeGroupedVulRequest::getClusterId() const {
  return clusterId_;
}

void DescribeGroupedVulRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DescribeGroupedVulRequest::getSearchTags() const {
  return searchTags_;
}

void DescribeGroupedVulRequest::setSearchTags(const std::string &searchTags) {
  searchTags_ = searchTags;
  setParameter(std::string("SearchTags"), searchTags);
}

