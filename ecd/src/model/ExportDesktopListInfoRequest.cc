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

#include <alibabacloud/ecd/model/ExportDesktopListInfoRequest.h>

using AlibabaCloud::Ecd::Model::ExportDesktopListInfoRequest;

ExportDesktopListInfoRequest::ExportDesktopListInfoRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ExportDesktopListInfo") {
  setMethod(HttpRequest::Method::Post);
}

ExportDesktopListInfoRequest::~ExportDesktopListInfoRequest() {}

std::string ExportDesktopListInfoRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void ExportDesktopListInfoRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::string ExportDesktopListInfoRequest::getDesktopStatus() const {
  return desktopStatus_;
}

void ExportDesktopListInfoRequest::setDesktopStatus(const std::string &desktopStatus) {
  desktopStatus_ = desktopStatus;
  setParameter(std::string("DesktopStatus"), desktopStatus);
}

std::string ExportDesktopListInfoRequest::getRegionId() const {
  return regionId_;
}

void ExportDesktopListInfoRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ExportDesktopListInfoRequest::getNextToken() const {
  return nextToken_;
}

void ExportDesktopListInfoRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ExportDesktopListInfoRequest::getDirectoryId() const {
  return directoryId_;
}

void ExportDesktopListInfoRequest::setDirectoryId(const std::string &directoryId) {
  directoryId_ = directoryId;
  setParameter(std::string("DirectoryId"), directoryId);
}

std::vector<std::string> ExportDesktopListInfoRequest::getEndUserId() const {
  return endUserId_;
}

void ExportDesktopListInfoRequest::setEndUserId(const std::vector<std::string> &endUserId) {
  endUserId_ = endUserId;
}

std::vector<std::string> ExportDesktopListInfoRequest::getDesktopId() const {
  return desktopId_;
}

void ExportDesktopListInfoRequest::setDesktopId(const std::vector<std::string> &desktopId) {
  desktopId_ = desktopId;
}

std::vector<ExportDesktopListInfoRequest::Tag> ExportDesktopListInfoRequest::getTag() const {
  return tag_;
}

void ExportDesktopListInfoRequest::setTag(const std::vector<ExportDesktopListInfoRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string ExportDesktopListInfoRequest::getDesktopName() const {
  return desktopName_;
}

void ExportDesktopListInfoRequest::setDesktopName(const std::string &desktopName) {
  desktopName_ = desktopName;
  setParameter(std::string("DesktopName"), desktopName);
}

std::string ExportDesktopListInfoRequest::getGroupId() const {
  return groupId_;
}

void ExportDesktopListInfoRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string ExportDesktopListInfoRequest::getExpiredTime() const {
  return expiredTime_;
}

void ExportDesktopListInfoRequest::setExpiredTime(const std::string &expiredTime) {
  expiredTime_ = expiredTime;
  setParameter(std::string("ExpiredTime"), expiredTime);
}

int ExportDesktopListInfoRequest::getMaxResults() const {
  return maxResults_;
}

void ExportDesktopListInfoRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ExportDesktopListInfoRequest::getLangType() const {
  return langType_;
}

void ExportDesktopListInfoRequest::setLangType(const std::string &langType) {
  langType_ = langType;
  setParameter(std::string("LangType"), langType);
}

std::string ExportDesktopListInfoRequest::getChargeType() const {
  return chargeType_;
}

void ExportDesktopListInfoRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

std::string ExportDesktopListInfoRequest::getPolicyGroupId() const {
  return policyGroupId_;
}

void ExportDesktopListInfoRequest::setPolicyGroupId(const std::string &policyGroupId) {
  policyGroupId_ = policyGroupId;
  setParameter(std::string("PolicyGroupId"), policyGroupId);
}

std::string ExportDesktopListInfoRequest::getUserName() const {
  return userName_;
}

void ExportDesktopListInfoRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

