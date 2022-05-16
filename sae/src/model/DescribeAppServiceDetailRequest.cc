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

#include <alibabacloud/sae/model/DescribeAppServiceDetailRequest.h>

using AlibabaCloud::Sae::Model::DescribeAppServiceDetailRequest;

DescribeAppServiceDetailRequest::DescribeAppServiceDetailRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/service/describeAppServiceDetail"};
  setMethod(HttpRequest::Method::Get);
}

DescribeAppServiceDetailRequest::~DescribeAppServiceDetailRequest() {}

std::string DescribeAppServiceDetailRequest::getServiceType() const {
  return serviceType_;
}

void DescribeAppServiceDetailRequest::setServiceType(const std::string &serviceType) {
  serviceType_ = serviceType;
  setParameter(std::string("ServiceType"), serviceType);
}

std::string DescribeAppServiceDetailRequest::getAppId() const {
  return appId_;
}

void DescribeAppServiceDetailRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string DescribeAppServiceDetailRequest::getServiceVersion() const {
  return serviceVersion_;
}

void DescribeAppServiceDetailRequest::setServiceVersion(const std::string &serviceVersion) {
  serviceVersion_ = serviceVersion;
  setParameter(std::string("ServiceVersion"), serviceVersion);
}

std::string DescribeAppServiceDetailRequest::getServiceName() const {
  return serviceName_;
}

void DescribeAppServiceDetailRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string DescribeAppServiceDetailRequest::getServiceGroup() const {
  return serviceGroup_;
}

void DescribeAppServiceDetailRequest::setServiceGroup(const std::string &serviceGroup) {
  serviceGroup_ = serviceGroup;
  setParameter(std::string("ServiceGroup"), serviceGroup);
}

