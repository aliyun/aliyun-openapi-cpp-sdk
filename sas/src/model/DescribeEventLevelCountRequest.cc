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

#include <alibabacloud/sas/model/DescribeEventLevelCountRequest.h>

using AlibabaCloud::Sas::Model::DescribeEventLevelCountRequest;

DescribeEventLevelCountRequest::DescribeEventLevelCountRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeEventLevelCount") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEventLevelCountRequest::~DescribeEventLevelCountRequest() {}

std::string DescribeEventLevelCountRequest::getTargetType() const {
  return targetType_;
}

void DescribeEventLevelCountRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string DescribeEventLevelCountRequest::getType() const {
  return type_;
}

void DescribeEventLevelCountRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeEventLevelCountRequest::getContainerFieldName() const {
  return containerFieldName_;
}

void DescribeEventLevelCountRequest::setContainerFieldName(const std::string &containerFieldName) {
  containerFieldName_ = containerFieldName;
  setParameter(std::string("ContainerFieldName"), containerFieldName);
}

std::string DescribeEventLevelCountRequest::getContainerFieldValue() const {
  return containerFieldValue_;
}

void DescribeEventLevelCountRequest::setContainerFieldValue(const std::string &containerFieldValue) {
  containerFieldValue_ = containerFieldValue;
  setParameter(std::string("ContainerFieldValue"), containerFieldValue);
}

std::string DescribeEventLevelCountRequest::getFrom() const {
  return from_;
}

void DescribeEventLevelCountRequest::setFrom(const std::string &from) {
  from_ = from;
  setParameter(std::string("From"), from);
}

std::string DescribeEventLevelCountRequest::getClusterId() const {
  return clusterId_;
}

void DescribeEventLevelCountRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DescribeEventLevelCountRequest::getContainerIds() const {
  return containerIds_;
}

void DescribeEventLevelCountRequest::setContainerIds(const std::string &containerIds) {
  containerIds_ = containerIds;
  setParameter(std::string("ContainerIds"), containerIds);
}

