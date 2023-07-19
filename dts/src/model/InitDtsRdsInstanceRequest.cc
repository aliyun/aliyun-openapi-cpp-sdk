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

#include <alibabacloud/dts/model/InitDtsRdsInstanceRequest.h>

using AlibabaCloud::Dts::Model::InitDtsRdsInstanceRequest;

InitDtsRdsInstanceRequest::InitDtsRdsInstanceRequest()
    : RpcServiceRequest("dts", "2020-01-01", "InitDtsRdsInstance") {
  setMethod(HttpRequest::Method::Post);
}

InitDtsRdsInstanceRequest::~InitDtsRdsInstanceRequest() {}

std::string InitDtsRdsInstanceRequest::getEndpointInstanceId() const {
  return endpointInstanceId_;
}

void InitDtsRdsInstanceRequest::setEndpointInstanceId(const std::string &endpointInstanceId) {
  endpointInstanceId_ = endpointInstanceId;
  setParameter(std::string("EndpointInstanceId"), endpointInstanceId);
}

std::string InitDtsRdsInstanceRequest::getEndpointRegion() const {
  return endpointRegion_;
}

void InitDtsRdsInstanceRequest::setEndpointRegion(const std::string &endpointRegion) {
  endpointRegion_ = endpointRegion;
  setParameter(std::string("EndpointRegion"), endpointRegion);
}

std::string InitDtsRdsInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void InitDtsRdsInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string InitDtsRdsInstanceRequest::getRegionId() const {
  return regionId_;
}

void InitDtsRdsInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string InitDtsRdsInstanceRequest::getEndpointCenId() const {
  return endpointCenId_;
}

void InitDtsRdsInstanceRequest::setEndpointCenId(const std::string &endpointCenId) {
  endpointCenId_ = endpointCenId;
  setParameter(std::string("EndpointCenId"), endpointCenId);
}

std::string InitDtsRdsInstanceRequest::getEndpointInstanceType() const {
  return endpointInstanceType_;
}

void InitDtsRdsInstanceRequest::setEndpointInstanceType(const std::string &endpointInstanceType) {
  endpointInstanceType_ = endpointInstanceType;
  setParameter(std::string("EndpointInstanceType"), endpointInstanceType);
}

std::string InitDtsRdsInstanceRequest::getDtsInstanceId() const {
  return dtsInstanceId_;
}

void InitDtsRdsInstanceRequest::setDtsInstanceId(const std::string &dtsInstanceId) {
  dtsInstanceId_ = dtsInstanceId;
  setParameter(std::string("DtsInstanceId"), dtsInstanceId);
}

