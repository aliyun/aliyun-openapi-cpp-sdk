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

#include <alibabacloud/sas/model/DescribeImageVulListRequest.h>

using AlibabaCloud::Sas::Model::DescribeImageVulListRequest;

DescribeImageVulListRequest::DescribeImageVulListRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeImageVulList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeImageVulListRequest::~DescribeImageVulListRequest() {}

std::string DescribeImageVulListRequest::getClusterName() const {
  return clusterName_;
}

void DescribeImageVulListRequest::setClusterName(const std::string &clusterName) {
  clusterName_ = clusterName;
  setParameter(std::string("ClusterName"), clusterName);
}

std::string DescribeImageVulListRequest::getType() const {
  return type_;
}

void DescribeImageVulListRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

long DescribeImageVulListRequest::getCreateTsStart() const {
  return createTsStart_;
}

void DescribeImageVulListRequest::setCreateTsStart(long createTsStart) {
  createTsStart_ = createTsStart;
  setParameter(std::string("CreateTsStart"), std::to_string(createTsStart));
}

std::string DescribeImageVulListRequest::getContainerFieldName() const {
  return containerFieldName_;
}

void DescribeImageVulListRequest::setContainerFieldName(const std::string &containerFieldName) {
  containerFieldName_ = containerFieldName;
  setParameter(std::string("ContainerFieldName"), containerFieldName);
}

std::string DescribeImageVulListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeImageVulListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeImageVulListRequest::getTag() const {
  return tag_;
}

void DescribeImageVulListRequest::setTag(const std::string &tag) {
  tag_ = tag;
  setParameter(std::string("Tag"), tag);
}

long DescribeImageVulListRequest::getModifyTsEnd() const {
  return modifyTsEnd_;
}

void DescribeImageVulListRequest::setModifyTsEnd(long modifyTsEnd) {
  modifyTsEnd_ = modifyTsEnd;
  setParameter(std::string("ModifyTsEnd"), std::to_string(modifyTsEnd));
}

std::string DescribeImageVulListRequest::getImage() const {
  return image_;
}

void DescribeImageVulListRequest::setImage(const std::string &image) {
  image_ = image;
  setParameter(std::string("Image"), image);
}

std::string DescribeImageVulListRequest::getLevel() const {
  return level_;
}

void DescribeImageVulListRequest::setLevel(const std::string &level) {
  level_ = level;
  setParameter(std::string("Level"), level);
}

std::string DescribeImageVulListRequest::getResource() const {
  return resource_;
}

void DescribeImageVulListRequest::setResource(const std::string &resource) {
  resource_ = resource;
  setParameter(std::string("Resource"), resource);
}

std::string DescribeImageVulListRequest::getGroupId() const {
  return groupId_;
}

void DescribeImageVulListRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeImageVulListRequest::getAliasName() const {
  return aliasName_;
}

void DescribeImageVulListRequest::setAliasName(const std::string &aliasName) {
  aliasName_ = aliasName;
  setParameter(std::string("AliasName"), aliasName);
}

std::string DescribeImageVulListRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeImageVulListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeImageVulListRequest::getName() const {
  return name_;
}

void DescribeImageVulListRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string DescribeImageVulListRequest::getIds() const {
  return ids_;
}

void DescribeImageVulListRequest::setIds(const std::string &ids) {
  ids_ = ids;
  setParameter(std::string("Ids"), ids);
}

long DescribeImageVulListRequest::getCreateTsEnd() const {
  return createTsEnd_;
}

void DescribeImageVulListRequest::setCreateTsEnd(long createTsEnd) {
  createTsEnd_ = createTsEnd;
  setParameter(std::string("CreateTsEnd"), std::to_string(createTsEnd));
}

std::string DescribeImageVulListRequest::getContainerId() const {
  return containerId_;
}

void DescribeImageVulListRequest::setContainerId(const std::string &containerId) {
  containerId_ = containerId;
  setParameter(std::string("ContainerId"), containerId);
}

std::string DescribeImageVulListRequest::getNecessity() const {
  return necessity_;
}

void DescribeImageVulListRequest::setNecessity(const std::string &necessity) {
  necessity_ = necessity;
  setParameter(std::string("Necessity"), necessity);
}

std::string DescribeImageVulListRequest::getUuids() const {
  return uuids_;
}

void DescribeImageVulListRequest::setUuids(const std::string &uuids) {
  uuids_ = uuids;
  setParameter(std::string("Uuids"), uuids);
}

std::string DescribeImageVulListRequest::getRepoId() const {
  return repoId_;
}

