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

#include <alibabacloud/sophonsoar/model/DeleteComponentAssetRequest.h>

using AlibabaCloud::Sophonsoar::Model::DeleteComponentAssetRequest;

DeleteComponentAssetRequest::DeleteComponentAssetRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "DeleteComponentAsset") {
  setMethod(HttpRequest::Method::Post);
}

DeleteComponentAssetRequest::~DeleteComponentAssetRequest() {}

std::string DeleteComponentAssetRequest::getRoleFor() const {
  return roleFor_;
}

void DeleteComponentAssetRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

long DeleteComponentAssetRequest::getAssetId() const {
  return assetId_;
}

void DeleteComponentAssetRequest::setAssetId(long assetId) {
  assetId_ = assetId;
  setParameter(std::string("AssetId"), std::to_string(assetId));
}

std::string DeleteComponentAssetRequest::getRoleType() const {
  return roleType_;
}

void DeleteComponentAssetRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string DeleteComponentAssetRequest::getLang() const {
  return lang_;
}

void DeleteComponentAssetRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

