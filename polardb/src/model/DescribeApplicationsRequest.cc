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

#include <alibabacloud/polardb/model/DescribeApplicationsRequest.h>

using AlibabaCloud::Polardb::Model::DescribeApplicationsRequest;

DescribeApplicationsRequest::DescribeApplicationsRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeApplications") {
  setMethod(HttpRequest::Method::Post);
}

DescribeApplicationsRequest::~DescribeApplicationsRequest() {}

int DescribeApplicationsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeApplicationsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeApplicationsRequest::getRegionId() const {
  return regionId_;
}

void DescribeApplicationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeApplicationsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeApplicationsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeApplicationsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeApplicationsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeApplicationsRequest::getApplicationIds() const {
  return applicationIds_;
}

void DescribeApplicationsRequest::setApplicationIds(const std::string &applicationIds) {
  applicationIds_ = applicationIds;
  setParameter(std::string("ApplicationIds"), applicationIds);
}

