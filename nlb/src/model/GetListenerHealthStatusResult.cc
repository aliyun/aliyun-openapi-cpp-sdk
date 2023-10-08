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

#include <alibabacloud/nlb/model/GetListenerHealthStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nlb;
using namespace AlibabaCloud::Nlb::Model;

GetListenerHealthStatusResult::GetListenerHealthStatusResult() :
	ServiceResult()
{}

GetListenerHealthStatusResult::GetListenerHealthStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetListenerHealthStatusResult::~GetListenerHealthStatusResult()
{}

void GetListenerHealthStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListenerHealthStatusNode = value["ListenerHealthStatus"]["ListenerHealthStatusItem"];
	for (auto valueListenerHealthStatusListenerHealthStatusItem : allListenerHealthStatusNode)
	{
		ListenerHealthStatusItem listenerHealthStatusObject;
		if(!valueListenerHealthStatusListenerHealthStatusItem["ListenerId"].isNull())
			listenerHealthStatusObject.listenerId = valueListenerHealthStatusListenerHealthStatusItem["ListenerId"].asString();
		if(!valueListenerHealthStatusListenerHealthStatusItem["ListenerPort"].isNull())
			listenerHealthStatusObject.listenerPort = std::stoi(valueListenerHealthStatusListenerHealthStatusItem["ListenerPort"].asString());
		if(!valueListenerHealthStatusListenerHealthStatusItem["ListenerProtocol"].isNull())
			listenerHealthStatusObject.listenerProtocol = valueListenerHealthStatusListenerHealthStatusItem["ListenerProtocol"].asString();
		auto allServerGroupInfosNode = valueListenerHealthStatusListenerHealthStatusItem["ServerGroupInfos"]["ServerGroupInfo"];
		for (auto valueListenerHealthStatusListenerHealthStatusItemServerGroupInfosServerGroupInfo : allServerGroupInfosNode)
		{
			ListenerHealthStatusItem::ServerGroupInfo serverGroupInfosObject;
			if(!valueListenerHealthStatusListenerHealthStatusItemServerGroupInfosServerGroupInfo["HeathCheckEnabled"].isNull())
				serverGroupInfosObject.heathCheckEnabled = valueListenerHealthStatusListenerHealthStatusItemServerGroupInfosServerGroupInfo["HeathCheckEnabled"].asString() == "true";
			if(!valueListenerHealthStatusListenerHealthStatusItemServerGroupInfosServerGroupInfo["ServerGroupId"].isNull())
				serverGroupInfosObject.serverGroupId = valueListenerHealthStatusListenerHealthStatusItemServerGroupInfosServerGroupInfo["ServerGroupId"].asString();
			auto allNonNormalServersNode = valueListenerHealthStatusListenerHealthStatusItemServerGroupInfosServerGroupInfo["NonNormalServers"]["AbnormalServer"];
			for (auto valueListenerHealthStatusListenerHealthStatusItemServerGroupInfosServerGroupInfoNonNormalServersAbnormalServer : allNonNormalServersNode)
			{
				ListenerHealthStatusItem::ServerGroupInfo::AbnormalServer nonNormalServersObject;
				if(!valueListenerHealthStatusListenerHealthStatusItemServerGroupInfosServerGroupInfoNonNormalServersAbnormalServer["Status"].isNull())
					nonNormalServersObject.status = valueListenerHealthStatusListenerHealthStatusItemServerGroupInfosServerGroupInfoNonNormalServersAbnormalServer["Status"].asString();
				if(!valueListenerHealthStatusListenerHealthStatusItemServerGroupInfosServerGroupInfoNonNormalServersAbnormalServer["Port"].isNull())
					nonNormalServersObject.port = std::stoi(valueListenerHealthStatusListenerHealthStatusItemServerGroupInfosServerGroupInfoNonNormalServersAbnormalServer["Port"].asString());
				if(!valueListenerHealthStatusListenerHealthStatusItemServerGroupInfosServerGroupInfoNonNormalServersAbnormalServer["ServerId"].isNull())
					nonNormalServersObject.serverId = valueListenerHealthStatusListenerHealthStatusItemServerGroupInfosServerGroupInfoNonNormalServersAbnormalServer["ServerId"].asString();
				if(!valueListenerHealthStatusListenerHealthStatusItemServerGroupInfosServerGroupInfoNonNormalServersAbnormalServer["ServerIp"].isNull())
					nonNormalServersObject.serverIp = valueListenerHealthStatusListenerHealthStatusItemServerGroupInfosServerGroupInfoNonNormalServersAbnormalServer["ServerIp"].asString();
				auto reasonNode = value["Reason"];
				if(!reasonNode["ReasonCode"].isNull())
					nonNormalServersObject.reason.reasonCode = reasonNode["ReasonCode"].asString();
				serverGroupInfosObject.nonNormalServers.push_back(nonNormalServersObject);
			}
			listenerHealthStatusObject.serverGroupInfos.push_back(serverGroupInfosObject);
		}
		listenerHealthStatus_.push_back(listenerHealthStatusObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::vector<GetListenerHealthStatusResult::ListenerHealthStatusItem> GetListenerHealthStatusResult::getListenerHealthStatus()const
{
	return listenerHealthStatus_;
}

int GetListenerHealthStatusResult::getTotalCount()const
{
	return totalCount_;
}

std::string GetListenerHealthStatusResult::getMessage()const
{
	return message_;
}

std::string GetListenerHealthStatusResult::getNextToken()const
{
	return nextToken_;
}

int GetListenerHealthStatusResult::getMaxResults()const
{
	return maxResults_;
}

int GetListenerHealthStatusResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetListenerHealthStatusResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string GetListenerHealthStatusResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string GetListenerHealthStatusResult::getCode()const
{
	return code_;
}

bool GetListenerHealthStatusResult::getSuccess()const
{
	return success_;
}

