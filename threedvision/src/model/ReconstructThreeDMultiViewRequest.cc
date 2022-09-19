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

#include <alibabacloud/threedvision/model/ReconstructThreeDMultiViewRequest.h>

using AlibabaCloud::Threedvision::Model::ReconstructThreeDMultiViewRequest;

ReconstructThreeDMultiViewRequest::ReconstructThreeDMultiViewRequest()
    : RpcServiceRequest("threedvision", "2021-01-31", "ReconstructThreeDMultiView") {
  setMethod(HttpRequest::Method::Post);
}

ReconstructThreeDMultiViewRequest::~ReconstructThreeDMultiViewRequest() {}

std::string ReconstructThreeDMultiViewRequest::getMode() const {
  return mode_;
}

void ReconstructThreeDMultiViewRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setBodyParameter(std::string("Mode"), mode);
}

std::string ReconstructThreeDMultiViewRequest::getZipFileUrl() const {
  return zipFileUrl_;
}

void ReconstructThreeDMultiViewRequest::setZipFileUrl(const std::string &zipFileUrl) {
  zipFileUrl_ = zipFileUrl;
  setBodyParameter(std::string("ZipFileUrl"), zipFileUrl);
}

bool ReconstructThreeDMultiViewRequest::getAsync() const {
  return async_;
}

void ReconstructThreeDMultiViewRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

