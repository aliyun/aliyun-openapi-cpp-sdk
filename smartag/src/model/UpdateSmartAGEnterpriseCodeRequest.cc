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

#include <alibabacloud/smartag/model/UpdateSmartAGEnterpriseCodeRequest.h>

using AlibabaCloud::Smartag::Model::UpdateSmartAGEnterpriseCodeRequest;

UpdateSmartAGEnterpriseCodeRequest::UpdateSmartAGEnterpriseCodeRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "UpdateSmartAGEnterpriseCode") {
  setMethod(HttpRequest::Method::Post);
}

UpdateSmartAGEnterpriseCodeRequest::~UpdateSmartAGEnterpriseCodeRequest() {}

std::string UpdateSmartAGEnterpriseCodeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateSmartAGEnterpriseCodeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateSmartAGEnterpriseCodeRequest::getRegionId() const {
  return regionId_;
}

void UpdateSmartAGEnterpriseCodeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateSmartAGEnterpriseCodeRequest::getEnterpriseCode() const {
  return enterpriseCode_;
}

void UpdateSmartAGEnterpriseCodeRequest::setEnterpriseCode(const std::string &enterpriseCode) {
  enterpriseCode_ = enterpriseCode;
  setParameter(std::string("EnterpriseCode"), enterpriseCode);
}

bool UpdateSmartAGEnterpriseCodeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateSmartAGEnterpriseCodeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateSmartAGEnterpriseCodeRequest::getSmartAGId() const {
  return smartAGId_;
}

void UpdateSmartAGEnterpriseCodeRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

