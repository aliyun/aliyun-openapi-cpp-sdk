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

#include <alibabacloud/vod/model/UpdateVideoInfosRequest.h>

using AlibabaCloud::Vod::Model::UpdateVideoInfosRequest;

UpdateVideoInfosRequest::UpdateVideoInfosRequest()
    : RpcServiceRequest("vod", "2017-03-21", "UpdateVideoInfos") {
  setMethod(HttpRequest::Method::Post);
}

UpdateVideoInfosRequest::~UpdateVideoInfosRequest() {}

std::string UpdateVideoInfosRequest::getUpdateContent() const {
  return updateContent_;
}

void UpdateVideoInfosRequest::setUpdateContent(const std::string &updateContent) {
  updateContent_ = updateContent;
  setParameter(std::string("UpdateContent"), updateContent);
}

