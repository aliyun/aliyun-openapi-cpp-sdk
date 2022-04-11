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

#include <alibabacloud/vod/model/SubmitPreprocessJobsRequest.h>

using AlibabaCloud::Vod::Model::SubmitPreprocessJobsRequest;

SubmitPreprocessJobsRequest::SubmitPreprocessJobsRequest()
    : RpcServiceRequest("vod", "2017-03-21", "SubmitPreprocessJobs") {
  setMethod(HttpRequest::Method::Post);
}

SubmitPreprocessJobsRequest::~SubmitPreprocessJobsRequest() {}

std::string SubmitPreprocessJobsRequest::getVideoId() const {
  return videoId_;
}

void SubmitPreprocessJobsRequest::setVideoId(const std::string &videoId) {
  videoId_ = videoId;
  setParameter(std::string("VideoId"), videoId);
}

std::string SubmitPreprocessJobsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitPreprocessJobsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitPreprocessJobsRequest::getPreprocessType() const {
  return preprocessType_;
}

void SubmitPreprocessJobsRequest::setPreprocessType(const std::string &preprocessType) {
  preprocessType_ = preprocessType;
  setParameter(std::string("PreprocessType"), preprocessType);
}

