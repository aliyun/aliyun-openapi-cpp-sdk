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

#include <alibabacloud/resourcemanager/model/CancelPromoteResourceAccountRequest.h>

using AlibabaCloud::ResourceManager::Model::CancelPromoteResourceAccountRequest;

CancelPromoteResourceAccountRequest::CancelPromoteResourceAccountRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "CancelPromoteResourceAccount") {
  setMethod(HttpRequest::Method::Post);
}

CancelPromoteResourceAccountRequest::~CancelPromoteResourceAccountRequest() {}

std::string CancelPromoteResourceAccountRequest::getRecordId() const {
  return recordId_;
}

void CancelPromoteResourceAccountRequest::setRecordId(const std::string &recordId) {
  recordId_ = recordId;
  setParameter(std::string("RecordId"), recordId);
}

