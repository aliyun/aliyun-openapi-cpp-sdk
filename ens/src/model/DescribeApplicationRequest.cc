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

#include <alibabacloud/ens/model/DescribeApplicationRequest.h>

using AlibabaCloud::Ens::Model::DescribeApplicationRequest;

DescribeApplicationRequest::DescribeApplicationRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeApplication") {
  setMethod(HttpRequest::Method::Post);
}

DescribeApplicationRequest::~DescribeApplicationRequest() {}

std::string DescribeApplicationRequest::getResourceSelector() const {
  return resourceSelector_;
}

void DescribeApplicationRequest::setResourceSelector(const std::string &resourceSelector) {
  resourceSelector_ = resourceSelector;
  setParameter(std::string("ResourceSelector"), resourceSelector);
}

std::string DescribeApplicationRequest::getAppVersions() const {
  return appVersions_;
}

void DescribeApplicationRequest::setAppVersions(const std::string &appVersions) {
  appVersions_ = appVersions;
  setParameter(std::string("AppVersions"), appVersions);
}

std::string DescribeApplicationRequest::getOutDetailStatParams() const {
  return outDetailStatParams_;
}

void DescribeApplicationRequest::setOutDetailStatParams(const std::string &outDetailStatParams) {
  outDetailStatParams_ = outDetailStatParams;
  setParameter(std::string("OutDetailStatParams"), outDetailStatParams);
}

std::string DescribeApplicationRequest::getLevel() const {
  return level_;
}

void DescribeApplicationRequest::setLevel(const std::string &level) {
  level_ = level;
  setParameter(std::string("Level"), level);
}

std::string DescribeApplicationRequest::getAppId() const {
  return appId_;
}

void DescribeApplicationRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

