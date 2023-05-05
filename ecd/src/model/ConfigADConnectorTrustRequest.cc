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

#include <alibabacloud/ecd/model/ConfigADConnectorTrustRequest.h>

using AlibabaCloud::Ecd::Model::ConfigADConnectorTrustRequest;

ConfigADConnectorTrustRequest::ConfigADConnectorTrustRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ConfigADConnectorTrust") {
  setMethod(HttpRequest::Method::Post);
}

ConfigADConnectorTrustRequest::~ConfigADConnectorTrustRequest() {}

std::string ConfigADConnectorTrustRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void ConfigADConnectorTrustRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::string ConfigADConnectorTrustRequest::getTrustKey() const {
  return trustKey_;
}

void ConfigADConnectorTrustRequest::setTrustKey(const std::string &trustKey) {
  trustKey_ = trustKey;
  setParameter(std::string("TrustKey"), trustKey);
}

std::string ConfigADConnectorTrustRequest::getRegionId() const {
  return regionId_;
}

void ConfigADConnectorTrustRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ConfigADConnectorTrustRequest::getRdsLicenseDomain() const {
  return rdsLicenseDomain_;
}

void ConfigADConnectorTrustRequest::setRdsLicenseDomain(bool rdsLicenseDomain) {
  rdsLicenseDomain_ = rdsLicenseDomain;
  setParameter(std::string("RdsLicenseDomain"), rdsLicenseDomain ? "true" : "false");
}

