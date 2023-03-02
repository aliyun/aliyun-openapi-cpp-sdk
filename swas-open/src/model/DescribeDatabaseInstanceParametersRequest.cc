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

#include <alibabacloud/swas-open/model/DescribeDatabaseInstanceParametersRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::DescribeDatabaseInstanceParametersRequest;

DescribeDatabaseInstanceParametersRequest::DescribeDatabaseInstanceParametersRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "DescribeDatabaseInstanceParameters") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDatabaseInstanceParametersRequest::~DescribeDatabaseInstanceParametersRequest() {}

std::string DescribeDatabaseInstanceParametersRequest::getDatabaseInstanceId() const {
  return databaseInstanceId_;
}

void DescribeDatabaseInstanceParametersRequest::setDatabaseInstanceId(const std::string &databaseInstanceId) {
  databaseInstanceId_ = databaseInstanceId;
  setParameter(std::string("DatabaseInstanceId"), databaseInstanceId);
}

std::string DescribeDatabaseInstanceParametersRequest::getRegionId() const {
  return regionId_;
}

void DescribeDatabaseInstanceParametersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

