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

#include <alibabacloud/facebody/model/RecognizeActionRequest.h>

using AlibabaCloud::Facebody::Model::RecognizeActionRequest;

RecognizeActionRequest::RecognizeActionRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "RecognizeAction") {
  setMethod(HttpRequest::Method::Post);
}

RecognizeActionRequest::~RecognizeActionRequest() {}

bool RecognizeActionRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void RecognizeActionRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

int RecognizeActionRequest::getType() const {
  return type_;
}

void RecognizeActionRequest::setType(int type) {
  type_ = type;
  setBodyParameter(std::string("Type"), std::to_string(type));
}

std::string RecognizeActionRequest::getOssFile() const {
  return ossFile_;
}

void RecognizeActionRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string RecognizeActionRequest::getVideoData() const {
  return videoData_;
}

void RecognizeActionRequest::setVideoData(const std::string &videoData) {
  videoData_ = videoData;
  setBodyParameter(std::string("VideoData"), videoData);
}

std::vector<RecognizeActionRequest::URLList> RecognizeActionRequest::getURLList() const {
  return uRLList_;
}

void RecognizeActionRequest::setURLList(const std::vector<RecognizeActionRequest::URLList> &uRLList) {
  uRLList_ = uRLList;
  for(int dep1 = 0; dep1 != uRLList.size(); dep1++) {
  auto uRLListObj = uRLList.at(dep1);
  std::string uRLListObjStr = std::string("URLList") + "." + std::to_string(dep1 + 1);
    setBodyParameter(uRLListObjStr + ".imageData", uRLListObj.imageData);
    setBodyParameter(uRLListObjStr + ".URL", uRLListObj.uRL);
  }
}

std::string RecognizeActionRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void RecognizeActionRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

std::string RecognizeActionRequest::getVideoUrl() const {
  return videoUrl_;
}

void RecognizeActionRequest::setVideoUrl(const std::string &videoUrl) {
  videoUrl_ = videoUrl;
  setBodyParameter(std::string("VideoUrl"), videoUrl);
}

