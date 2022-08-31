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

#include <alibabacloud/rds/model/GetDbProxyInstanceSslRequest.h>

using AlibabaCloud::Rds::Model::GetDbProxyInstanceSslRequest;

GetDbProxyInstanceSslRequest::GetDbProxyInstanceSslRequest()
    : RpcServiceRequest("rds", "2014-08-15", "GetDbProxyInstanceSsl") {
  setMethod(HttpRequest::Method::Post);
}

GetDbProxyInstanceSslRequest::~GetDbProxyInstanceSslRequest() {}

std::string GetDbProxyInstanceSslRequest::getDBProxyEngineType() const {
  return dBProxyEngineType_;
}

void GetDbProxyInstanceSslRequest::setDBProxyEngineType(const std::string &dBProxyEngineType) {
  dBProxyEngineType_ = dBProxyEngineType;
  setParameter(std::string("DBProxyEngineType"), dBProxyEngineType);
}

std::string GetDbProxyInstanceSslRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetDbProxyInstanceSslRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetDbProxyInstanceSslRequest::getRegionId() const {
  return regionId_;
}

void GetDbProxyInstanceSslRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetDbProxyInstanceSslRequest::getDbInstanceId() const {
  return dbInstanceId_;
}

void GetDbProxyInstanceSslRequest::setDbInstanceId(const std::string &dbInstanceId) {
  dbInstanceId_ = dbInstanceId;
  setParameter(std::string("DbInstanceId"), dbInstanceId);
}

