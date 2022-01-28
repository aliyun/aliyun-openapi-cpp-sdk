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

#include <alibabacloud/ens/model/RescaleDeviceServiceRequest.h>

using AlibabaCloud::Ens::Model::RescaleDeviceServiceRequest;

RescaleDeviceServiceRequest::RescaleDeviceServiceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "RescaleDeviceService") {
  setMethod(HttpRequest::Method::Post);
}

RescaleDeviceServiceRequest::~RescaleDeviceServiceRequest() {}

std::string RescaleDeviceServiceRequest::getResourceSelector() const {
  return resourceSelector_;
}

void RescaleDeviceServiceRequest::setResourceSelector(const std::string &resourceSelector) {
  resourceSelector_ = resourceSelector;
  setBodyParameter(std::string("ResourceSelector"), resourceSelector);
}

std::string RescaleDeviceServiceRequest::getResourceInfo() const {
  return resourceInfo_;
}

void RescaleDeviceServiceRequest::setResourceInfo(const std::string &resourceInfo) {
  resourceInfo_ = resourceInfo;
  setBodyParameter(std::string("ResourceInfo"), resourceInfo);
}

std::string RescaleDeviceServiceRequest::getRescaleType() const {
  return rescaleType_;
}

void RescaleDeviceServiceRequest::setRescaleType(const std::string &rescaleType) {
  rescaleType_ = rescaleType;
  setParameter(std::string("RescaleType"), rescaleType);
}

std::string RescaleDeviceServiceRequest::getImageId() const {
  return imageId_;
}

void RescaleDeviceServiceRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

long RescaleDeviceServiceRequest::getTimeout() const {
  return timeout_;
}

void RescaleDeviceServiceRequest::setTimeout(long timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::string RescaleDeviceServiceRequest::getRescaleLevel() const {
  return rescaleLevel_;
}

void RescaleDeviceServiceRequest::setRescaleLevel(const std::string &rescaleLevel) {
  rescaleLevel_ = rescaleLevel;
  setParameter(std::string("RescaleLevel"), rescaleLevel);
}

std::string RescaleDeviceServiceRequest::getResourceSpec() const {
  return resourceSpec_;
}

void RescaleDeviceServiceRequest::setResourceSpec(const std::string &resourceSpec) {
  resourceSpec_ = resourceSpec;
  setParameter(std::string("ResourceSpec"), resourceSpec);
}

int RescaleDeviceServiceRequest::getIpType() const {
  return ipType_;
}

void RescaleDeviceServiceRequest::setIpType(int ipType) {
  ipType_ = ipType;
  setParameter(std::string("IpType"), std::to_string(ipType));
}

std::string RescaleDeviceServiceRequest::getAppId() const {
  return appId_;
}

void RescaleDeviceServiceRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string RescaleDeviceServiceRequest::getServiceId() const {
  return serviceId_;
}

void RescaleDeviceServiceRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

