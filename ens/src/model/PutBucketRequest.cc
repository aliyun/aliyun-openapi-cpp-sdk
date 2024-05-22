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

#include <alibabacloud/ens/model/PutBucketRequest.h>

using AlibabaCloud::Ens::Model::PutBucketRequest;

PutBucketRequest::PutBucketRequest()
    : RpcServiceRequest("ens", "2017-11-10", "PutBucket") {
  setMethod(HttpRequest::Method::Post);
}

PutBucketRequest::~PutBucketRequest() {}

std::string PutBucketRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void PutBucketRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setBodyParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string PutBucketRequest::getLogicalBucketType() const {
  return logicalBucketType_;
}

void PutBucketRequest::setLogicalBucketType(const std::string &logicalBucketType) {
  logicalBucketType_ = logicalBucketType;
  setBodyParameter(std::string("LogicalBucketType"), logicalBucketType);
}

std::string PutBucketRequest::getCity() const {
  return city_;
}

void PutBucketRequest::setCity(const std::string &city) {
  city_ = city;
  setBodyParameter(std::string("City"), city);
}

std::string PutBucketRequest::getDataRedundancyType() const {
  return dataRedundancyType_;
}

void PutBucketRequest::setDataRedundancyType(const std::string &dataRedundancyType) {
  dataRedundancyType_ = dataRedundancyType;
  setBodyParameter(std::string("DataRedundancyType"), dataRedundancyType);
}

std::string PutBucketRequest::getEndpoint() const {
  return endpoint_;
}

void PutBucketRequest::setEndpoint(const std::string &endpoint) {
  endpoint_ = endpoint;
  setBodyParameter(std::string("Endpoint"), endpoint);
}

std::string PutBucketRequest::getBucketName() const {
  return bucketName_;
}

void PutBucketRequest::setBucketName(const std::string &bucketName) {
  bucketName_ = bucketName;
  setBodyParameter(std::string("BucketName"), bucketName);
}

std::string PutBucketRequest::getStorageDomainId() const {
  return storageDomainId_;
}

void PutBucketRequest::setStorageDomainId(const std::string &storageDomainId) {
  storageDomainId_ = storageDomainId;
  setBodyParameter(std::string("StorageDomainId"), storageDomainId);
}

std::string PutBucketRequest::getEngineId() const {
  return engineId_;
}

void PutBucketRequest::setEngineId(const std::string &engineId) {
  engineId_ = engineId;
  setBodyParameter(std::string("EngineId"), engineId);
}

std::string PutBucketRequest::getBucketAcl() const {
  return bucketAcl_;
}

void PutBucketRequest::setBucketAcl(const std::string &bucketAcl) {
  bucketAcl_ = bucketAcl;
  setBodyParameter(std::string("BucketAcl"), bucketAcl);
}

std::string PutBucketRequest::getDispatcherType() const {
  return dispatcherType_;
}

void PutBucketRequest::setDispatcherType(const std::string &dispatcherType) {
  dispatcherType_ = dispatcherType;
  setBodyParameter(std::string("DispatcherType"), dispatcherType);
}

std::string PutBucketRequest::getResourceType() const {
  return resourceType_;
}

void PutBucketRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setBodyParameter(std::string("ResourceType"), resourceType);
}

std::string PutBucketRequest::getStorageClass() const {
  return storageClass_;
}

void PutBucketRequest::setStorageClass(const std::string &storageClass) {
  storageClass_ = storageClass;
  setBodyParameter(std::string("StorageClass"), storageClass);
}

std::string PutBucketRequest::getComment() const {
  return comment_;
}

void PutBucketRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setBodyParameter(std::string("Comment"), comment);
}

