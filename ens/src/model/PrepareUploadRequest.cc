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

#include <alibabacloud/ens/model/PrepareUploadRequest.h>

using AlibabaCloud::Ens::Model::PrepareUploadRequest;

PrepareUploadRequest::PrepareUploadRequest()
    : RpcServiceRequest("ens", "2017-11-10", "PrepareUpload") {
  setMethod(HttpRequest::Method::Post);
}

PrepareUploadRequest::~PrepareUploadRequest() {}

std::string PrepareUploadRequest::getClientIp() const {
  return clientIp_;
}

void PrepareUploadRequest::setClientIp(const std::string &clientIp) {
  clientIp_ = clientIp;
  setParameter(std::string("ClientIp"), clientIp);
}

std::string PrepareUploadRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void PrepareUploadRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string PrepareUploadRequest::getAdditionType() const {
  return additionType_;
}

void PrepareUploadRequest::setAdditionType(const std::string &additionType) {
  additionType_ = additionType;
  setParameter(std::string("AdditionType"), additionType);
}

std::string PrepareUploadRequest::getBucketName() const {
  return bucketName_;
}

void PrepareUploadRequest::setBucketName(const std::string &bucketName) {
  bucketName_ = bucketName;
  setParameter(std::string("BucketName"), bucketName);
}

std::string PrepareUploadRequest::getStation() const {
  return station_;
}

void PrepareUploadRequest::setStation(const std::string &station) {
  station_ = station;
  setParameter(std::string("Station"), station);
}

std::string PrepareUploadRequest::getObjectKey() const {
  return objectKey_;
}

void PrepareUploadRequest::setObjectKey(const std::string &objectKey) {
  objectKey_ = objectKey;
  setParameter(std::string("ObjectKey"), objectKey);
}

long PrepareUploadRequest::getStorageCost() const {
  return storageCost_;
}

void PrepareUploadRequest::setStorageCost(long storageCost) {
  storageCost_ = storageCost;
  setParameter(std::string("StorageCost"), std::to_string(storageCost));
}

