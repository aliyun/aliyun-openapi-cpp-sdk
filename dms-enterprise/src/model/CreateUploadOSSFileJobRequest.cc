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

#include <alibabacloud/dms-enterprise/model/CreateUploadOSSFileJobRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateUploadOSSFileJobRequest;

CreateUploadOSSFileJobRequest::CreateUploadOSSFileJobRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateUploadOSSFileJob") {
  setMethod(HttpRequest::Method::Post);
}

CreateUploadOSSFileJobRequest::~CreateUploadOSSFileJobRequest() {}

long CreateUploadOSSFileJobRequest::getTid() const {
  return tid_;
}

void CreateUploadOSSFileJobRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string CreateUploadOSSFileJobRequest::getUploadType() const {
  return uploadType_;
}

void CreateUploadOSSFileJobRequest::setUploadType(const std::string &uploadType) {
  uploadType_ = uploadType;
  setParameter(std::string("UploadType"), uploadType);
}

std::string CreateUploadOSSFileJobRequest::getFileSource() const {
  return fileSource_;
}

void CreateUploadOSSFileJobRequest::setFileSource(const std::string &fileSource) {
  fileSource_ = fileSource;
  setParameter(std::string("FileSource"), fileSource);
}

std::string CreateUploadOSSFileJobRequest::getFileName() const {
  return fileName_;
}

void CreateUploadOSSFileJobRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setParameter(std::string("FileName"), fileName);
}

CreateUploadOSSFileJobRequest::UploadTarget CreateUploadOSSFileJobRequest::getUploadTarget() const {
  return uploadTarget_;
}

void CreateUploadOSSFileJobRequest::setUploadTarget(const CreateUploadOSSFileJobRequest::UploadTarget &uploadTarget) {
  uploadTarget_ = uploadTarget;
  setParameter(std::string("UploadTarget") + ".Endpoint", uploadTarget.endpoint);
  setParameter(std::string("UploadTarget") + ".BucketName", uploadTarget.bucketName);
  setParameter(std::string("UploadTarget") + ".ObjectName", uploadTarget.objectName);
}

