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

#include <alibabacloud/sas/model/GetCloudAssetCriteriaRequest.h>

using AlibabaCloud::Sas::Model::GetCloudAssetCriteriaRequest;

GetCloudAssetCriteriaRequest::GetCloudAssetCriteriaRequest()
    : RpcServiceRequest("sas", "2018-12-03", "GetCloudAssetCriteria") {
  setMethod(HttpRequest::Method::Post);
}

GetCloudAssetCriteriaRequest::~GetCloudAssetCriteriaRequest() {}

std::vector<GetCloudAssetCriteriaRequest::CloudAssetTypes> GetCloudAssetCriteriaRequest::getCloudAssetTypes() const {
  return cloudAssetTypes_;
}

void GetCloudAssetCriteriaRequest::setCloudAssetTypes(const std::vector<GetCloudAssetCriteriaRequest::CloudAssetTypes> &cloudAssetTypes) {
  cloudAssetTypes_ = cloudAssetTypes;
  for(int dep1 = 0; dep1 != cloudAssetTypes.size(); dep1++) {
  auto cloudAssetTypesObj = cloudAssetTypes.at(dep1);
  std::string cloudAssetTypesObjStr = std::string("CloudAssetTypes") + "." + std::to_string(dep1 + 1);
    setParameter(cloudAssetTypesObjStr + ".AssetSubType", std::to_string(cloudAssetTypesObj.assetSubType));
    setParameter(cloudAssetTypesObjStr + ".AssetType", std::to_string(cloudAssetTypesObj.assetType));
  }
}

std::string GetCloudAssetCriteriaRequest::getSourceIp() const {
  return sourceIp_;
}

void GetCloudAssetCriteriaRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string GetCloudAssetCriteriaRequest::getValue() const {
  return value_;
}

void GetCloudAssetCriteriaRequest::setValue(const std::string &value) {
  value_ = value;
  setParameter(std::string("Value"), value);
}

