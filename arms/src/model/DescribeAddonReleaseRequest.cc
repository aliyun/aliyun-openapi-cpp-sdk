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

#include <alibabacloud/arms/model/DescribeAddonReleaseRequest.h>

using AlibabaCloud::ARMS::Model::DescribeAddonReleaseRequest;

DescribeAddonReleaseRequest::DescribeAddonReleaseRequest()
    : RpcServiceRequest("arms", "2019-08-08", "DescribeAddonRelease") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAddonReleaseRequest::~DescribeAddonReleaseRequest() {}

std::string DescribeAddonReleaseRequest::getReleaseName() const {
  return releaseName_;
}

void DescribeAddonReleaseRequest::setReleaseName(const std::string &releaseName) {
  releaseName_ = releaseName;
  setParameter(std::string("ReleaseName"), releaseName);
}

std::string DescribeAddonReleaseRequest::getEnvironmentId() const {
  return environmentId_;
}

void DescribeAddonReleaseRequest::setEnvironmentId(const std::string &environmentId) {
  environmentId_ = environmentId;
  setParameter(std::string("EnvironmentId"), environmentId);
}

std::string DescribeAddonReleaseRequest::getRegionId() const {
  return regionId_;
}

void DescribeAddonReleaseRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

