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

#include <alibabacloud/vod/model/DescribePlayVideoStatisRequest.h>

using AlibabaCloud::Vod::Model::DescribePlayVideoStatisRequest;

DescribePlayVideoStatisRequest::DescribePlayVideoStatisRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribePlayVideoStatis") {
  setMethod(HttpRequest::Method::Post);
}

DescribePlayVideoStatisRequest::~DescribePlayVideoStatisRequest() {}

std::string DescribePlayVideoStatisRequest::getStartTime() const {
  return startTime_;
}

void DescribePlayVideoStatisRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribePlayVideoStatisRequest::getEndTime() const {
  return endTime_;
}

void DescribePlayVideoStatisRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribePlayVideoStatisRequest::getVideoId() const {
  return videoId_;
}

void DescribePlayVideoStatisRequest::setVideoId(const std::string &videoId) {
  videoId_ = videoId;
  setParameter(std::string("VideoId"), videoId);
}

long DescribePlayVideoStatisRequest::getOwnerId() const {
  return ownerId_;
}

void DescribePlayVideoStatisRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

