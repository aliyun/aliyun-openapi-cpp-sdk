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

#include <alibabacloud/threedvision/model/EstimateMonocularVideoDepthRequest.h>

using AlibabaCloud::Threedvision::Model::EstimateMonocularVideoDepthRequest;

EstimateMonocularVideoDepthRequest::EstimateMonocularVideoDepthRequest()
    : RpcServiceRequest("threedvision", "2021-01-31", "EstimateMonocularVideoDepth") {
  setMethod(HttpRequest::Method::Post);
}

EstimateMonocularVideoDepthRequest::~EstimateMonocularVideoDepthRequest() {}

std::string EstimateMonocularVideoDepthRequest::getSampleRate() const {
  return sampleRate_;
}

void EstimateMonocularVideoDepthRequest::setSampleRate(const std::string &sampleRate) {
  sampleRate_ = sampleRate;
  setBodyParameter(std::string("SampleRate"), sampleRate);
}

bool EstimateMonocularVideoDepthRequest::getAsync() const {
  return async_;
}

void EstimateMonocularVideoDepthRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

std::string EstimateMonocularVideoDepthRequest::getVideoURL() const {
  return videoURL_;
}

void EstimateMonocularVideoDepthRequest::setVideoURL(const std::string &videoURL) {
  videoURL_ = videoURL;
  setBodyParameter(std::string("VideoURL"), videoURL);
}

