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

#include <alibabacloud/ens/model/DescribeDeviceServiceRequest.h>

using AlibabaCloud::Ens::Model::DescribeDeviceServiceRequest;

DescribeDeviceServiceRequest::DescribeDeviceServiceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeDeviceService") {
  setMethod(HttpRequest::Method::Get);
}

DescribeDeviceServiceRequest::~DescribeDeviceServiceRequest() {}

std::string DescribeDeviceServiceRequest::getRegionId() const {
  return regionId_;
}

void DescribeDeviceServiceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDeviceServiceRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeDeviceServiceRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string DescribeDeviceServiceRequest::getOrderId() const {
  return orderId_;
}

void DescribeDeviceServiceRequest::setOrderId(const std::string &orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), orderId);
}

std::string DescribeDeviceServiceRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeDeviceServiceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeDeviceServiceRequest::getAppId() const {
  return appId_;
}

void DescribeDeviceServiceRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string DescribeDeviceServiceRequest::getServiceId() const {
  return serviceId_;
}

void DescribeDeviceServiceRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

