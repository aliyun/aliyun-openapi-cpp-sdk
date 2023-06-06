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

#include <alibabacloud/sas/model/RefreshAssetsRequest.h>

using AlibabaCloud::Sas::Model::RefreshAssetsRequest;

RefreshAssetsRequest::RefreshAssetsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "RefreshAssets") {
  setMethod(HttpRequest::Method::Post);
}

RefreshAssetsRequest::~RefreshAssetsRequest() {}

std::string RefreshAssetsRequest::getSourceIp() const {
  return sourceIp_;
}

void RefreshAssetsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int RefreshAssetsRequest::getCloudAssetSubType() const {
  return cloudAssetSubType_;
}

void RefreshAssetsRequest::setCloudAssetSubType(int cloudAssetSubType) {
  cloudAssetSubType_ = cloudAssetSubType;
  setParameter(std::string("CloudAssetSubType"), std::to_string(cloudAssetSubType));
}

std::string RefreshAssetsRequest::getAssetType() const {
  return assetType_;
}

void RefreshAssetsRequest::setAssetType(const std::string &assetType) {
  assetType_ = assetType;
  setParameter(std::string("AssetType"), assetType);
}

int RefreshAssetsRequest::getCloudAssetType() const {
  return cloudAssetType_;
}

void RefreshAssetsRequest::setCloudAssetType(int cloudAssetType) {
  cloudAssetType_ = cloudAssetType;
  setParameter(std::string("CloudAssetType"), std::to_string(cloudAssetType));
}

