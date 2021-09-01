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

#include <alibabacloud/mts/model/SubmitURLUploadJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitURLUploadJobRequest;

SubmitURLUploadJobRequest::SubmitURLUploadJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitURLUploadJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitURLUploadJobRequest::~SubmitURLUploadJobRequest() {}

SubmitURLUploadJobRequest::TargetStorage SubmitURLUploadJobRequest::getTargetStorage() const {
  return targetStorage_;
}

void SubmitURLUploadJobRequest::setTargetStorage(const SubmitURLUploadJobRequest::TargetStorage &targetStorage) {
  targetStorage_ = targetStorage;
  setParameter(std::string("TargetStorage") + ".Bucket", targetStorage.bucket);
  setParameter(std::string("TargetStorage") + ".BucketOwnerId", targetStorage.bucketOwnerId);
  setParameter(std::string("TargetStorage") + ".S3Provider", targetStorage.s3Provider);
  setParameter(std::string("TargetStorage") + ".S3Endpoint", targetStorage.s3Endpoint);
  setParameter(std::string("TargetStorage") + ".ObjectKey", targetStorage.objectKey);
  setParameter(std::string("TargetStorage") + ".S3AccessKey", targetStorage.s3AccessKey);
  setParameter(std::string("TargetStorage") + ".S3SecretKey", targetStorage.s3SecretKey);
  setParameter(std::string("TargetStorage") + ".S3SessionToken", targetStorage.s3SessionToken);
  setParameter(std::string("TargetStorage") + ".ObjectRoleName", targetStorage.objectRoleName);
}

std::string SubmitURLUploadJobRequest::getSourceFileURL() const {
  return sourceFileURL_;
}

void SubmitURLUploadJobRequest::setSourceFileURL(const std::string &sourceFileURL) {
  sourceFileURL_ = sourceFileURL;
  setParameter(std::string("SourceFileURL"), sourceFileURL);
}

std::string SubmitURLUploadJobRequest::getNotify() const {
  return notify_;
}

void SubmitURLUploadJobRequest::setNotify(const std::string &notify) {
  notify_ = notify;
  setParameter(std::string("Notify"), notify);
}

std::string SubmitURLUploadJobRequest::getUserData() const {
  return userData_;
}

void SubmitURLUploadJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitURLUploadJobRequest::getRegion() const {
  return region_;
}

void SubmitURLUploadJobRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

