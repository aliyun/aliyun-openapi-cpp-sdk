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

#include <alibabacloud/ice/model/SetDefaultStorageLocationRequest.h>

using AlibabaCloud::ICE::Model::SetDefaultStorageLocationRequest;

SetDefaultStorageLocationRequest::SetDefaultStorageLocationRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SetDefaultStorageLocation") {
  setMethod(HttpRequest::Method::Post);
}

SetDefaultStorageLocationRequest::~SetDefaultStorageLocationRequest() {}

std::string SetDefaultStorageLocationRequest::getStorageType() const {
  return storageType_;
}

void SetDefaultStorageLocationRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

std::string SetDefaultStorageLocationRequest::getBucket() const {
  return bucket_;
}

void SetDefaultStorageLocationRequest::setBucket(const std::string &bucket) {
  bucket_ = bucket;
  setParameter(std::string("Bucket"), bucket);
}

std::string SetDefaultStorageLocationRequest::getPath() const {
  return path_;
}

void SetDefaultStorageLocationRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

