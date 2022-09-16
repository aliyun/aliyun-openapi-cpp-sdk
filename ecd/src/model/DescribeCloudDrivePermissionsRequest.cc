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

#include <alibabacloud/ecd/model/DescribeCloudDrivePermissionsRequest.h>

using AlibabaCloud::Ecd::Model::DescribeCloudDrivePermissionsRequest;

DescribeCloudDrivePermissionsRequest::DescribeCloudDrivePermissionsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeCloudDrivePermissions") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCloudDrivePermissionsRequest::~DescribeCloudDrivePermissionsRequest() {}

std::string DescribeCloudDrivePermissionsRequest::getCdsId() const {
  return cdsId_;
}

void DescribeCloudDrivePermissionsRequest::setCdsId(const std::string &cdsId) {
  cdsId_ = cdsId;
  setParameter(std::string("CdsId"), cdsId);
}

std::string DescribeCloudDrivePermissionsRequest::getRegionId() const {
  return regionId_;
}

void DescribeCloudDrivePermissionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

