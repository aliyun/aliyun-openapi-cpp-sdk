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

#include <alibabacloud/live/model/QueryLiveDomainMultiStreamListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

QueryLiveDomainMultiStreamListResult::QueryLiveDomainMultiStreamListResult() :
	ServiceResult()
{}

QueryLiveDomainMultiStreamListResult::QueryLiveDomainMultiStreamListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryLiveDomainMultiStreamListResult::~QueryLiveDomainMultiStreamListResult()
{}

void QueryLiveDomainMultiStreamListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOnlineStreamsNode = value["OnlineStreams"]["onlineStreamsItem"];
	for (auto valueOnlineStreamsonlineStreamsItem : allOnlineStreamsNode)
	{
		OnlineStreamsItem onlineStreamsObject;
		if(!valueOnlineStreamsonlineStreamsItem["Domain"].isNull())
			onlineStreamsObject.domain = valueOnlineStreamsonlineStreamsItem["Domain"].asString();
		if(!valueOnlineStreamsonlineStreamsItem["AppName"].isNull())
			onlineStreamsObject.appName = valueOnlineStreamsonlineStreamsItem["AppName"].asString();
		if(!valueOnlineStreamsonlineStreamsItem["StreamName"].isNull())
			onlineStreamsObject.streamName = valueOnlineStreamsonlineStreamsItem["StreamName"].asString();
		if(!valueOnlineStreamsonlineStreamsItem["OptimalMode"].isNull())
			onlineStreamsObject.optimalMode = valueOnlineStreamsonlineStreamsItem["OptimalMode"].asString();
		auto allUpstreamListNode = valueOnlineStreamsonlineStreamsItem["UpstreamList"]["upstreamListItem"];
		for (auto valueOnlineStreamsonlineStreamsItemUpstreamListupstreamListItem : allUpstreamListNode)
		{
			OnlineStreamsItem::UpstreamListItem upstreamListObject;
			if(!valueOnlineStreamsonlineStreamsItemUpstreamListupstreamListItem["UpstreamSequence"].isNull())
				upstreamListObject.upstreamSequence = valueOnlineStreamsonlineStreamsItemUpstreamListupstreamListItem["UpstreamSequence"].asString();
			if(!valueOnlineStreamsonlineStreamsItemUpstreamListupstreamListItem["UpstreamIp"].isNull())
				upstreamListObject.upstreamIp = valueOnlineStreamsonlineStreamsItemUpstreamListupstreamListItem["UpstreamIp"].asString();
			if(!valueOnlineStreamsonlineStreamsItemUpstreamListupstreamListItem["UpstreamTime"].isNull())
				upstreamListObject.upstreamTime = valueOnlineStreamsonlineStreamsItemUpstreamListupstreamListItem["UpstreamTime"].asString();
			if(!valueOnlineStreamsonlineStreamsItemUpstreamListupstreamListItem["MasterFlag"].isNull())
				upstreamListObject.masterFlag = valueOnlineStreamsonlineStreamsItemUpstreamListupstreamListItem["MasterFlag"].asString() == "true";
			onlineStreamsObject.upstreamList.push_back(upstreamListObject);
		}
		auto allChangeLogsNode = valueOnlineStreamsonlineStreamsItem["ChangeLogs"]["changeLogsItem"];
		for (auto valueOnlineStreamsonlineStreamsItemChangeLogschangeLogsItem : allChangeLogsNode)
		{
			OnlineStreamsItem::ChangeLogsItem changeLogsObject;
			if(!valueOnlineStreamsonlineStreamsItemChangeLogschangeLogsItem["ChangeTime"].isNull())
				changeLogsObject.changeTime = valueOnlineStreamsonlineStreamsItemChangeLogschangeLogsItem["ChangeTime"].asString();
			if(!valueOnlineStreamsonlineStreamsItemChangeLogschangeLogsItem["ChangeReason"].isNull())
				changeLogsObject.changeReason = valueOnlineStreamsonlineStreamsItemChangeLogschangeLogsItem["ChangeReason"].asString();
			if(!valueOnlineStreamsonlineStreamsItemChangeLogschangeLogsItem["MasterUpstream"].isNull())
				changeLogsObject.masterUpstream = valueOnlineStreamsonlineStreamsItemChangeLogschangeLogsItem["MasterUpstream"].asString();
			if(!valueOnlineStreamsonlineStreamsItemChangeLogschangeLogsItem["UpstreamSequence"].isNull())
				changeLogsObject.upstreamSequence = valueOnlineStreamsonlineStreamsItemChangeLogschangeLogsItem["UpstreamSequence"].asString();
			if(!valueOnlineStreamsonlineStreamsItemChangeLogschangeLogsItem["UpstreamIp"].isNull())
				changeLogsObject.upstreamIp = valueOnlineStreamsonlineStreamsItemChangeLogschangeLogsItem["UpstreamIp"].asString();
			onlineStreamsObject.changeLogs.push_back(changeLogsObject);
		}
		onlineStreams_.push_back(onlineStreamsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int QueryLiveDomainMultiStreamListResult::getTotalCount()const
{
	return totalCount_;
}

int QueryLiveDomainMultiStreamListResult::getPageSize()const
{
	return pageSize_;
}

int QueryLiveDomainMultiStreamListResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<QueryLiveDomainMultiStreamListResult::OnlineStreamsItem> QueryLiveDomainMultiStreamListResult::getOnlineStreams()const
{
	return onlineStreams_;
}

