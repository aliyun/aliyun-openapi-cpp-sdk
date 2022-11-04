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

#include <alibabacloud/imageprocess/model/FeedbackSessionRequest.h>

using AlibabaCloud::Imageprocess::Model::FeedbackSessionRequest;

FeedbackSessionRequest::FeedbackSessionRequest()
    : RpcServiceRequest("imageprocess", "2020-03-20", "FeedbackSession") {
  setMethod(HttpRequest::Method::Post);
}

FeedbackSessionRequest::~FeedbackSessionRequest() {}

std::string FeedbackSessionRequest::getSessionId() const {
  return sessionId_;
}

void FeedbackSessionRequest::setSessionId(const std::string &sessionId) {
  sessionId_ = sessionId;
  setBodyParameter(std::string("SessionId"), sessionId);
}

std::string FeedbackSessionRequest::getFeedback() const {
  return feedback_;
}

void FeedbackSessionRequest::setFeedback(const std::string &feedback) {
  feedback_ = feedback;
  setBodyParameter(std::string("Feedback"), feedback);
}

