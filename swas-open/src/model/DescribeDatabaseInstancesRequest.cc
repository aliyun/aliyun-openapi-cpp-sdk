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

#include <alibabacloud/swas-open/model/DescribeDatabaseInstancesRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::DescribeDatabaseInstancesRequest;

DescribeDatabaseInstancesRequest::DescribeDatabaseInstancesRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "DescribeDatabaseInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDatabaseInstancesRequest::~DescribeDatabaseInstancesRequest() {}

std::string DescribeDatabaseInstancesRequest::getDatabaseInstanceIds() const {
  return databaseInstanceIds_;
}

void DescribeDatabaseInstancesRequest::setDatabaseInstanceIds(const std::string &databaseInstanceIds) {
  databaseInstanceIds_ = databaseInstanceIds;
  setParameter(std::string("DatabaseInstanceIds"), databaseInstanceIds);
}

int DescribeDatabaseInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDatabaseInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDatabaseInstancesRequest::getRegionId() const {
  return regionId_;
}

void DescribeDatabaseInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeDatabaseInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDatabaseInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

