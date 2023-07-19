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

#include <alibabacloud/dts/model/DescribeSynchronizationJobsRequest.h>

using AlibabaCloud::Dts::Model::DescribeSynchronizationJobsRequest;

DescribeSynchronizationJobsRequest::DescribeSynchronizationJobsRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeSynchronizationJobs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSynchronizationJobsRequest::~DescribeSynchronizationJobsRequest() {}

std::string DescribeSynchronizationJobsRequest::getClientToken() const {
  return clientToken_;
}

void DescribeSynchronizationJobsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int DescribeSynchronizationJobsRequest::getPageNum() const {
  return pageNum_;
}

void DescribeSynchronizationJobsRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string DescribeSynchronizationJobsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeSynchronizationJobsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeSynchronizationJobsRequest::getSynchronizationJobName() const {
  return synchronizationJobName_;
}

void DescribeSynchronizationJobsRequest::setSynchronizationJobName(const std::string &synchronizationJobName) {
  synchronizationJobName_ = synchronizationJobName;
  setParameter(std::string("SynchronizationJobName"), synchronizationJobName);
}

std::string DescribeSynchronizationJobsRequest::getAccountId() const {
  return accountId_;
}

void DescribeSynchronizationJobsRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setParameter(std::string("AccountId"), accountId);
}

std::string DescribeSynchronizationJobsRequest::getRegionId() const {
  return regionId_;
}

void DescribeSynchronizationJobsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeSynchronizationJobsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSynchronizationJobsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeSynchronizationJobsRequest::Tag> DescribeSynchronizationJobsRequest::getTag() const {
  return tag_;
}

void DescribeSynchronizationJobsRequest::setTag(const std::vector<DescribeSynchronizationJobsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeSynchronizationJobsRequest::getInstFilterRegion() const {
  return instFilterRegion_;
}

void DescribeSynchronizationJobsRequest::setInstFilterRegion(const std::string &instFilterRegion) {
  instFilterRegion_ = instFilterRegion;
  setParameter(std::string("InstFilterRegion"), instFilterRegion);
}

std::string DescribeSynchronizationJobsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSynchronizationJobsRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

