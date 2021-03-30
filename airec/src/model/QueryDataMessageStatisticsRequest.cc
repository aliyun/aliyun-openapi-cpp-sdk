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

#include <alibabacloud/airec/model/QueryDataMessageStatisticsRequest.h>

using AlibabaCloud::Airec::Model::QueryDataMessageStatisticsRequest;

QueryDataMessageStatisticsRequest::QueryDataMessageStatisticsRequest() :
	RoaServiceRequest("airec", "2020-11-26")
{
	setResourcePath("/v2/openapi/instances/[instanceId]/tables/[table]/data-message-statistics");
	setMethod(HttpRequest::Method::Get);
}

QueryDataMessageStatisticsRequest::~QueryDataMessageStatisticsRequest()
{}

std::string QueryDataMessageStatisticsRequest::getTraceId()const
{
	return traceId_;
}

void QueryDataMessageStatisticsRequest::setTraceId(const std::string& traceId)
{
	traceId_ = traceId;
	setParameter("TraceId", traceId);
}

std::string QueryDataMessageStatisticsRequest::getMessageSource()const
{
	return messageSource_;
}

void QueryDataMessageStatisticsRequest::setMessageSource(const std::string& messageSource)
{
	messageSource_ = messageSource;
	setParameter("MessageSource", messageSource);
}

long QueryDataMessageStatisticsRequest::getEndTime()const
{
	return endTime_;
}

void QueryDataMessageStatisticsRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string QueryDataMessageStatisticsRequest::getUserType()const
{
	return userType_;
}

void QueryDataMessageStatisticsRequest::setUserType(const std::string& userType)
{
	userType_ = userType;
	setParameter("UserType", userType);
}

long QueryDataMessageStatisticsRequest::getStartTime()const
{
	return startTime_;
}

void QueryDataMessageStatisticsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string QueryDataMessageStatisticsRequest::getUserId()const
{
	return userId_;
}

void QueryDataMessageStatisticsRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string QueryDataMessageStatisticsRequest::getItemId()const
{
	return itemId_;
}

void QueryDataMessageStatisticsRequest::setItemId(const std::string& itemId)
{
	itemId_ = itemId;
	setParameter("ItemId", itemId);
}

std::string QueryDataMessageStatisticsRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryDataMessageStatisticsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string QueryDataMessageStatisticsRequest::getItemType()const
{
	return itemType_;
}

void QueryDataMessageStatisticsRequest::setItemType(const std::string& itemType)
{
	itemType_ = itemType;
	setParameter("ItemType", itemType);
}

std::string QueryDataMessageStatisticsRequest::getCmdType()const
{
	return cmdType_;
}

void QueryDataMessageStatisticsRequest::setCmdType(const std::string& cmdType)
{
	cmdType_ = cmdType;
	setParameter("CmdType", cmdType);
}

std::string QueryDataMessageStatisticsRequest::getSceneId()const
{
	return sceneId_;
}

void QueryDataMessageStatisticsRequest::setSceneId(const std::string& sceneId)
{
	sceneId_ = sceneId;
	setParameter("SceneId", sceneId);
}

std::string QueryDataMessageStatisticsRequest::getBhvType()const
{
	return bhvType_;
}

void QueryDataMessageStatisticsRequest::setBhvType(const std::string& bhvType)
{
	bhvType_ = bhvType;
	setParameter("BhvType", bhvType);
}

std::string QueryDataMessageStatisticsRequest::getTable()const
{
	return table_;
}

void QueryDataMessageStatisticsRequest::setTable(const std::string& table)
{
	table_ = table;
	setParameter("Table", table);
}

