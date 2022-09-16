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

#include <alibabacloud/ecd/model/DescribeDesktopIdsByVulNamesRequest.h>

using AlibabaCloud::Ecd::Model::DescribeDesktopIdsByVulNamesRequest;

DescribeDesktopIdsByVulNamesRequest::DescribeDesktopIdsByVulNamesRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeDesktopIdsByVulNames") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDesktopIdsByVulNamesRequest::~DescribeDesktopIdsByVulNamesRequest() {}

std::string DescribeDesktopIdsByVulNamesRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void DescribeDesktopIdsByVulNamesRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::string DescribeDesktopIdsByVulNamesRequest::getType() const {
  return type_;
}

void DescribeDesktopIdsByVulNamesRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::vector<std::string> DescribeDesktopIdsByVulNamesRequest::getVulName() const {
  return vulName_;
}

void DescribeDesktopIdsByVulNamesRequest::setVulName(const std::vector<std::string> &vulName) {
  vulName_ = vulName;
}

std::string DescribeDesktopIdsByVulNamesRequest::getRegionId() const {
  return regionId_;
}

void DescribeDesktopIdsByVulNamesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDesktopIdsByVulNamesRequest::getNecessity() const {
  return necessity_;
}

void DescribeDesktopIdsByVulNamesRequest::setNecessity(const std::string &necessity) {
  necessity_ = necessity;
  setParameter(std::string("Necessity"), necessity);
}

