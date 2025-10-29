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

#include <alibabacloud/live/model/PutRecordStorageLifeCycleRequest.h>

using AlibabaCloud::Live::Model::PutRecordStorageLifeCycleRequest;

PutRecordStorageLifeCycleRequest::PutRecordStorageLifeCycleRequest()
    : RpcServiceRequest("live", "2016-11-01", "PutRecordStorageLifeCycle") {
  setMethod(HttpRequest::Method::Post);
}

PutRecordStorageLifeCycleRequest::~PutRecordStorageLifeCycleRequest() {}

std::vector<PutRecordStorageLifeCycleRequest::std::string> PutRecordStorageLifeCycleRequest::getStreamIds() const {
  return streamIds_;
}

void PutRecordStorageLifeCycleRequest::setStreamIds(const std::vector<PutRecordStorageLifeCycleRequest::std::string> &streamIds) {
  streamIds_ = streamIds;
  for(int dep1 = 0; dep1 != streamIds.size(); dep1++) {
    setBodyParameter(std::string("StreamIds") + "." + std::to_string(dep1 + 1), streamIds[dep1]);
  }
}

long PutRecordStorageLifeCycleRequest::getUnixTimestamp() const {
  return unixTimestamp_;
}

void PutRecordStorageLifeCycleRequest::setUnixTimestamp(long unixTimestamp) {
  unixTimestamp_ = unixTimestamp;
  setBodyParameter(std::string("UnixTimestamp"), std::to_string(unixTimestamp));
}

std::string PutRecordStorageLifeCycleRequest::getTag() const {
  return tag_;
}

void PutRecordStorageLifeCycleRequest::setTag(const std::string &tag) {
  tag_ = tag;
  setBodyParameter(std::string("Tag"), tag);
}

