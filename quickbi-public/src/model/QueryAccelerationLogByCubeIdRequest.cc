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

#include <alibabacloud/quickbi-public/model/QueryAccelerationLogByCubeIdRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryAccelerationLogByCubeIdRequest;

QueryAccelerationLogByCubeIdRequest::QueryAccelerationLogByCubeIdRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QueryAccelerationLogByCubeId") {
  setMethod(HttpRequest::Method::Post);
}

QueryAccelerationLogByCubeIdRequest::~QueryAccelerationLogByCubeIdRequest() {}

std::string QueryAccelerationLogByCubeIdRequest::getAccessPoint() const {
  return accessPoint_;
}

void QueryAccelerationLogByCubeIdRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string QueryAccelerationLogByCubeIdRequest::getStartDate() const {
  return startDate_;
}

void QueryAccelerationLogByCubeIdRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

int QueryAccelerationLogByCubeIdRequest::getPageSize() const {
  return pageSize_;
}

void QueryAccelerationLogByCubeIdRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryAccelerationLogByCubeIdRequest::getCubeId() const {
  return cubeId_;
}

void QueryAccelerationLogByCubeIdRequest::setCubeId(const std::string &cubeId) {
  cubeId_ = cubeId;
  setParameter(std::string("CubeId"), cubeId);
}

std::string QueryAccelerationLogByCubeIdRequest::getSignType() const {
  return signType_;
}

void QueryAccelerationLogByCubeIdRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string QueryAccelerationLogByCubeIdRequest::getEndDate() const {
  return endDate_;
}

void QueryAccelerationLogByCubeIdRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

int QueryAccelerationLogByCubeIdRequest::getPageNo() const {
  return pageNo_;
}

void QueryAccelerationLogByCubeIdRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

