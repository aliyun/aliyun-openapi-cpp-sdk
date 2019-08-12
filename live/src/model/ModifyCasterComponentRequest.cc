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

#include <alibabacloud/live/model/ModifyCasterComponentRequest.h>

using AlibabaCloud::Live::Model::ModifyCasterComponentRequest;

ModifyCasterComponentRequest::ModifyCasterComponentRequest() :
	RpcServiceRequest("live", "2016-11-01", "ModifyCasterComponent")
{}

ModifyCasterComponentRequest::~ModifyCasterComponentRequest()
{}

std::string ModifyCasterComponentRequest::getComponentId()const
{
	return componentId_;
}

void ModifyCasterComponentRequest::setComponentId(const std::string& componentId)
{
	componentId_ = componentId;
	setCoreParameter("ComponentId", std::to_string(componentId));
}

std::string ModifyCasterComponentRequest::getComponentType()const
{
	return componentType_;
}

void ModifyCasterComponentRequest::setComponentType(const std::string& componentType)
{
	componentType_ = componentType;
	setCoreParameter("ComponentType", std::to_string(componentType));
}

std::string ModifyCasterComponentRequest::getRegionId()const
{
	return regionId_;
}

void ModifyCasterComponentRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyCasterComponentRequest::getImageLayerContent()const
{
	return imageLayerContent_;
}

void ModifyCasterComponentRequest::setImageLayerContent(const std::string& imageLayerContent)
{
	imageLayerContent_ = imageLayerContent;
	setCoreParameter("ImageLayerContent", std::to_string(imageLayerContent));
}

std::string ModifyCasterComponentRequest::getCasterId()const
{
	return casterId_;
}

void ModifyCasterComponentRequest::setCasterId(const std::string& casterId)
{
	casterId_ = casterId;
	setCoreParameter("CasterId", std::to_string(casterId));
}

std::string ModifyCasterComponentRequest::getEffect()const
{
	return effect_;
}

void ModifyCasterComponentRequest::setEffect(const std::string& effect)
{
	effect_ = effect;
	setCoreParameter("Effect", std::to_string(effect));
}

std::string ModifyCasterComponentRequest::getComponentLayer()const
{
	return componentLayer_;
}

void ModifyCasterComponentRequest::setComponentLayer(const std::string& componentLayer)
{
	componentLayer_ = componentLayer;
	setCoreParameter("ComponentLayer", std::to_string(componentLayer));
}

std::string ModifyCasterComponentRequest::getCaptionLayerContent()const
{
	return captionLayerContent_;
}

void ModifyCasterComponentRequest::setCaptionLayerContent(const std::string& captionLayerContent)
{
	captionLayerContent_ = captionLayerContent;
	setCoreParameter("CaptionLayerContent", std::to_string(captionLayerContent));
}

std::string ModifyCasterComponentRequest::getComponentName()const
{
	return componentName_;
}

void ModifyCasterComponentRequest::setComponentName(const std::string& componentName)
{
	componentName_ = componentName;
	setCoreParameter("ComponentName", std::to_string(componentName));
}

long ModifyCasterComponentRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyCasterComponentRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyCasterComponentRequest::getTextLayerContent()const
{
	return textLayerContent_;
}

void ModifyCasterComponentRequest::setTextLayerContent(const std::string& textLayerContent)
{
	textLayerContent_ = textLayerContent;
	setCoreParameter("TextLayerContent", std::to_string(textLayerContent));
}

