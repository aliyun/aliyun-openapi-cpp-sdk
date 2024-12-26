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

#include <alibabacloud/schedulerx3/model/UpdateAppRequest.h>

using AlibabaCloud::SchedulerX3::Model::UpdateAppRequest;

UpdateAppRequest::UpdateAppRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "UpdateApp") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAppRequest::~UpdateAppRequest() {}

std::string UpdateAppRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateAppRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateAppRequest::getAccessToken() const {
  return accessToken_;
}

void UpdateAppRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setBodyParameter(std::string("AccessToken"), accessToken);
}

std::string UpdateAppRequest::getTitle() const {
  return title_;
}

void UpdateAppRequest::setTitle(const std::string &title) {
  title_ = title;
  setBodyParameter(std::string("Title"), title);
}

std::string UpdateAppRequest::getAppName() const {
  return appName_;
}

void UpdateAppRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setBodyParameter(std::string("AppName"), appName);
}

std::vector<UpdateAppRequest::NoticeContacts> UpdateAppRequest::getNoticeContacts() const {
  return noticeContacts_;
}

void UpdateAppRequest::setNoticeContacts(const std::vector<UpdateAppRequest::NoticeContacts> &noticeContacts) {
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

UpdateAppRequest::NoticeConfig UpdateAppRequest::getNoticeConfig() const {
  return noticeConfig_;
}

void UpdateAppRequest::setNoticeConfig(const UpdateAppRequest::NoticeConfig &noticeConfig) {
  noticeConfig_ = noticeConfig;
  setBodyParameter(std::string("NoticeConfig") + ".WebhookIsAtAll", noticeConfig.webhookIsAtAll ? "true" : "false");
  setBodyParameter(std::string("NoticeConfig") + ".NoticeChannel", noticeConfig.noticeChannel);
  setBodyParameter(std::string("NoticeConfig") + ".Enable", noticeConfig.enable ? "true" : "false");
}

int UpdateAppRequest::getMaxJobs() const {
  return maxJobs_;
}

void UpdateAppRequest::setMaxJobs(int maxJobs) {
  maxJobs_ = maxJobs;
  setBodyParameter(std::string("MaxJobs"), std::to_string(maxJobs));
}

std::string UpdateAppRequest::getCalendar() const {
  return calendar_;
}

void UpdateAppRequest::setCalendar(const std::string &calendar) {
  calendar_ = calendar;
  setBodyParameter(std::string("Calendar"), calendar);
}

std::string UpdateAppRequest::getClusterId() const {
  return clusterId_;
}

void UpdateAppRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setBodyParameter(std::string("ClusterId"), clusterId);
}

bool UpdateAppRequest::getEnableLog() const {
  return enableLog_;
}

void UpdateAppRequest::setEnableLog(bool enableLog) {
  enableLog_ = enableLog;
  setBodyParameter(std::string("EnableLog"), enableLog ? "true" : "false");
}

int UpdateAppRequest::getMaxConcurrency() const {
  return maxConcurrency_;
}

void UpdateAppRequest::setMaxConcurrency(int maxConcurrency) {
  maxConcurrency_ = maxConcurrency;
  setBodyParameter(std::string("MaxConcurrency"), std::to_string(maxConcurrency));
}

