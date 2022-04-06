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

#include <alibabacloud/imageprocess/model/RunMedQARequest.h>

using AlibabaCloud::Imageprocess::Model::RunMedQARequest;

RunMedQARequest::RunMedQARequest()
    : RpcServiceRequest("imageprocess", "2020-03-20", "RunMedQA") {
  setMethod(HttpRequest::Method::Post);
}

RunMedQARequest::~RunMedQARequest() {}

std::string RunMedQARequest::getSessionId() const {
  return sessionId_;
}

void RunMedQARequest::setSessionId(const std::string &sessionId) {
  sessionId_ = sessionId;
  setBodyParameter(std::string("SessionId"), sessionId);
}

std::string RunMedQARequest::getOrgName() const {
  return orgName_;
}

void RunMedQARequest::setOrgName(const std::string &orgName) {
  orgName_ = orgName;
  setBodyParameter(std::string("OrgName"), orgName);
}

std::vector<RunMedQARequest::AnswerImageDataList> RunMedQARequest::getAnswerImageDataList() const {
  return answerImageDataList_;
}

void RunMedQARequest::setAnswerImageDataList(const std::vector<RunMedQARequest::AnswerImageDataList> &answerImageDataList) {
  answerImageDataList_ = answerImageDataList;
  for(int dep1 = 0; dep1 != answerImageDataList.size(); dep1++) {
  auto answerImageDataListObj = answerImageDataList.at(dep1);
  std::string answerImageDataListObjStr = std::string("AnswerImageDataList") + "." + std::to_string(dep1 + 1);
    setBodyParameter(answerImageDataListObjStr + ".AnswerImageData", answerImageDataListObj.answerImageData);
  }
}

std::vector<RunMedQARequest::AnswerTextList> RunMedQARequest::getAnswerTextList() const {
  return answerTextList_;
}

void RunMedQARequest::setAnswerTextList(const std::vector<RunMedQARequest::AnswerTextList> &answerTextList) {
  answerTextList_ = answerTextList;
  for(int dep1 = 0; dep1 != answerTextList.size(); dep1++) {
  auto answerTextListObj = answerTextList.at(dep1);
  std::string answerTextListObjStr = std::string("AnswerTextList") + "." + std::to_string(dep1 + 1);
    setBodyParameter(answerTextListObjStr + ".AnswerText", answerTextListObj.answerText);
  }
}

std::string RunMedQARequest::getDepartment() const {
  return department_;
}

void RunMedQARequest::setDepartment(const std::string &department) {
  department_ = department;
  setBodyParameter(std::string("Department"), department);
}

std::vector<RunMedQARequest::AnswerImageURLList> RunMedQARequest::getAnswerImageURLList() const {
  return answerImageURLList_;
}

void RunMedQARequest::setAnswerImageURLList(const std::vector<RunMedQARequest::AnswerImageURLList> &answerImageURLList) {
  answerImageURLList_ = answerImageURLList;
  for(int dep1 = 0; dep1 != answerImageURLList.size(); dep1++) {
  auto answerImageURLListObj = answerImageURLList.at(dep1);
  std::string answerImageURLListObjStr = std::string("AnswerImageURLList") + "." + std::to_string(dep1 + 1);
    setBodyParameter(answerImageURLListObjStr + ".AnswerImageURL", answerImageURLListObj.answerImageURL);
  }
}

std::string RunMedQARequest::getQuestionType() const {
  return questionType_;
}

void RunMedQARequest::setQuestionType(const std::string &questionType) {
  questionType_ = questionType;
  setBodyParameter(std::string("QuestionType"), questionType);
}

std::string RunMedQARequest::getOrgId() const {
  return orgId_;
}

void RunMedQARequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

