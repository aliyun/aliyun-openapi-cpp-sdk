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

#include <alibabacloud/dms-enterprise/model/CreateUploadFileJobRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateUploadFileJobRequest;

CreateUploadFileJobRequest::CreateUploadFileJobRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateUploadFileJob") {
  setMethod(HttpRequest::Method::Post);
}

CreateUploadFileJobRequest::~CreateUploadFileJobRequest() {}

long CreateUploadFileJobRequest::getTid() const {
  return tid_;
}

void CreateUploadFileJobRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string CreateUploadFileJobRequest::getUploadURL() const {
  return uploadURL_;
}

void CreateUploadFileJobRequest::setUploadURL(const std::string &uploadURL) {
  uploadURL_ = uploadURL;
  setParameter(std::string("UploadURL"), uploadURL);
}

std::string CreateUploadFileJobRequest::getUploadType() const {
  return uploadType_;
}

void CreateUploadFileJobRequest::setUploadType(const std::string &uploadType) {
  uploadType_ = uploadType;
  setParameter(std::string("UploadType"), uploadType);
}

std::string CreateUploadFileJobRequest::getFileSource() const {
  return fileSource_;
}

void CreateUploadFileJobRequest::setFileSource(const std::string &fileSource) {
  fileSource_ = fileSource;
  setParameter(std::string("FileSource"), fileSource);
}

std::string CreateUploadFileJobRequest::getFileName() const {
  return fileName_;
}

void CreateUploadFileJobRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setParameter(std::string("FileName"), fileName);
}

