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

#include <alibabacloud/ice/model/SubmitASRJobRequest.h>

using AlibabaCloud::ICE::Model::SubmitASRJobRequest;

SubmitASRJobRequest::SubmitASRJobRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SubmitASRJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitASRJobRequest::~SubmitASRJobRequest() {}

std::string SubmitASRJobRequest::getInputFile() const {
  return inputFile_;
}

void SubmitASRJobRequest::setInputFile(const std::string &inputFile) {
  inputFile_ = inputFile;
  setParameter(std::string("InputFile"), inputFile);
}

std::string SubmitASRJobRequest::getDescription() const {
  return description_;
}

void SubmitASRJobRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string SubmitASRJobRequest::getStartTime() const {
  return startTime_;
}

void SubmitASRJobRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string SubmitASRJobRequest::getTitle() const {
  return title_;
}

void SubmitASRJobRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string SubmitASRJobRequest::getDuration() const {
  return duration_;
}

void SubmitASRJobRequest::setDuration(const std::string &duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), duration);
}

std::string SubmitASRJobRequest::getUserData() const {
  return userData_;
}

void SubmitASRJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

