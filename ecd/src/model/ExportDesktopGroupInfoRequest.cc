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

#include <alibabacloud/ecd/model/ExportDesktopGroupInfoRequest.h>

using AlibabaCloud::Ecd::Model::ExportDesktopGroupInfoRequest;

ExportDesktopGroupInfoRequest::ExportDesktopGroupInfoRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ExportDesktopGroupInfo") {
  setMethod(HttpRequest::Method::Post);
}

ExportDesktopGroupInfoRequest::~ExportDesktopGroupInfoRequest() {}

std::string ExportDesktopGroupInfoRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void ExportDesktopGroupInfoRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::string ExportDesktopGroupInfoRequest::getDesktopGroupName() const {
  return desktopGroupName_;
}

void ExportDesktopGroupInfoRequest::setDesktopGroupName(const std::string &desktopGroupName) {
  desktopGroupName_ = desktopGroupName;
  setParameter(std::string("DesktopGroupName"), desktopGroupName);
}

std::vector<std::string> ExportDesktopGroupInfoRequest::getDesktopGroupId() const {
  return desktopGroupId_;
}

void ExportDesktopGroupInfoRequest::setDesktopGroupId(const std::vector<std::string> &desktopGroupId) {
  desktopGroupId_ = desktopGroupId;
}

std::string ExportDesktopGroupInfoRequest::getRegionId() const {
  return regionId_;
}

void ExportDesktopGroupInfoRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ExportDesktopGroupInfoRequest::getNextToken() const {
  return nextToken_;
}

void ExportDesktopGroupInfoRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ExportDesktopGroupInfoRequest::getDirectoryId() const {
  return directoryId_;
}

void ExportDesktopGroupInfoRequest::setDirectoryId(const std::string &directoryId) {
  directoryId_ = directoryId;
  setParameter(std::string("DirectoryId"), directoryId);
}

std::vector<std::string> ExportDesktopGroupInfoRequest::getEndUserId() const {
  return endUserId_;
}

void ExportDesktopGroupInfoRequest::setEndUserId(const std::vector<std::string> &endUserId) {
  endUserId_ = endUserId;
}

std::string ExportDesktopGroupInfoRequest::getExpiredTime() const {
  return expiredTime_;
}

void ExportDesktopGroupInfoRequest::setExpiredTime(const std::string &expiredTime) {
  expiredTime_ = expiredTime;
  setParameter(std::string("ExpiredTime"), expiredTime);
}

int ExportDesktopGroupInfoRequest::getMaxResults() const {
  return maxResults_;
}

void ExportDesktopGroupInfoRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ExportDesktopGroupInfoRequest::getLangType() const {
  return langType_;
}

void ExportDesktopGroupInfoRequest::setLangType(const std::string &langType) {
  langType_ = langType;
  setParameter(std::string("LangType"), langType);
}

std::string ExportDesktopGroupInfoRequest::getChargeType() const {
  return chargeType_;
}

void ExportDesktopGroupInfoRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

std::string ExportDesktopGroupInfoRequest::getPolicyGroupId() const {
  return policyGroupId_;
}

void ExportDesktopGroupInfoRequest::setPolicyGroupId(const std::string &policyGroupId) {
  policyGroupId_ = policyGroupId;
  setParameter(std::string("PolicyGroupId"), policyGroupId);
}

