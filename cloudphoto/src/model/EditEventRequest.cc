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

#include <alibabacloud/cloudphoto/model/EditEventRequest.h>

using AlibabaCloud::CloudPhoto::Model::EditEventRequest;

EditEventRequest::EditEventRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "EditEvent")
{}

EditEventRequest::~EditEventRequest()
{}

std::string EditEventRequest::getEventId()const
{
	return eventId_;
}

void EditEventRequest::setEventId(const std::string& eventId)
{
	eventId_ = eventId;
	setCoreParameter("EventId", std::to_string(eventId));
}

std::string EditEventRequest::getBannerPhotoId()const
{
	return bannerPhotoId_;
}

void EditEventRequest::setBannerPhotoId(const std::string& bannerPhotoId)
{
	bannerPhotoId_ = bannerPhotoId;
	setCoreParameter("BannerPhotoId", std::to_string(bannerPhotoId));
}

std::string EditEventRequest::getWatermarkPhotoId()const
{
	return watermarkPhotoId_;
}

void EditEventRequest::setWatermarkPhotoId(const std::string& watermarkPhotoId)
{
	watermarkPhotoId_ = watermarkPhotoId;
	setCoreParameter("WatermarkPhotoId", std::to_string(watermarkPhotoId));
}

std::string EditEventRequest::getIdentity()const
{
	return identity_;
}

void EditEventRequest::setIdentity(const std::string& identity)
{
	identity_ = identity;
	setCoreParameter("Identity", std::to_string(identity));
}

std::string EditEventRequest::getSplashPhotoId()const
{
	return splashPhotoId_;
}

void EditEventRequest::setSplashPhotoId(const std::string& splashPhotoId)
{
	splashPhotoId_ = splashPhotoId;
	setCoreParameter("SplashPhotoId", std::to_string(splashPhotoId));
}

std::string EditEventRequest::getLibraryId()const
{
	return libraryId_;
}

void EditEventRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setCoreParameter("LibraryId", std::to_string(libraryId));
}

std::string EditEventRequest::getWeixinTitle()const
{
	return weixinTitle_;
}

void EditEventRequest::setWeixinTitle(const std::string& weixinTitle)
{
	weixinTitle_ = weixinTitle;
	setCoreParameter("WeixinTitle", std::to_string(weixinTitle));
}

std::string EditEventRequest::getStoreName()const
{
	return storeName_;
}

void EditEventRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setCoreParameter("StoreName", std::to_string(storeName));
}

std::string EditEventRequest::getRemark()const
{
	return remark_;
}

void EditEventRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", std::to_string(remark));
}

std::string EditEventRequest::getTitle()const
{
	return title_;
}

void EditEventRequest::setTitle(const std::string& title)
{
	title_ = title;
	setCoreParameter("Title", std::to_string(title));
}

long EditEventRequest::getEndAt()const
{
	return endAt_;
}

void EditEventRequest::setEndAt(long endAt)
{
	endAt_ = endAt;
	setCoreParameter("EndAt", endAt);
}

long EditEventRequest::getStartAt()const
{
	return startAt_;
}

void EditEventRequest::setStartAt(long startAt)
{
	startAt_ = startAt;
	setCoreParameter("StartAt", startAt);
}

