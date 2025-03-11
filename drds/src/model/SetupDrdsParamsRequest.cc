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

#include <alibabacloud/drds/model/SetupDrdsParamsRequest.h>

using AlibabaCloud::Drds::Model::SetupDrdsParamsRequest;

SetupDrdsParamsRequest::SetupDrdsParamsRequest()
    : RpcServiceRequest("drds", "2019-01-23", "SetupDrdsParams") {
  setMethod(HttpRequest::Method::Post);
}

SetupDrdsParamsRequest::~SetupDrdsParamsRequest() {}

std::string SetupDrdsParamsRequest::getParamLevel() const {
  return paramLevel_;
}

void SetupDrdsParamsRequest::setParamLevel(const std::string &paramLevel) {
  paramLevel_ = paramLevel;
  setParameter(std::string("ParamLevel"), paramLevel);
}

std::vector<SetupDrdsParamsRequest::Data> SetupDrdsParamsRequest::getData() const {
  return data_;
}

void SetupDrdsParamsRequest::setData(const std::vector<SetupDrdsParamsRequest::Data> &data) {
  data_ = data;
  for(int dep1 = 0; dep1 != data.size(); dep1++) {
  auto dataObj = data.at(dep1);
  std::string dataObjStr = std::string("Data") + "." + std::to_string(dep1 + 1);
    setParameter(dataObjStr + ".ParamType", dataObj.paramType);
    setParameter(dataObjStr + ".DbName", dataObj.dbName);
    setParameter(dataObjStr + ".ParamRanges", dataObj.paramRanges);
    setParameter(dataObjStr + ".ParamVariableName", dataObj.paramVariableName);
    setParameter(dataObjStr + ".ParamValue", dataObj.paramValue);
  }
}

std::string SetupDrdsParamsRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void SetupDrdsParamsRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string SetupDrdsParamsRequest::getRegionId() const {
  return regionId_;
}

void SetupDrdsParamsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

