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

#include <alibabacloud/sas/model/DescribeWebLockFileEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeWebLockFileEventsResult::DescribeWebLockFileEventsResult() :
	ServiceResult()
{}

DescribeWebLockFileEventsResult::DescribeWebLockFileEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebLockFileEventsResult::~DescribeWebLockFileEventsResult()
{}

void DescribeWebLockFileEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListNode = value["List"]["Info"];
	for (auto valueListInfo : allListNode)
	{
		Info listObject;
		if(!valueListInfo["Status"].isNull())
			listObject.status = valueListInfo["Status"].asString();
		if(!valueListInfo["EventName"].isNull())
			listObject.eventName = valueListInfo["EventName"].asString();
		if(!valueListInfo["Ds"].isNull())
			listObject.ds = std::stol(valueListInfo["Ds"].asString());
		if(!valueListInfo["InternetIp"].isNull())
			listObject.internetIp = valueListInfo["InternetIp"].asString();
		if(!valueListInfo["ProcessPath"].isNull())
			listObject.processPath = valueListInfo["ProcessPath"].asString();
		if(!valueListInfo["Ip"].isNull())
			listObject.ip = valueListInfo["Ip"].asString();
		if(!valueListInfo["GmtEvent"].isNull())
			listObject.gmtEvent = std::stol(valueListInfo["GmtEvent"].asString());
		if(!valueListInfo["Count"].isNull())
			listObject.count = std::stol(valueListInfo["Count"].asString());
		if(!valueListInfo["IntranetIp"].isNull())
			listObject.intranetIp = valueListInfo["IntranetIp"].asString();
		if(!valueListInfo["ProcessName"].isNull())
			listObject.processName = valueListInfo["ProcessName"].asString();
		if(!valueListInfo["Uuid"].isNull())
			listObject.uuid = valueListInfo["Uuid"].asString();
		if(!valueListInfo["EventType"].isNull())
			listObject.eventType = valueListInfo["EventType"].asString();
		if(!valueListInfo["InstanceName"].isNull())
			listObject.instanceName = valueListInfo["InstanceName"].asString();
		if(!valueListInfo["EventStatus"].isNull())
			listObject.eventStatus = valueListInfo["EventStatus"].asString();
		if(!valueListInfo["Path"].isNull())
			listObject.path = valueListInfo["Path"].asString();
		if(!valueListInfo["Solution"].isNull())
			listObject.solution = valueListInfo["Solution"].asString();
		if(!valueListInfo["Level"].isNull())
			listObject.level = valueListInfo["Level"].asString();
		if(!valueListInfo["Id"].isNull())
			listObject.id = std::stol(valueListInfo["Id"].asString());
		list_.push_back(listObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeWebLockFileEventsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeWebLockFileEventsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeWebLockFileEventsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeWebLockFileEventsResult::Info> DescribeWebLockFileEventsResult::getList()const
{
	return list_;
}