void DescribeImageVulListRequest::setRepoId(const std::string &repoId) {
  repoId_ = repoId;
  setParameter(std::string("RepoId"), repoId);
}

std::string DescribeImageVulListRequest::getStatusList() const {
  return statusList_;
}

void DescribeImageVulListRequest::setStatusList(const std::string &statusList) {
  statusList_ = statusList;
  setParameter(std::string("StatusList"), statusList);
}

std::string DescribeImageVulListRequest::getTargetType() const {
  return targetType_;
}

void DescribeImageVulListRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string DescribeImageVulListRequest::getPod() const {
  return pod_;
}

void DescribeImageVulListRequest::setPod(const std::string &pod) {
  pod_ = pod;
  setParameter(std::string("Pod"), pod);
}

std::string DescribeImageVulListRequest::getCveId() const {
  return cveId_;
}

void DescribeImageVulListRequest::setCveId(const std::string &cveId) {
  cveId_ = cveId;
  setParameter(std::string("CveId"), cveId);
}

std::string DescribeImageVulListRequest::getRemark() const {
  return remark_;
}

void DescribeImageVulListRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string DescribeImageVulListRequest::getRepoNamespace() const {
  return repoNamespace_;
}

void DescribeImageVulListRequest::setRepoNamespace(const std::string &repoNamespace) {
  repoNamespace_ = repoNamespace;
  setParameter(std::string("RepoNamespace"), repoNamespace);
}

std::string DescribeImageVulListRequest::getRegionId() const {
  return regionId_;
}

void DescribeImageVulListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeImageVulListRequest::getContainerFieldValue() const {
  return containerFieldValue_;
}

void DescribeImageVulListRequest::setContainerFieldValue(const std::string &containerFieldValue) {
  containerFieldValue_ = containerFieldValue;
  setParameter(std::string("ContainerFieldValue"), containerFieldValue);
}

std::vector<std::string> DescribeImageVulListRequest::getScanRange() const {
  return scanRange_;
}

void DescribeImageVulListRequest::setScanRange(const std::vector<std::string> &scanRange) {
  scanRange_ = scanRange;
}

int DescribeImageVulListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeImageVulListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeImageVulListRequest::getDigest() const {
  return digest_;
}

void DescribeImageVulListRequest::setDigest(const std::string &digest) {
  digest_ = digest;
  setParameter(std::string("Digest"), digest);
}

long DescribeImageVulListRequest::getModifyTsStart() const {
  return modifyTsStart_;
}

void DescribeImageVulListRequest::setModifyTsStart(long modifyTsStart) {
  modifyTsStart_ = modifyTsStart;
  setParameter(std::string("ModifyTsStart"), std::to_string(modifyTsStart));
}

std::string DescribeImageVulListRequest::getLang() const {
  return lang_;
}

void DescribeImageVulListRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeImageVulListRequest::getDealed() const {
  return dealed_;
}

void DescribeImageVulListRequest::setDealed(const std::string &dealed) {
  dealed_ = dealed;
  setParameter(std::string("Dealed"), dealed);
}

int DescribeImageVulListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeImageVulListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeImageVulListRequest::getClusterId() const {
  return clusterId_;
}

void DescribeImageVulListRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DescribeImageVulListRequest::getBatchName() const {
  return batchName_;
}

void DescribeImageVulListRequest::setBatchName(const std::string &batchName) {
  batchName_ = batchName;
  setParameter(std::string("BatchName"), batchName);
}

std::string DescribeImageVulListRequest::getRepoName() const {
  return repoName_;
}

void DescribeImageVulListRequest::setRepoName(const std::string &repoName) {
  repoName_ = repoName;
  setParameter(std::string("RepoName"), repoName);
}

std::string DescribeImageVulListRequest::get_Namespace() const {
  return _namespace_;
}

void DescribeImageVulListRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string DescribeImageVulListRequest::getRepoInstanceId() const {
  return repoInstanceId_;
}

void DescribeImageVulListRequest::setRepoInstanceId(const std::string &repoInstanceId) {
  repoInstanceId_ = repoInstanceId;
  setParameter(std::string("RepoInstanceId"), repoInstanceId);
}

std::string DescribeImageVulListRequest::getRepoRegionId() const {
  return repoRegionId_;
}

void DescribeImageVulListRequest::setRepoRegionId(const std::string &repoRegionId) {
  repoRegionId_ = repoRegionId;
  setParameter(std::string("RepoRegionId"), repoRegionId);
}

