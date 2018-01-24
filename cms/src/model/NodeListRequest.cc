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

#include <alibabacloud/cms/model/NodeListRequest.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

NodeListRequest::NodeListRequest() :
	CmsRequest("NodeList")
{}

NodeListRequest::~NodeListRequest()
{}

std::string NodeListRequest::getHostName()const
{
	return hostName_;
}

void NodeListRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setParameter("HostName", hostName);
}

std::string NodeListRequest::getInstanceIds()const
{
	return instanceIds_;
}

void NodeListRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setParameter("InstanceIds", instanceIds);
}

int NodeListRequest::getPageSize()const
{
	return pageSize_;
}

void NodeListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string NodeListRequest::getKeyWord()const
{
	return keyWord_;
}

void NodeListRequest::setKeyWord(const std::string& keyWord)
{
	keyWord_ = keyWord;
	setParameter("KeyWord", keyWord);
}

long NodeListRequest::getUserId()const
{
	return userId_;
}

void NodeListRequest::setUserId(long userId)
{
	userId_ = userId;
	setParameter("UserId", std::to_string(userId));
}

std::string NodeListRequest::getSerialNumbers()const
{
	return serialNumbers_;
}

void NodeListRequest::setSerialNumbers(const std::string& serialNumbers)
{
	serialNumbers_ = serialNumbers;
	setParameter("SerialNumbers", serialNumbers);
}

int NodeListRequest::getPageNumber()const
{
	return pageNumber_;
}

void NodeListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string NodeListRequest::getStatus()const
{
	return status_;
}

void NodeListRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

