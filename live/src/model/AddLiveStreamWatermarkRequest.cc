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

#include <alibabacloud/live/model/AddLiveStreamWatermarkRequest.h>

using AlibabaCloud::Live::Model::AddLiveStreamWatermarkRequest;

AddLiveStreamWatermarkRequest::AddLiveStreamWatermarkRequest() :
	RpcServiceRequest("live", "2016-11-01", "AddLiveStreamWatermark")
{
	setMethod(HttpRequest::Method::Post);
}

AddLiveStreamWatermarkRequest::~AddLiveStreamWatermarkRequest()
{}

float AddLiveStreamWatermarkRequest::getYOffset()const
{
	return yOffset_;
}

void AddLiveStreamWatermarkRequest::setYOffset(float yOffset)
{
	yOffset_ = yOffset;
	setParameter("YOffset", std::to_string(yOffset));
}

std::string AddLiveStreamWatermarkRequest::getPictureUrl()const
{
	return pictureUrl_;
}

void AddLiveStreamWatermarkRequest::setPictureUrl(const std::string& pictureUrl)
{
	pictureUrl_ = pictureUrl;
	setParameter("PictureUrl", pictureUrl);
}

std::string AddLiveStreamWatermarkRequest::getDescription()const
{
	return description_;
}

void AddLiveStreamWatermarkRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

int AddLiveStreamWatermarkRequest::getType()const
{
	return type_;
}

void AddLiveStreamWatermarkRequest::setType(int type)
{
	type_ = type;
	setParameter("Type", std::to_string(type));
}

int AddLiveStreamWatermarkRequest::getHeight()const
{
	return height_;
}

void AddLiveStreamWatermarkRequest::setHeight(int height)
{
	height_ = height;
	setParameter("Height", std::to_string(height));
}

float AddLiveStreamWatermarkRequest::getXOffset()const
{
	return xOffset_;
}

void AddLiveStreamWatermarkRequest::setXOffset(float xOffset)
{
	xOffset_ = xOffset;
	setParameter("XOffset", std::to_string(xOffset));
}

long AddLiveStreamWatermarkRequest::getOwnerId()const
{
	return ownerId_;
}

void AddLiveStreamWatermarkRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int AddLiveStreamWatermarkRequest::getRefWidth()const
{
	return refWidth_;
}

void AddLiveStreamWatermarkRequest::setRefWidth(int refWidth)
{
	refWidth_ = refWidth;
	setParameter("RefWidth", std::to_string(refWidth));
}

int AddLiveStreamWatermarkRequest::getTransparency()const
{
	return transparency_;
}

void AddLiveStreamWatermarkRequest::setTransparency(int transparency)
{
	transparency_ = transparency;
	setParameter("Transparency", std::to_string(transparency));
}

std::string AddLiveStreamWatermarkRequest::getName()const
{
	return name_;
}

void AddLiveStreamWatermarkRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string AddLiveStreamWatermarkRequest::getOffsetCorner()const
{
	return offsetCorner_;
}

void AddLiveStreamWatermarkRequest::setOffsetCorner(const std::string& offsetCorner)
{
	offsetCorner_ = offsetCorner;
	setParameter("OffsetCorner", offsetCorner);
}

int AddLiveStreamWatermarkRequest::getRefHeight()const
{
	return refHeight_;
}

void AddLiveStreamWatermarkRequest::setRefHeight(int refHeight)
{
	refHeight_ = refHeight;
	setParameter("RefHeight", std::to_string(refHeight));
}

