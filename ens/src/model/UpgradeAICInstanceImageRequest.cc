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

#include <alibabacloud/ens/model/UpgradeAICInstanceImageRequest.h>

using AlibabaCloud::Ens::Model::UpgradeAICInstanceImageRequest;

UpgradeAICInstanceImageRequest::UpgradeAICInstanceImageRequest()
    : RpcServiceRequest("ens", "2017-11-10", "UpgradeAICInstanceImage") {
  setMethod(HttpRequest::Method::Get);
}

UpgradeAICInstanceImageRequest::~UpgradeAICInstanceImageRequest() {}

std::string UpgradeAICInstanceImageRequest::getImageId() const {
  return imageId_;
}

void UpgradeAICInstanceImageRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

int UpgradeAICInstanceImageRequest::getTimeout() const {
  return timeout_;
}

void UpgradeAICInstanceImageRequest::setTimeout(int timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::vector<UpgradeAICInstanceImageRequest::std::string> UpgradeAICInstanceImageRequest::getServerIds() const {
  return serverIds_;
}

void UpgradeAICInstanceImageRequest::setServerIds(const std::vector<UpgradeAICInstanceImageRequest::std::string> &serverIds) {
  serverIds_ = serverIds;
  for(int dep1 = 0; dep1 != serverIds.size(); dep1++) {
    setParameter(std::string("ServerIds") + "." + std::to_string(dep1 + 1), serverIds[dep1]);
  }
}

