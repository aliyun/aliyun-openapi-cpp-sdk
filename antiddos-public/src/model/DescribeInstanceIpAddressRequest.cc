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

#include <alibabacloud/antiddos-public/model/DescribeInstanceIpAddressRequest.h>

using AlibabaCloud::Antiddos_public::Model::DescribeInstanceIpAddressRequest;

DescribeInstanceIpAddressRequest::DescribeInstanceIpAddressRequest()
    : RpcServiceRequest("antiddos-public", "2017-05-18", "DescribeInstanceIpAddress") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceIpAddressRequest::~DescribeInstanceIpAddressRequest() {}

std::string DescribeInstanceIpAddressRequest::getEagleEyeRpcId() const {
  return eagleEyeRpcId_;
}

void DescribeInstanceIpAddressRequest::setEagleEyeRpcId(const std::string &eagleEyeRpcId) {
  eagleEyeRpcId_ = eagleEyeRpcId;
  setBodyParameter(std::string("EagleEyeRpcId"), eagleEyeRpcId);
}

std::string DescribeInstanceIpAddressRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeInstanceIpAddressRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeInstanceIpAddressRequest::getEagleEyeTraceId() const {
  return eagleEyeTraceId_;
}

void DescribeInstanceIpAddressRequest::setEagleEyeTraceId(const std::string &eagleEyeTraceId) {
  eagleEyeTraceId_ = eagleEyeTraceId;
  setBodyParameter(std::string("EagleEyeTraceId"), eagleEyeTraceId);
}

int DescribeInstanceIpAddressRequest::getPageSize() const {
  return pageSize_;
}

void DescribeInstanceIpAddressRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeInstanceIpAddressRequest::getDdosRegionId() const {
  return ddosRegionId_;
}

void DescribeInstanceIpAddressRequest::setDdosRegionId(const std::string &ddosRegionId) {
  ddosRegionId_ = ddosRegionId;
  setParameter(std::string("DdosRegionId"), ddosRegionId);
}

std::string DescribeInstanceIpAddressRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeInstanceIpAddressRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeInstanceIpAddressRequest::getLang() const {
  return lang_;
}

void DescribeInstanceIpAddressRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeInstanceIpAddressRequest::getDdosStatus() const {
  return ddosStatus_;
}

void DescribeInstanceIpAddressRequest::setDdosStatus(const std::string &ddosStatus) {
  ddosStatus_ = ddosStatus;
  setParameter(std::string("DdosStatus"), ddosStatus);
}

int DescribeInstanceIpAddressRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeInstanceIpAddressRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeInstanceIpAddressRequest::getInstanceName() const {
  return instanceName_;
}

void DescribeInstanceIpAddressRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string DescribeInstanceIpAddressRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstanceIpAddressRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeInstanceIpAddressRequest::getEagleEyeUserData() const {
  return eagleEyeUserData_;
}

void DescribeInstanceIpAddressRequest::setEagleEyeUserData(const std::string &eagleEyeUserData) {
  eagleEyeUserData_ = eagleEyeUserData;
  setBodyParameter(std::string("EagleEyeUserData"), eagleEyeUserData);
}

std::string DescribeInstanceIpAddressRequest::getInstanceIp() const {
  return instanceIp_;
}

void DescribeInstanceIpAddressRequest::setInstanceIp(const std::string &instanceIp) {
  instanceIp_ = instanceIp;
  setParameter(std::string("InstanceIp"), instanceIp);
}

