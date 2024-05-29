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

#include <alibabacloud/ddoscoo/model/DescribePortCcAttackTopIPRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribePortCcAttackTopIPRequest;

DescribePortCcAttackTopIPRequest::DescribePortCcAttackTopIPRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribePortCcAttackTopIP") {
  setMethod(HttpRequest::Method::Post);
}

DescribePortCcAttackTopIPRequest::~DescribePortCcAttackTopIPRequest() {}

long DescribePortCcAttackTopIPRequest::getStartTimestamp() const {
  return startTimestamp_;
}

void DescribePortCcAttackTopIPRequest::setStartTimestamp(long startTimestamp) {
  startTimestamp_ = startTimestamp;
  setParameter(std::string("StartTimestamp"), std::to_string(startTimestamp));
}

std::string DescribePortCcAttackTopIPRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribePortCcAttackTopIPRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long DescribePortCcAttackTopIPRequest::getLimit() const {
  return limit_;
}

void DescribePortCcAttackTopIPRequest::setLimit(long limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

std::string DescribePortCcAttackTopIPRequest::getIp() const {
  return ip_;
}

void DescribePortCcAttackTopIPRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

std::string DescribePortCcAttackTopIPRequest::getPort() const {
  return port_;
}

void DescribePortCcAttackTopIPRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}

