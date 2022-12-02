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

#include <alibabacloud/dts/model/DescribeSubscriptionMetaRequest.h>

using AlibabaCloud::Dts::Model::DescribeSubscriptionMetaRequest;

DescribeSubscriptionMetaRequest::DescribeSubscriptionMetaRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeSubscriptionMeta") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSubscriptionMetaRequest::~DescribeSubscriptionMetaRequest() {}

std::string DescribeSubscriptionMetaRequest::getTopics() const {
  return topics_;
}

void DescribeSubscriptionMetaRequest::setTopics(const std::string &topics) {
  topics_ = topics;
  setParameter(std::string("Topics"), topics);
}

std::string DescribeSubscriptionMetaRequest::getSid() const {
  return sid_;
}

void DescribeSubscriptionMetaRequest::setSid(const std::string &sid) {
  sid_ = sid;
  setParameter(std::string("Sid"), sid);
}

std::string DescribeSubscriptionMetaRequest::getRegionId() const {
  return regionId_;
}

void DescribeSubscriptionMetaRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSubscriptionMetaRequest::getSubMigrationJobIds() const {
  return subMigrationJobIds_;
}

void DescribeSubscriptionMetaRequest::setSubMigrationJobIds(const std::string &subMigrationJobIds) {
  subMigrationJobIds_ = subMigrationJobIds;
  setParameter(std::string("SubMigrationJobIds"), subMigrationJobIds);
}

std::string DescribeSubscriptionMetaRequest::getDtsInstanceId() const {
  return dtsInstanceId_;
}

void DescribeSubscriptionMetaRequest::setDtsInstanceId(const std::string &dtsInstanceId) {
  dtsInstanceId_ = dtsInstanceId;
  setParameter(std::string("DtsInstanceId"), dtsInstanceId);
}

