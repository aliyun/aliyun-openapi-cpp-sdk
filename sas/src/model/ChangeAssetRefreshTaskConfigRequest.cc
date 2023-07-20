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

#include <alibabacloud/sas/model/ChangeAssetRefreshTaskConfigRequest.h>

using AlibabaCloud::Sas::Model::ChangeAssetRefreshTaskConfigRequest;

ChangeAssetRefreshTaskConfigRequest::ChangeAssetRefreshTaskConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ChangeAssetRefreshTaskConfig") {
  setMethod(HttpRequest::Method::Post);
}

ChangeAssetRefreshTaskConfigRequest::~ChangeAssetRefreshTaskConfigRequest() {}

std::vector<ChangeAssetRefreshTaskConfigRequest::AssetRefreshConfigs> ChangeAssetRefreshTaskConfigRequest::getAssetRefreshConfigs() const {
  return assetRefreshConfigs_;
}

void ChangeAssetRefreshTaskConfigRequest::setAssetRefreshConfigs(const std::vector<ChangeAssetRefreshTaskConfigRequest::AssetRefreshConfigs> &assetRefreshConfigs) {
  assetRefreshConfigs_ = assetRefreshConfigs;
  for(int dep1 = 0; dep1 != assetRefreshConfigs.size(); dep1++) {
  auto assetRefreshConfigsObj = assetRefreshConfigs.at(dep1);
  std::string assetRefreshConfigsObjStr = std::string("AssetRefreshConfigs") + "." + std::to_string(dep1 + 1);
    setParameter(assetRefreshConfigsObjStr + ".Vendor", std::to_string(assetRefreshConfigsObj.vendor));
    setParameter(assetRefreshConfigsObjStr + ".SchedulePeriod", std::to_string(assetRefreshConfigsObj.schedulePeriod));
    setParameter(assetRefreshConfigsObjStr + ".Status", std::to_string(assetRefreshConfigsObj.status));
  }
}

std::string ChangeAssetRefreshTaskConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void ChangeAssetRefreshTaskConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ChangeAssetRefreshTaskConfigRequest::getRegionId() const {
  return regionId_;
}

void ChangeAssetRefreshTaskConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

