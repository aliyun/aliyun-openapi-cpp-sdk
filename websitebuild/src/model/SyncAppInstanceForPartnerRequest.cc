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

#include <alibabacloud/websitebuild/model/SyncAppInstanceForPartnerRequest.h>

using AlibabaCloud::WebsiteBuild::Model::SyncAppInstanceForPartnerRequest;

SyncAppInstanceForPartnerRequest::SyncAppInstanceForPartnerRequest()
    : RpcServiceRequest("websitebuild", "2025-04-29", "SyncAppInstanceForPartner") {
  setMethod(HttpRequest::Method::Post);
}

SyncAppInstanceForPartnerRequest::~SyncAppInstanceForPartnerRequest() {}

SyncAppInstanceForPartnerRequest::AppInstance SyncAppInstanceForPartnerRequest::getAppInstance() const {
  return appInstance_;
}

void SyncAppInstanceForPartnerRequest::setAppInstance(const SyncAppInstanceForPartnerRequest::AppInstance &appInstance) {
  appInstance_ = appInstance;
  setParameter(std::string("AppInstance") + ".AppType", appInstance.appType);
  setParameter(std::string("AppInstance") + ".Profile.DeployArea", appInstance.profile.deployArea);
  setParameter(std::string("AppInstance") + ".Profile.TemplateEtag", appInstance.profile.templateEtag);
  setParameter(std::string("AppInstance") + ".Profile.OrderId", appInstance.profile.orderId);
  setParameter(std::string("AppInstance") + ".Profile.LxInstanceId", appInstance.profile.lxInstanceId);
  setParameter(std::string("AppInstance") + ".Profile.SiteVersion", appInstance.profile.siteVersion);
  setParameter(std::string("AppInstance") + ".Profile.TemplateId", appInstance.profile.templateId);
  setParameter(std::string("AppInstance") + ".SiteHost", appInstance.siteHost);
  setParameter(std::string("AppInstance") + ".EndTime", appInstance.endTime);
  setParameter(std::string("AppInstance") + ".StartTime", appInstance.startTime);
  setParameter(std::string("AppInstance") + ".UserId", appInstance.userId);
  setParameter(std::string("AppInstance") + ".GmtPublish", appInstance.gmtPublish);
  setParameter(std::string("AppInstance") + ".Deleted", appInstance.deleted);
  setParameter(std::string("AppInstance") + ".Domain", appInstance.domain);
  setParameter(std::string("AppInstance") + ".BizId", appInstance.bizId);
  setParameter(std::string("AppInstance") + ".Name", appInstance.name);
  setParameter(std::string("AppInstance") + ".IconUrl", appInstance.iconUrl);
  setParameter(std::string("AppInstance") + ".GmtDelete", appInstance.gmtDelete);
  setParameter(std::string("AppInstance") + ".Slug", appInstance.slug);
  setParameter(std::string("AppInstance") + ".ThumbnailUrl", appInstance.thumbnailUrl);
  setParameter(std::string("AppInstance") + ".Status", appInstance.status);
}

std::string SyncAppInstanceForPartnerRequest::getSourceBizId() const {
  return sourceBizId_;
}

void SyncAppInstanceForPartnerRequest::setSourceBizId(const std::string &sourceBizId) {
  sourceBizId_ = sourceBizId;
  setParameter(std::string("SourceBizId"), sourceBizId);
}

std::string SyncAppInstanceForPartnerRequest::get_Operator() const {
  return _operator_;
}

void SyncAppInstanceForPartnerRequest::set_Operator(const std::string &_operator) {
  _operator_ = _operator;
  setParameter(std::string("Operator"), _operator);
}

std::string SyncAppInstanceForPartnerRequest::getEventType() const {
  return eventType_;
}

void SyncAppInstanceForPartnerRequest::setEventType(const std::string &eventType) {
  eventType_ = eventType;
  setParameter(std::string("EventType"), eventType);
}

std::string SyncAppInstanceForPartnerRequest::getSourceType() const {
  return sourceType_;
}

void SyncAppInstanceForPartnerRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setParameter(std::string("SourceType"), sourceType);
}

