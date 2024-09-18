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

#include <alibabacloud/quickbi-public/model/DataSourceBloodRequest.h>

using AlibabaCloud::Quickbi_public::Model::DataSourceBloodRequest;

DataSourceBloodRequest::DataSourceBloodRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "DataSourceBlood") {
  setMethod(HttpRequest::Method::Post);
}

DataSourceBloodRequest::~DataSourceBloodRequest() {}

std::string DataSourceBloodRequest::getAccessPoint() const {
  return accessPoint_;
}

void DataSourceBloodRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string DataSourceBloodRequest::getSignType() const {
  return signType_;
}

void DataSourceBloodRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string DataSourceBloodRequest::getDataSourceId() const {
  return dataSourceId_;
}

void DataSourceBloodRequest::setDataSourceId(const std::string &dataSourceId) {
  dataSourceId_ = dataSourceId;
  setParameter(std::string("DataSourceId"), dataSourceId);
}

