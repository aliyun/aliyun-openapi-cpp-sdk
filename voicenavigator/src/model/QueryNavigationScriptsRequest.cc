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

#include <alibabacloud/voicenavigator/model/QueryNavigationScriptsRequest.h>

using AlibabaCloud::VoiceNavigator::Model::QueryNavigationScriptsRequest;

QueryNavigationScriptsRequest::QueryNavigationScriptsRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "QueryNavigationScripts")
{
	setMethod(HttpRequest::Method::Get);
}

QueryNavigationScriptsRequest::~QueryNavigationScriptsRequest()
{}

std::string QueryNavigationScriptsRequest::getType()const
{
	return type_;
}

void QueryNavigationScriptsRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

int QueryNavigationScriptsRequest::getPageNumber()const
{
	return pageNumber_;
}

void QueryNavigationScriptsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string QueryNavigationScriptsRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryNavigationScriptsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int QueryNavigationScriptsRequest::getPageSize()const
{
	return pageSize_;
}

void QueryNavigationScriptsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryNavigationScriptsRequest::getKeyWord()const
{
	return keyWord_;
}

void QueryNavigationScriptsRequest::setKeyWord(const std::string& keyWord)
{
	keyWord_ = keyWord;
	setParameter("KeyWord", keyWord);
}

std::string QueryNavigationScriptsRequest::getCategoryId()const
{
	return categoryId_;
}

void QueryNavigationScriptsRequest::setCategoryId(const std::string& categoryId)
{
	categoryId_ = categoryId;
	setParameter("CategoryId", categoryId);
}

