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

#include <alibabacloud/sas/model/DescribeNsasSuspEventTypeRequest.h>

using AlibabaCloud::Sas::Model::DescribeNsasSuspEventTypeRequest;

DescribeNsasSuspEventTypeRequest::DescribeNsasSuspEventTypeRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeNsasSuspEventType") {
  setMethod(HttpRequest::Method::Post);
}

DescribeNsasSuspEventTypeRequest::~DescribeNsasSuspEventTypeRequest() {}

std::string DescribeNsasSuspEventTypeRequest::getTargetType() const {
  return targetType_;
}

void DescribeNsasSuspEventTypeRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string DescribeNsasSuspEventTypeRequest::getRemark() const {
  return remark_;
}

void DescribeNsasSuspEventTypeRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string DescribeNsasSuspEventTypeRequest::getContainerFieldName() const {
  return containerFieldName_;
}

void DescribeNsasSuspEventTypeRequest::setContainerFieldName(const std::string &containerFieldName) {
  containerFieldName_ = containerFieldName;
  setParameter(std::string("ContainerFieldName"), containerFieldName);
}

std::string DescribeNsasSuspEventTypeRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeNsasSuspEventTypeRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeNsasSuspEventTypeRequest::getContainerFieldValue() const {
  return containerFieldValue_;
}

void DescribeNsasSuspEventTypeRequest::setContainerFieldValue(const std::string &containerFieldValue) {
  containerFieldValue_ = containerFieldValue;
  setParameter(std::string("ContainerFieldValue"), containerFieldValue);
}

std::string DescribeNsasSuspEventTypeRequest::getFrom() const {
  return from_;
}

void DescribeNsasSuspEventTypeRequest::setFrom(const std::string &from) {
  from_ = from;
  setParameter(std::string("From"), from);
}

std::string DescribeNsasSuspEventTypeRequest::getLang() const {
  return lang_;
}

void DescribeNsasSuspEventTypeRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeNsasSuspEventTypeRequest::getClusterId() const {
  return clusterId_;
}

void DescribeNsasSuspEventTypeRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DescribeNsasSuspEventTypeRequest::getName() const {
  return name_;
}

void DescribeNsasSuspEventTypeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string DescribeNsasSuspEventTypeRequest::getUuids() const {
  return uuids_;
}

void DescribeNsasSuspEventTypeRequest::setUuids(const std::string &uuids) {
  uuids_ = uuids;
  setParameter(std::string("Uuids"), uuids);
}

