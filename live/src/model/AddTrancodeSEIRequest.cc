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

#include <alibabacloud/live/model/AddTrancodeSEIRequest.h>

using AlibabaCloud::Live::Model::AddTrancodeSEIRequest;

AddTrancodeSEIRequest::AddTrancodeSEIRequest() :
	RpcServiceRequest("live", "2016-11-01", "AddTrancodeSEI")
{}

AddTrancodeSEIRequest::~AddTrancodeSEIRequest()
{}

int AddTrancodeSEIRequest::getDelay()const
{
	return delay_;
}

void AddTrancodeSEIRequest::setDelay(int delay)
{
	delay_ = delay;
	setCoreParameter("Delay", delay);
}

std::string AddTrancodeSEIRequest::getAppName()const
{
	return appName_;
}

void AddTrancodeSEIRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", std::to_string(appName));
}

std::string AddTrancodeSEIRequest::getRegionId()const
{
	return regionId_;
}

void AddTrancodeSEIRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int AddTrancodeSEIRequest::getRepeat()const
{
	return repeat_;
}

void AddTrancodeSEIRequest::setRepeat(int repeat)
{
	repeat_ = repeat;
	setCoreParameter("Repeat", repeat);
}

std::string AddTrancodeSEIRequest::getDomainName()const
{
	return domainName_;
}

void AddTrancodeSEIRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string AddTrancodeSEIRequest::getPattern()const
{
	return pattern_;
}

void AddTrancodeSEIRequest::setPattern(const std::string& pattern)
{
	pattern_ = pattern;
	setCoreParameter("Pattern", std::to_string(pattern));
}

std::string AddTrancodeSEIRequest::getText()const
{
	return text_;
}

void AddTrancodeSEIRequest::setText(const std::string& text)
{
	text_ = text;
	setCoreParameter("Text", std::to_string(text));
}

long AddTrancodeSEIRequest::getOwnerId()const
{
	return ownerId_;
}

void AddTrancodeSEIRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string AddTrancodeSEIRequest::getStreamName()const
{
	return streamName_;
}

void AddTrancodeSEIRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setCoreParameter("StreamName", std::to_string(streamName));
}

