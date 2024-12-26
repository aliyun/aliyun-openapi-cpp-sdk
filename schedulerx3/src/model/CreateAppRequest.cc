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

#include <alibabacloud/schedulerx3/model/CreateAppRequest.h>

using AlibabaCloud::SchedulerX3::Model::CreateAppRequest;

CreateAppRequest::CreateAppRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "CreateApp") {
  setMethod(HttpRequest::Method::Post);
}

CreateAppRequest::~CreateAppRequest() {}

std::string CreateAppRequest::getMseSessionId() const {
  return mseSessionId_;
}

void CreateAppRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string CreateAppRequest::getAccessToken() const {
  return accessToken_;
}

void CreateAppRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setBodyParameter(std::string("AccessToken"), accessToken);
}

std::string CreateAppRequest::getTitle() const {
  return title_;
}

void CreateAppRequest::setTitle(const std::string &title) {
  title_ = title;
  setBodyParameter(std::string("Title"), title);
}

std::string CreateAppRequest::getAppName() const {
  return appName_;
}

void CreateAppRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setBodyParameter(std::string("AppName"), appName);
}

std::vector<CreateAppRequest::NoticeContacts> CreateAppRequest::getNoticeContacts() const {
  return noticeContacts_;
}

void CreateAppRequest::setNoticeContacts(const std::vector<CreateAppRequest::NoticeContacts> &noticeContacts) {
  noticeContacts_ = noticeContacts;
  for(int dep1 = 0; dep1 != noticeContacts.size(); dep1++) {
    setBodyParameter(std::string("NoticeContacts") + "." + std::to_string(dep1 + 1) + ".Webhook", noticeContacts[dep1].webhook);
    setBodyParameter(std::string("NoticeContacts") + "." + std::to_string(dep1 + 1) + ".Mail", noticeContacts[dep1].mail);
    setBodyParameter(std::string("NoticeContacts") + "." + std::to_string(dep1 + 1) + ".Phone", noticeContacts[dep1].phone);
    setBodyParameter(std::string("NoticeContacts") + "." + std::to_string(dep1 + 1) + ".SmsCode", noticeContacts[dep1].smsCode);
    setBodyParameter(std::string("NoticeContacts") + "." + std::to_string(dep1 + 1) + ".MailCode", noticeContacts[dep1].mailCode);
    setBodyParameter(std::string("NoticeContacts") + "." + std::to_string(dep1 + 1) + ".UserName", noticeContacts[dep1].userName);
  }
}

CreateAppRequest::NoticeConfig CreateAppRequest::getNoticeConfig() const {
  return noticeConfig_;
}

void CreateAppRequest::setNoticeConfig(const CreateAppRequest::NoticeConfig &noticeConfig) {
  noticeConfig_ = noticeConfig;
  setBodyParameter(std::string("NoticeConfig") + ".WebhookIsAtAll", noticeConfig.webhookIsAtAll ? "true" : "false");
  setBodyParameter(std::string("NoticeConfig") + ".NoticeChannel", noticeConfig.noticeChannel);
}

int CreateAppRequest::getMaxJobs() const {
  return maxJobs_;
}

void CreateAppRequest::setMaxJobs(int maxJobs) {
  maxJobs_ = maxJobs;
  setBodyParameter(std::string("MaxJobs"), std::to_string(maxJobs));
}

std::string CreateAppRequest::getCalender() const {
  return calender_;
}

void CreateAppRequest::setCalender(const std::string &calender) {
  calender_ = calender;
  setBodyParameter(std::string("Calender"), calender);
}

std::string CreateAppRequest::getClusterId() const {
  return clusterId_;
}

void CreateAppRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setBodyParameter(std::string("ClusterId"), clusterId);
}

bool CreateAppRequest::getEnableLog() const {
  return enableLog_;
}

void CreateAppRequest::setEnableLog(bool enableLog) {
  enableLog_ = enableLog;
  setBodyParameter(std::string("EnableLog"), enableLog ? "true" : "false");
}

int CreateAppRequest::getMaxConcurrency() const {
  return maxConcurrency_;
}

void CreateAppRequest::setMaxConcurrency(int maxConcurrency) {
  maxConcurrency_ = maxConcurrency;
  setBodyParameter(std::string("MaxConcurrency"), std::to_string(maxConcurrency));
}

