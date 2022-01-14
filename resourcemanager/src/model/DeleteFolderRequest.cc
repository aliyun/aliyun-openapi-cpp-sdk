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

#include <alibabacloud/resourcemanager/model/DeleteFolderRequest.h>

using AlibabaCloud::ResourceManager::Model::DeleteFolderRequest;

DeleteFolderRequest::DeleteFolderRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "DeleteFolder") {
  setMethod(HttpRequest::Method::Post);
}

DeleteFolderRequest::~DeleteFolderRequest() {}

std::string DeleteFolderRequest::getFolderId() const {
  return folderId_;
}

void DeleteFolderRequest::setFolderId(const std::string &folderId) {
  folderId_ = folderId;
  setParameter(std::string("FolderId"), folderId);
}

