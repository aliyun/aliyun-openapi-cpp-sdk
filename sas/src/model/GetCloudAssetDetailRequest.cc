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

#include <alibabacloud/sas/model/GetCloudAssetDetailRequest.h>

using AlibabaCloud::Sas::Model::GetCloudAssetDetailRequest;

GetCloudAssetDetailRequest::GetCloudAssetDetailRequest()
    : RpcServiceRequest("sas", "2018-12-03", "GetCloudAssetDetail") {
  setMethod(HttpRequest::Method::Post);
}

GetCloudAssetDetailRequest::~GetCloudAssetDetailRequest() {}

int GetCloudAssetDetailRequest::getAssetSubType() const {
  return assetSubType_;
}

void GetCloudAssetDetailRequest::setAssetSubType(int assetSubType) {
  assetSubType_ = assetSubType;
  setParameter(std::string("AssetSubType"), std::to_string(assetSubType));
}

std::string GetCloudAssetDetailRequest::getSourceIp() const {
  return sourceIp_;
}

void GetCloudAssetDetailRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int GetCloudAssetDetailRequest::getVendor() const {
  return vendor_;
}

void GetCloudAssetDetailRequest::setVendor(int vendor) {
  vendor_ = vendor;
  setParameter(std::string("Vendor"), std::to_string(vendor));
}

int GetCloudAssetDetailRequest::getAssetType() const {
  return assetType_;
}

void GetCloudAssetDetailRequest::setAssetType(int assetType) {
  assetType_ = assetType;
  setParameter(std::string("AssetType"), std::to_string(assetType));
}

std::vector<GetCloudAssetDetailRequest::CloudAssetInstances> GetCloudAssetDetailRequest::getCloudAssetInstances() const {
  return cloudAssetInstances_;
}

void GetCloudAssetDetailRequest::setCloudAssetInstances(const std::vector<GetCloudAssetDetailRequest::CloudAssetInstances> &cloudAssetInstances) {
  cloudAssetInstances_ = cloudAssetInstances;
  for(int dep1 = 0; dep1 != cloudAssetInstances.size(); dep1++) {
  auto cloudAssetInstancesObj = cloudAssetInstances.at(dep1);
  std::string cloudAssetInstancesObjStr = std::string("CloudAssetInstances") + "." + std::to_string(dep1 + 1);
    setParameter(cloudAssetInstancesObjStr + ".InstanceId", cloudAssetInstancesObj.instanceId);
    setParameter(cloudAssetInstancesObjStr + ".RegionId", cloudAssetInstancesObj.regionId);
  }
}

