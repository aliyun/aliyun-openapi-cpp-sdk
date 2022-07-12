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

#include <alibabacloud/antiddos-public/model/DescribeInstanceRequest.h>

using AlibabaCloud::Antiddos_public::Model::DescribeInstanceRequest;

DescribeInstanceRequest::DescribeInstanceRequest()
    : RpcServiceRequest("antiddos-public", "2017-05-18", "DescribeInstance") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceRequest::~DescribeInstanceRequest() {}

std::string DescribeInstanceRequest::getEagleEyeRpcId() const {
  return eagleEyeRpcId_;
}

void DescribeInstanceRequest::setEagleEyeRpcId(const std::string &eagleEyeRpcId) {
  eagleEyeRpcId_ = eagleEyeRpcId;
  setBodyParameter(std::string("eagleEyeRpcId"), eagleEyeRpcId);
}

std::string DescribeInstanceRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeInstanceRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeInstanceRequest::getEagleEyeTraceId() const {
  return eagleEyeTraceId_;
}

void DescribeInstanceRequest::setEagleEyeTraceId(const std::string &eagleEyeTraceId) {
  eagleEyeTraceId_ = eagleEyeTraceId;
  setBodyParameter(std::string("eagleEyeTraceId"), eagleEyeTraceId);
}

int DescribeInstanceRequest::getPageSize() const {
  return pageSize_;
}

void DescribeInstanceRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeInstanceRequest::getDdosRegionId() const {
  return ddosRegionId_;
}

void DescribeInstanceRequest::setDdosRegionId(const std::string &ddosRegionId) {
  ddosRegionId_ = ddosRegionId;
  setParameter(std::string("DdosRegionId"), ddosRegionId);
}

std::string DescribeInstanceRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeInstanceRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeInstanceRequest::getLang() const {
  return lang_;
}

void DescribeInstanceRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeInstanceRequest::getDdosStatus() const {
  return ddosStatus_;
}

void DescribeInstanceRequest::setDdosStatus(const std::string &ddosStatus) {
  ddosStatus_ = ddosStatus;
  setParameter(std::string("DdosStatus"), ddosStatus);
}

int DescribeInstanceRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeInstanceRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeInstanceRequest::getInstanceName() const {
  return instanceName_;
}

void DescribeInstanceRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string DescribeInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeInstanceRequest::getEagleEyeUserData() const {
  return eagleEyeUserData_;
}

void DescribeInstanceRequest::setEagleEyeUserData(const std::string &eagleEyeUserData) {
  eagleEyeUserData_ = eagleEyeUserData;
  setBodyParameter(std::string("eagleEyeUserData"), eagleEyeUserData);
}

std::string DescribeInstanceRequest::getInstanceIp() const {
  return instanceIp_;
}

void DescribeInstanceRequest::setInstanceIp(const std::string &instanceIp) {
  instanceIp_ = instanceIp;
  setParameter(std::string("InstanceIp"), instanceIp);
}

