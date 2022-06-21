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

#include <alibabacloud/live/model/ModifyStudioLayoutRequest.h>

using AlibabaCloud::Live::Model::ModifyStudioLayoutRequest;

ModifyStudioLayoutRequest::ModifyStudioLayoutRequest() :
	RpcServiceRequest("live", "2016-11-01", "ModifyStudioLayout")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyStudioLayoutRequest::~ModifyStudioLayoutRequest()
{}

std::string ModifyStudioLayoutRequest::getScreenInputConfigList()const
{
	return screenInputConfigList_;
}

void ModifyStudioLayoutRequest::setScreenInputConfigList(const std::string& screenInputConfigList)
{
	screenInputConfigList_ = screenInputConfigList;
	setParameter("ScreenInputConfigList", screenInputConfigList);
}

std::string ModifyStudioLayoutRequest::getLayoutId()const
{
	return layoutId_;
}

void ModifyStudioLayoutRequest::setLayoutId(const std::string& layoutId)
{
	layoutId_ = layoutId;
	setParameter("LayoutId", layoutId);
}

std::string ModifyStudioLayoutRequest::getLayoutName()const
{
	return layoutName_;
}

void ModifyStudioLayoutRequest::setLayoutName(const std::string& layoutName)
{
	layoutName_ = layoutName;
	setParameter("LayoutName", layoutName);
}

std::string ModifyStudioLayoutRequest::getLayerOrderConfigList()const
{
	return layerOrderConfigList_;
}

void ModifyStudioLayoutRequest::setLayerOrderConfigList(const std::string& layerOrderConfigList)
{
	layerOrderConfigList_ = layerOrderConfigList;
	setParameter("LayerOrderConfigList", layerOrderConfigList);
}

std::string ModifyStudioLayoutRequest::getMediaInputConfigList()const
{
	return mediaInputConfigList_;
}

void ModifyStudioLayoutRequest::setMediaInputConfigList(const std::string& mediaInputConfigList)
{
	mediaInputConfigList_ = mediaInputConfigList;
	setParameter("MediaInputConfigList", mediaInputConfigList);
}

std::string ModifyStudioLayoutRequest::getCasterId()const
{
	return casterId_;
}

void ModifyStudioLayoutRequest::setCasterId(const std::string& casterId)
{
	casterId_ = casterId;
	setParameter("CasterId", casterId);
}

std::string ModifyStudioLayoutRequest::getBgImageConfig()const
{
	return bgImageConfig_;
}

void ModifyStudioLayoutRequest::setBgImageConfig(const std::string& bgImageConfig)
{
	bgImageConfig_ = bgImageConfig;
	setParameter("BgImageConfig", bgImageConfig);
}

long ModifyStudioLayoutRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyStudioLayoutRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyStudioLayoutRequest::getCommonConfig()const
{
	return commonConfig_;
}

void ModifyStudioLayoutRequest::setCommonConfig(const std::string& commonConfig)
{
	commonConfig_ = commonConfig;
	setParameter("CommonConfig", commonConfig);
}

