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

#include <alibabacloud/live/model/AddCasterEpisodeGroupRequest.h>

using AlibabaCloud::Live::Model::AddCasterEpisodeGroupRequest;

AddCasterEpisodeGroupRequest::AddCasterEpisodeGroupRequest() :
	RpcServiceRequest("live", "2016-11-01", "AddCasterEpisodeGroup")
{}

AddCasterEpisodeGroupRequest::~AddCasterEpisodeGroupRequest()
{}

std::string AddCasterEpisodeGroupRequest::getSideOutputUrl()const
{
	return sideOutputUrl_;
}

void AddCasterEpisodeGroupRequest::setSideOutputUrl(const std::string& sideOutputUrl)
{
	sideOutputUrl_ = sideOutputUrl;
	setCoreParameter("SideOutputUrl", std::to_string(sideOutputUrl));
}

std::vector<AddCasterEpisodeGroupRequest::Item> AddCasterEpisodeGroupRequest::getItem()const
{
	return item_;
}

void AddCasterEpisodeGroupRequest::setItem(const std::vector<Item>& item)
{
	item_ = item;
	int i = 0;
	for(int i = 0; i!= item.size(); i++)	{
		auto obj = item.at(i);
		std::string str ="Item."+ std::to_string(i);
		setCoreParameter(str + ".VodUrl", std::to_string(obj.vodUrl));
		setCoreParameter(str + ".ItemName", std::to_string(obj.itemName));
	}
}

std::string AddCasterEpisodeGroupRequest::getClientToken()const
{
	return clientToken_;
}

void AddCasterEpisodeGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string AddCasterEpisodeGroupRequest::getDomainName()const
{
	return domainName_;
}

void AddCasterEpisodeGroupRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string AddCasterEpisodeGroupRequest::getStartTime()const
{
	return startTime_;
}

void AddCasterEpisodeGroupRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

int AddCasterEpisodeGroupRequest::getRepeatNum()const
{
	return repeatNum_;
}

void AddCasterEpisodeGroupRequest::setRepeatNum(int repeatNum)
{
	repeatNum_ = repeatNum;
	setCoreParameter("RepeatNum", repeatNum);
}

std::string AddCasterEpisodeGroupRequest::getCallbackUrl()const
{
	return callbackUrl_;
}

void AddCasterEpisodeGroupRequest::setCallbackUrl(const std::string& callbackUrl)
{
	callbackUrl_ = callbackUrl;
	setCoreParameter("CallbackUrl", std::to_string(callbackUrl));
}

long AddCasterEpisodeGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void AddCasterEpisodeGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

