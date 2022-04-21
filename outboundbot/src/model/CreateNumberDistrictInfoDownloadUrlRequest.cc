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

#include <alibabacloud/outboundbot/model/CreateNumberDistrictInfoDownloadUrlRequest.h>

using AlibabaCloud::OutboundBot::Model::CreateNumberDistrictInfoDownloadUrlRequest;

CreateNumberDistrictInfoDownloadUrlRequest::CreateNumberDistrictInfoDownloadUrlRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "CreateNumberDistrictInfoDownloadUrl") {
  setMethod(HttpRequest::Method::Post);
}

CreateNumberDistrictInfoDownloadUrlRequest::~CreateNumberDistrictInfoDownloadUrlRequest() {}

std::string CreateNumberDistrictInfoDownloadUrlRequest::getVersionId() const {
  return versionId_;
}

void CreateNumberDistrictInfoDownloadUrlRequest::setVersionId(const std::string &versionId) {
  versionId_ = versionId;
  setParameter(std::string("VersionId"), versionId);
}

