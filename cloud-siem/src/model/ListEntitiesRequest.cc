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

#include <alibabacloud/cloud-siem/model/ListEntitiesRequest.h>

using AlibabaCloud::Cloud_siem::Model::ListEntitiesRequest;

ListEntitiesRequest::ListEntitiesRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "ListEntities") {
  setMethod(HttpRequest::Method::Post);
}

ListEntitiesRequest::~ListEntitiesRequest() {}

long ListEntitiesRequest::getRoleFor() const {
  return roleFor_;
}

void ListEntitiesRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string ListEntitiesRequest::getMalwareType() const {
  return malwareType_;
}

void ListEntitiesRequest::setMalwareType(const std::string &malwareType) {
  malwareType_ = malwareType;
  setBodyParameter(std::string("MalwareType"), malwareType);
}

std::string ListEntitiesRequest::getEntityName() const {
  return entityName_;
}

void ListEntitiesRequest::setEntityName(const std::string &entityName) {
  entityName_ = entityName;
  setBodyParameter(std::string("EntityName"), entityName);
}

std::string ListEntitiesRequest::getAssetName() const {
  return assetName_;
}

void ListEntitiesRequest::setAssetName(const std::string &assetName) {
  assetName_ = assetName;
  setBodyParameter(std::string("AssetName"), assetName);
}

std::string ListEntitiesRequest::getRegionId() const {
  return regionId_;
}

void ListEntitiesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListEntitiesRequest::getPageSize() const {
  return pageSize_;
}

void ListEntitiesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListEntitiesRequest::getRoleType() const {
  return roleType_;
}

void ListEntitiesRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

std::string ListEntitiesRequest::getAssetUuid() const {
  return assetUuid_;
}

void ListEntitiesRequest::setAssetUuid(const std::string &assetUuid) {
  assetUuid_ = assetUuid;
  setBodyParameter(std::string("AssetUuid"), assetUuid);
}

int ListEntitiesRequest::getCurrentPage() const {
  return currentPage_;
}

void ListEntitiesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListEntitiesRequest::getIsMalwareEntity() const {
  return isMalwareEntity_;
}

void ListEntitiesRequest::setIsMalwareEntity(const std::string &isMalwareEntity) {
  isMalwareEntity_ = isMalwareEntity;
  setBodyParameter(std::string("IsMalwareEntity"), isMalwareEntity);
}

std::string ListEntitiesRequest::getEntityType() const {
  return entityType_;
}

void ListEntitiesRequest::setEntityType(const std::string &entityType) {
  entityType_ = entityType;
  setBodyParameter(std::string("EntityType"), entityType);
}

std::string ListEntitiesRequest::getEntityUuid() const {
  return entityUuid_;
}

void ListEntitiesRequest::setEntityUuid(const std::string &entityUuid) {
  entityUuid_ = entityUuid;
  setBodyParameter(std::string("EntityUuid"), entityUuid);
}

std::string ListEntitiesRequest::getIncidentUuid() const {
  return incidentUuid_;
}

void ListEntitiesRequest::setIncidentUuid(const std::string &incidentUuid) {
  incidentUuid_ = incidentUuid;
  setBodyParameter(std::string("IncidentUuid"), incidentUuid);
}

std::string ListEntitiesRequest::getIsAsset() const {
  return isAsset_;
}

void ListEntitiesRequest::setIsAsset(const std::string &isAsset) {
  isAsset_ = isAsset;
  setBodyParameter(std::string("IsAsset"), isAsset);
}

