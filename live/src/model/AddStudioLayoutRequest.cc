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

#include <alibabacloud/live/model/AddStudioLayoutRequest.h>

using AlibabaCloud::Live::Model::AddStudioLayoutRequest;

AddStudioLayoutRequest::AddStudioLayoutRequest()
    : RpcServiceRequest("live", "2016-11-01", "AddStudioLayout") {
  setMethod(HttpRequest::Method::Post);
}

AddStudioLayoutRequest::~AddStudioLayoutRequest() {}

std::string AddStudioLayoutRequest::getScreenInputConfigList() const {
  return screenInputConfigList_;
}

void AddStudioLayoutRequest::setScreenInputConfigList(const std::string &screenInputConfigList) {
  screenInputConfigList_ = screenInputConfigList;
  setParameter(std::string("ScreenInputConfigList"), screenInputConfigList);
}

std::string AddStudioLayoutRequest::getLayoutType() const {
  return layoutType_;
}

void AddStudioLayoutRequest::setLayoutType(const std::string &layoutType) {
  layoutType_ = layoutType;
  setParameter(std::string("LayoutType"), layoutType);
}

std::string AddStudioLayoutRequest::getRegionId() const {
  return regionId_;
}

void AddStudioLayoutRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddStudioLayoutRequest::getLayoutName() const {
  return layoutName_;
}

void AddStudioLayoutRequest::setLayoutName(const std::string &layoutName) {
  layoutName_ = layoutName;
  setParameter(std::string("LayoutName"), layoutName);
}

std::string AddStudioLayoutRequest::getLayerOrderConfigList() const {
  return layerOrderConfigList_;
}

void AddStudioLayoutRequest::setLayerOrderConfigList(const std::string &layerOrderConfigList) {
  layerOrderConfigList_ = layerOrderConfigList;
  setParameter(std::string("LayerOrderConfigList"), layerOrderConfigList);
}

std::string AddStudioLayoutRequest::getMediaInputConfigList() const {
  return mediaInputConfigList_;
}

void AddStudioLayoutRequest::setMediaInputConfigList(const std::string &mediaInputConfigList) {
  mediaInputConfigList_ = mediaInputConfigList;
  setParameter(std::string("MediaInputConfigList"), mediaInputConfigList);
}

std::string AddStudioLayoutRequest::getCasterId() const {
  return casterId_;
}

void AddStudioLayoutRequest::setCasterId(const std::string &casterId) {
  casterId_ = casterId;
  setParameter(std::string("CasterId"), casterId);
}

std::string AddStudioLayoutRequest::getBgImageConfig() const {
  return bgImageConfig_;
}

void AddStudioLayoutRequest::setBgImageConfig(const std::string &bgImageConfig) {
  bgImageConfig_ = bgImageConfig;
  setParameter(std::string("BgImageConfig"), bgImageConfig);
}

long AddStudioLayoutRequest::getOwnerId() const {
  return ownerId_;
}

void AddStudioLayoutRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddStudioLayoutRequest::getCommonConfig() const {
  return commonConfig_;
}

void AddStudioLayoutRequest::setCommonConfig(const std::string &commonConfig) {
  commonConfig_ = commonConfig;
  setParameter(std::string("CommonConfig"), commonConfig);
}

