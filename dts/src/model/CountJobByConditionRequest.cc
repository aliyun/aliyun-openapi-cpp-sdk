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

#include <alibabacloud/dts/model/CountJobByConditionRequest.h>

using AlibabaCloud::Dts::Model::CountJobByConditionRequest;

CountJobByConditionRequest::CountJobByConditionRequest()
    : RpcServiceRequest("dts", "2020-01-01", "CountJobByCondition") {
  setMethod(HttpRequest::Method::Post);
}

CountJobByConditionRequest::~CountJobByConditionRequest() {}

std::string CountJobByConditionRequest::getType() const {
  return type_;
}

void CountJobByConditionRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string CountJobByConditionRequest::getSrcDbType() const {
  return srcDbType_;
}

void CountJobByConditionRequest::setSrcDbType(const std::string &srcDbType) {
  srcDbType_ = srcDbType;
  setParameter(std::string("SrcDbType"), srcDbType);
}

std::string CountJobByConditionRequest::getRegionId() const {
  return regionId_;
}

void CountJobByConditionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CountJobByConditionRequest::getGroupId() const {
  return groupId_;
}

void CountJobByConditionRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string CountJobByConditionRequest::getParams() const {
  return params_;
}

void CountJobByConditionRequest::setParams(const std::string &params) {
  params_ = params;
  setParameter(std::string("Params"), params);
}

std::string CountJobByConditionRequest::getJobType() const {
  return jobType_;
}

void CountJobByConditionRequest::setJobType(const std::string &jobType) {
  jobType_ = jobType;
  setParameter(std::string("JobType"), jobType);
}

std::string CountJobByConditionRequest::getDestDbType() const {
  return destDbType_;
}

void CountJobByConditionRequest::setDestDbType(const std::string &destDbType) {
  destDbType_ = destDbType;
  setParameter(std::string("DestDbType"), destDbType);
}

std::string CountJobByConditionRequest::getRegion() const {
  return region_;
}

void CountJobByConditionRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::string CountJobByConditionRequest::getStatus() const {
  return status_;
}

void CountJobByConditionRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

