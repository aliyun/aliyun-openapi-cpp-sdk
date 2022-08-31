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

#include <alibabacloud/rds/model/RequestServiceOfCloudDBARequest.h>

using AlibabaCloud::Rds::Model::RequestServiceOfCloudDBARequest;

RequestServiceOfCloudDBARequest::RequestServiceOfCloudDBARequest()
    : RpcServiceRequest("rds", "2014-08-15", "RequestServiceOfCloudDBA") {
  setMethod(HttpRequest::Method::Post);
}

RequestServiceOfCloudDBARequest::~RequestServiceOfCloudDBARequest() {}

std::string RequestServiceOfCloudDBARequest::getServiceRequestType() const {
  return serviceRequestType_;
}

void RequestServiceOfCloudDBARequest::setServiceRequestType(const std::string &serviceRequestType) {
  serviceRequestType_ = serviceRequestType;
  setParameter(std::string("ServiceRequestType"), serviceRequestType);
}

std::string RequestServiceOfCloudDBARequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RequestServiceOfCloudDBARequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RequestServiceOfCloudDBARequest::getServiceRequestParam() const {
  return serviceRequestParam_;
}

void RequestServiceOfCloudDBARequest::setServiceRequestParam(const std::string &serviceRequestParam) {
  serviceRequestParam_ = serviceRequestParam;
  setParameter(std::string("ServiceRequestParam"), serviceRequestParam);
}

std::string RequestServiceOfCloudDBARequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void RequestServiceOfCloudDBARequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

