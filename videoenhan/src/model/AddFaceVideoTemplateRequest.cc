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

#include <alibabacloud/videoenhan/model/AddFaceVideoTemplateRequest.h>

using AlibabaCloud::Videoenhan::Model::AddFaceVideoTemplateRequest;

AddFaceVideoTemplateRequest::AddFaceVideoTemplateRequest()
    : RpcServiceRequest("videoenhan", "2020-03-20", "AddFaceVideoTemplate") {
  setMethod(HttpRequest::Method::Post);
}

AddFaceVideoTemplateRequest::~AddFaceVideoTemplateRequest() {}

std::string AddFaceVideoTemplateRequest::getUserId() const {
  return userId_;
}

void AddFaceVideoTemplateRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setBodyParameter(std::string("UserId"), userId);
}

std::string AddFaceVideoTemplateRequest::getVideoScene() const {
  return videoScene_;
}

void AddFaceVideoTemplateRequest::setVideoScene(const std::string &videoScene) {
  videoScene_ = videoScene;
  setBodyParameter(std::string("VideoScene"), videoScene);
}

bool AddFaceVideoTemplateRequest::getReturnTrans() const {
  return returnTrans_;
}

void AddFaceVideoTemplateRequest::setReturnTrans(bool returnTrans) {
  returnTrans_ = returnTrans;
  setBodyParameter(std::string("ReturnTrans"), returnTrans ? "true" : "false");
}

bool AddFaceVideoTemplateRequest::getAsync() const {
  return async_;
}

void AddFaceVideoTemplateRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

std::string AddFaceVideoTemplateRequest::getVideoURL() const {
  return videoURL_;
}

void AddFaceVideoTemplateRequest::setVideoURL(const std::string &videoURL) {
  videoURL_ = videoURL;
  setBodyParameter(std::string("VideoURL"), videoURL);
}

