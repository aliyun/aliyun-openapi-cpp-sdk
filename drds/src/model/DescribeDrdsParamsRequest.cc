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

#include <alibabacloud/drds/model/DescribeDrdsParamsRequest.h>

using AlibabaCloud::Drds::Model::DescribeDrdsParamsRequest;

DescribeDrdsParamsRequest::DescribeDrdsParamsRequest()
    : RpcServiceRequest("drds", "2019-01-23", "DescribeDrdsParams") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDrdsParamsRequest::~DescribeDrdsParamsRequest() {}

std::string DescribeDrdsParamsRequest::getParamLevel() const {
  return paramLevel_;
}

void DescribeDrdsParamsRequest::setParamLevel(const std::string &paramLevel) {
  paramLevel_ = paramLevel;
  setParameter(std::string("ParamLevel"), paramLevel);
}

std::string DescribeDrdsParamsRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void DescribeDrdsParamsRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string DescribeDrdsParamsRequest::getDbName() const {
  return dbName_;
}

void DescribeDrdsParamsRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

std::string DescribeDrdsParamsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDrdsParamsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

