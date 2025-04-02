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

#include <alibabacloud/aipodcast/model/PodcastTaskSubmitRequest.h>

using AlibabaCloud::AIPodcast::Model::PodcastTaskSubmitRequest;

PodcastTaskSubmitRequest::PodcastTaskSubmitRequest()
    : RoaServiceRequest("aipodcast", "2025-02-28") {
  setResourcePath("/podcast/task/submit"};
  setMethod(HttpRequest::Method::Post);
}

PodcastTaskSubmitRequest::~PodcastTaskSubmitRequest() {}

std::string PodcastTaskSubmitRequest::getAtmosphere() const {
  return atmosphere_;
}

void PodcastTaskSubmitRequest::setAtmosphere(const std::string &atmosphere) {
  atmosphere_ = atmosphere;
  setBodyParameter(std::string("atmosphere"), atmosphere);
}

std::string PodcastTaskSubmitRequest::getSourceLang() const {
  return sourceLang_;
}

void PodcastTaskSubmitRequest::setSourceLang(const std::string &sourceLang) {
  sourceLang_ = sourceLang;
  setBodyParameter(std::string("sourceLang"), sourceLang);
}

int PodcastTaskSubmitRequest::getCounts() const {
  return counts_;
}

void PodcastTaskSubmitRequest::setCounts(int counts) {
  counts_ = counts;
  setBodyParameter(std::string("counts"), std::to_string(counts));
}

std::vector<PodcastTaskSubmitRequest::std::string> PodcastTaskSubmitRequest::getFileUrls() const {
  return fileUrls_;
}

void PodcastTaskSubmitRequest::setFileUrls(const std::vector<PodcastTaskSubmitRequest::std::string> &fileUrls) {
  fileUrls_ = fileUrls;
  for(int dep1 = 0; dep1 != fileUrls.size(); dep1++) {
    setBodyParameter(std::string("fileUrls") + "." + std::to_string(dep1 + 1), fileUrls[dep1]);
  }
}

std::string PodcastTaskSubmitRequest::getText() const {
  return text_;
}

void PodcastTaskSubmitRequest::setText(const std::string &text) {
  text_ = text;
  setBodyParameter(std::string("text"), text);
}

std::vector<PodcastTaskSubmitRequest::std::string> PodcastTaskSubmitRequest::getVoices() const {
  return voices_;
}

void PodcastTaskSubmitRequest::setVoices(const std::vector<PodcastTaskSubmitRequest::std::string> &voices) {
  voices_ = voices;
  for(int dep1 = 0; dep1 != voices.size(); dep1++) {
    setBodyParameter(std::string("voices") + "." + std::to_string(dep1 + 1), voices[dep1]);
  }
}

std::string PodcastTaskSubmitRequest::getAppId() const {
  return appId_;
}

void PodcastTaskSubmitRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setBodyParameter(std::string("appId"), appId);
}

std::string PodcastTaskSubmitRequest::getTopic() const {
  return topic_;
}

void PodcastTaskSubmitRequest::setTopic(const std::string &topic) {
  topic_ = topic;
  setBodyParameter(std::string("topic"), topic);
}

std::string PodcastTaskSubmitRequest::getStyle() const {
  return style_;
}

void PodcastTaskSubmitRequest::setStyle(const std::string &style) {
  style_ = style;
  setBodyParameter(std::string("style"), style);
}

std::string PodcastTaskSubmitRequest::getWorkspaceId() const {
  return workspaceId_;
}

void PodcastTaskSubmitRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setBodyParameter(std::string("workspaceId"), workspaceId);
}

