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

#include <alibabacloud/cloud-siem/model/ListImportedLogsByProdRequest.h>

using AlibabaCloud::Cloud_siem::Model::ListImportedLogsByProdRequest;

ListImportedLogsByProdRequest::ListImportedLogsByProdRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "ListImportedLogsByProd") {
  setMethod(HttpRequest::Method::Post);
}

ListImportedLogsByProdRequest::~ListImportedLogsByProdRequest() {}

std::string ListImportedLogsByProdRequest::getCloudCode() const {
  return cloudCode_;
}

void ListImportedLogsByProdRequest::setCloudCode(const std::string &cloudCode) {
  cloudCode_ = cloudCode;
  setBodyParameter(std::string("CloudCode"), cloudCode);
}

long ListImportedLogsByProdRequest::getRoleFor() const {
  return roleFor_;
}

void ListImportedLogsByProdRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string ListImportedLogsByProdRequest::getRegionId() const {
  return regionId_;
}

void ListImportedLogsByProdRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListImportedLogsByProdRequest::getRoleType() const {
  return roleType_;
}

void ListImportedLogsByProdRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

std::string ListImportedLogsByProdRequest::getProdCode() const {
  return prodCode_;
}

void ListImportedLogsByProdRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setBodyParameter(std::string("ProdCode"), prodCode);
}

