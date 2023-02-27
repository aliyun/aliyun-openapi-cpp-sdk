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

#include <alibabacloud/ice/model/DeleteMediaInfosRequest.h>

using AlibabaCloud::ICE::Model::DeleteMediaInfosRequest;

DeleteMediaInfosRequest::DeleteMediaInfosRequest()
    : RpcServiceRequest("ice", "2020-11-09", "DeleteMediaInfos") {
  setMethod(HttpRequest::Method::Post);
}

DeleteMediaInfosRequest::~DeleteMediaInfosRequest() {}

std::string DeleteMediaInfosRequest::getInputURLs() const {
  return inputURLs_;
}

void DeleteMediaInfosRequest::setInputURLs(const std::string &inputURLs) {
  inputURLs_ = inputURLs;
  setParameter(std::string("InputURLs"), inputURLs);
}

bool DeleteMediaInfosRequest::getDeletePhysicalFiles() const {
  return deletePhysicalFiles_;
}

void DeleteMediaInfosRequest::setDeletePhysicalFiles(bool deletePhysicalFiles) {
  deletePhysicalFiles_ = deletePhysicalFiles;
  setParameter(std::string("DeletePhysicalFiles"), deletePhysicalFiles ? "true" : "false");
}

std::string DeleteMediaInfosRequest::getMediaIds() const {
  return mediaIds_;
}

void DeleteMediaInfosRequest::setMediaIds(const std::string &mediaIds) {
  mediaIds_ = mediaIds;
  setParameter(std::string("MediaIds"), mediaIds);
}

