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

#include <alibabacloud/quickbi-public/model/DataSetBloodRequest.h>

using AlibabaCloud::Quickbi_public::Model::DataSetBloodRequest;

DataSetBloodRequest::DataSetBloodRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "DataSetBlood") {
  setMethod(HttpRequest::Method::Post);
}

DataSetBloodRequest::~DataSetBloodRequest() {}

std::string DataSetBloodRequest::getAccessPoint() const {
  return accessPoint_;
}

void DataSetBloodRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string DataSetBloodRequest::getUserId() const {
  return userId_;
}

void DataSetBloodRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string DataSetBloodRequest::getDataSetIds() const {
  return dataSetIds_;
}

void DataSetBloodRequest::setDataSetIds(const std::string &dataSetIds) {
  dataSetIds_ = dataSetIds;
  setParameter(std::string("DataSetIds"), dataSetIds);
}

std::string DataSetBloodRequest::getWorksType() const {
  return worksType_;
}

void DataSetBloodRequest::setWorksType(const std::string &worksType) {
  worksType_ = worksType;
  setParameter(std::string("WorksType"), worksType);
}

std::string DataSetBloodRequest::getSignType() const {
  return signType_;
}

void DataSetBloodRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

