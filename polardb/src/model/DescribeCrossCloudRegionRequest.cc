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

#include <alibabacloud/polardb/model/DescribeCrossCloudRegionRequest.h>

using AlibabaCloud::Polardb::Model::DescribeCrossCloudRegionRequest;

DescribeCrossCloudRegionRequest::DescribeCrossCloudRegionRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeCrossCloudRegion") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCrossCloudRegionRequest::~DescribeCrossCloudRegionRequest() {}

std::string DescribeCrossCloudRegionRequest::getCloudProvider() const {
  return cloudProvider_;
}

void DescribeCrossCloudRegionRequest::setCloudProvider(const std::string &cloudProvider) {
  cloudProvider_ = cloudProvider;
  setParameter(std::string("CloudProvider"), cloudProvider);
}

std::string DescribeCrossCloudRegionRequest::getCrossCloudRegionId() const {
  return crossCloudRegionId_;
}

void DescribeCrossCloudRegionRequest::setCrossCloudRegionId(const std::string &crossCloudRegionId) {
  crossCloudRegionId_ = crossCloudRegionId;
  setParameter(std::string("CrossCloudRegionId"), crossCloudRegionId);
}

std::string DescribeCrossCloudRegionRequest::getDBType() const {
  return dBType_;
}

void DescribeCrossCloudRegionRequest::setDBType(const std::string &dBType) {
  dBType_ = dBType;
  setParameter(std::string("DBType"), dBType);
}

