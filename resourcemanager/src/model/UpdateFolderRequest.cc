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

#include <alibabacloud/resourcemanager/model/UpdateFolderRequest.h>

using AlibabaCloud::ResourceManager::Model::UpdateFolderRequest;

UpdateFolderRequest::UpdateFolderRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "UpdateFolder") {
  setMethod(HttpRequest::Method::Post);
}

UpdateFolderRequest::~UpdateFolderRequest() {}

std::string UpdateFolderRequest::getFolderId() const {
  return folderId_;
}

void UpdateFolderRequest::setFolderId(const std::string &folderId) {
  folderId_ = folderId;
  setParameter(std::string("FolderId"), folderId);
}

std::string UpdateFolderRequest::getNewFolderName() const {
  return newFolderName_;
}

void UpdateFolderRequest::setNewFolderName(const std::string &newFolderName) {
  newFolderName_ = newFolderName;
  setParameter(std::string("NewFolderName"), newFolderName);
}

