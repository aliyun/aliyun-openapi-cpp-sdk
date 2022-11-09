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

#include <alibabacloud/threedvision/model/EstimateStereoImageDepthRequest.h>

using AlibabaCloud::Threedvision::Model::EstimateStereoImageDepthRequest;

EstimateStereoImageDepthRequest::EstimateStereoImageDepthRequest()
    : RpcServiceRequest("threedvision", "2021-01-31", "EstimateStereoImageDepth") {
  setMethod(HttpRequest::Method::Post);
}

EstimateStereoImageDepthRequest::~EstimateStereoImageDepthRequest() {}

std::string EstimateStereoImageDepthRequest::getRightImageURL() const {
  return rightImageURL_;
}

void EstimateStereoImageDepthRequest::setRightImageURL(const std::string &rightImageURL) {
  rightImageURL_ = rightImageURL;
  setBodyParameter(std::string("RightImageURL"), rightImageURL);
}

std::string EstimateStereoImageDepthRequest::getLeftImageURL() const {
  return leftImageURL_;
}

void EstimateStereoImageDepthRequest::setLeftImageURL(const std::string &leftImageURL) {
  leftImageURL_ = leftImageURL;
  setBodyParameter(std::string("LeftImageURL"), leftImageURL);
}

