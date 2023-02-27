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

#include <alibabacloud/ice/model/DeletePlayInfoRequest.h>

using AlibabaCloud::ICE::Model::DeletePlayInfoRequest;

DeletePlayInfoRequest::DeletePlayInfoRequest()
    : RpcServiceRequest("ice", "2020-11-09", "DeletePlayInfo") {
  setMethod(HttpRequest::Method::Post);
}

DeletePlayInfoRequest::~DeletePlayInfoRequest() {}

bool DeletePlayInfoRequest::getDeletePhysicalFiles() const {
  return deletePhysicalFiles_;
}

void DeletePlayInfoRequest::setDeletePhysicalFiles(bool deletePhysicalFiles) {
  deletePhysicalFiles_ = deletePhysicalFiles;
  setParameter(std::string("DeletePhysicalFiles"), deletePhysicalFiles ? "true" : "false");
}

std::string DeletePlayInfoRequest::getMediaId() const {
  return mediaId_;
}

void DeletePlayInfoRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

std::string DeletePlayInfoRequest::getFileURLs() const {
  return fileURLs_;
}

void DeletePlayInfoRequest::setFileURLs(const std::string &fileURLs) {
  fileURLs_ = fileURLs;
  setParameter(std::string("FileURLs"), fileURLs);
}

