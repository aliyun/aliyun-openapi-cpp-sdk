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

#include <alibabacloud/airec/model/QueryDataMessageRequest.h>

using AlibabaCloud::Airec::Model::QueryDataMessageRequest;

QueryDataMessageRequest::QueryDataMessageRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/tables/[table]/data-message");
	setMethod(HttpRequest::Method::Get);
}

QueryDataMessageRequest::~QueryDataMessageRequest()
{}

std::string QueryDataMessageRequest::getTraceId()const
{
	return traceId_;
}

void QueryDataMessageRequest::setTraceId(const std::string& traceId)
{
	traceId_ = traceId;
	setParameter("TraceId", traceId);
}

std::string QueryDataMessageRequest::getMessageSource()const
{
	return messageSource_;
}

void QueryDataMessageRequest::setMessageSource(const std::string& messageSource)
{
	messageSource_ = messageSource;
	setParameter("MessageSource", messageSource);
}

long QueryDataMessageRequest::getEndTime()const
{
	return endTime_;
}

void QueryDataMessageRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string QueryDataMessageRequest::getUserType()const
{
	return userType_;
}

void QueryDataMessageRequest::setUserType(const std::string& userType)
{
	userType_ = userType;
	setParameter("UserType", userType);
}

long QueryDataMessageRequest::getStartTime()const
{
	return startTime_;
}

void QueryDataMessageRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string QueryDataMessageRequest::getUserId()const
{
	return userId_;
}

void QueryDataMessageRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string QueryDataMessageRequest::getItemId()const
{
	return itemId_;
}

void QueryDataMessageRequest::setItemId(const std::string& itemId)
{
	itemId_ = itemId;
	setParameter("ItemId", itemId);
}

std::string QueryDataMessageRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryDataMessageRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string QueryDataMessageRequest::getItemType()const
{
	return itemType_;
}

void QueryDataMessageRequest::setItemType(const std::string& itemType)
{
	itemType_ = itemType;
	setParameter("ItemType", itemType);
}

std::string QueryDataMessageRequest::getCmdType()const
{
	return cmdType_;
}

void QueryDataMessageRequest::setCmdType(const std::string& cmdType)
{
	cmdType_ = cmdType;
	setParameter("CmdType", cmdType);
}

int QueryDataMessageRequest::getSize()const
{
	return size_;
}

void QueryDataMessageRequest::setSize(int size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

std::string QueryDataMessageRequest::getSceneId()const
{
	return sceneId_;
}

void QueryDataMessageRequest::setSceneId(const std::string& sceneId)
{
	sceneId_ = sceneId;
	setParameter("SceneId", sceneId);
}

std::string QueryDataMessageRequest::getBhvType()const
{
	return bhvType_;
}

void QueryDataMessageRequest::setBhvType(const std::string& bhvType)
{
	bhvType_ = bhvType;
	setParameter("BhvType", bhvType);
}

int QueryDataMessageRequest::getPage()const
{
	return page_;
}

void QueryDataMessageRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

std::string QueryDataMessageRequest::getTable()const
{
	return table_;
}

void QueryDataMessageRequest::setTable(const std::string& table)
{
	table_ = table;
	setParameter("Table", table);
}

