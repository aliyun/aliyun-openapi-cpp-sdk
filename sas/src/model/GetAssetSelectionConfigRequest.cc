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

#include <alibabacloud/sas/model/GetAssetSelectionConfigRequest.h>

using AlibabaCloud::Sas::Model::GetAssetSelectionConfigRequest;

GetAssetSelectionConfigRequest::GetAssetSelectionConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "GetAssetSelectionConfig") {
  setMethod(HttpRequest::Method::Post);
}

GetAssetSelectionConfigRequest::~GetAssetSelectionConfigRequest() {}

std::string GetAssetSelectionConfigRequest::getBusinessType() const {
  return businessType_;
}

void GetAssetSelectionConfigRequest::setBusinessType(const std::string &businessType) {
  businessType_ = businessType;
  setParameter(std::string("BusinessType"), businessType);
}

std::string GetAssetSelectionConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void GetAssetSelectionConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

