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

#include <alibabacloud/aegis/model/DescribeLoginLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeLoginLogsResult::DescribeLoginLogsResult() :
	ServiceResult()
{}

DescribeLoginLogsResult::DescribeLoginLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLoginLogsResult::~DescribeLoginLogsResult()
{}

void DescribeLoginLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogListNode = value["LogList"]["LogListItem"];
	for (auto valueLogListLogListItem : allLogListNode)
	{
		LogListItem logListObject;
		if(!valueLogListLogListItem["LoginSourceIp"].isNull())
			logListObject.loginSourceIp = valueLogListLogListItem["LoginSourceIp"].asString();
		if(!valueLogListLogListItem["InstanceName"].isNull())
			logListObject.instanceName = valueLogListLogListItem["InstanceName"].asString();
		if(!valueLogListLogListItem["GroupId"].isNull())
			logListObject.groupId = std::stol(valueLogListLogListItem["GroupId"].asString());
		if(!valueLogListLogListItem["Ip"].isNull())
			logListObject.ip = valueLogListLogListItem["Ip"].asString();
		if(!valueLogListLogListItem["Type"].isNull())
			logListObject.type = valueLogListLogListItem["Type"].asString();
		if(!valueLogListLogListItem["UserName"].isNull())
			logListObject.userName = valueLogListLogListItem["UserName"].asString();
		if(!valueLogListLogListItem["Uuid"].isNull())
			logListObject.uuid = valueLogListLogListItem["Uuid"].asString();
		if(!valueLogListLogListItem["Protocol"].isNull())
			logListObject.protocol = std::stoi(valueLogListLogListItem["Protocol"].asString());
		if(!valueLogListLogListItem["LoginTime"].isNull())
			logListObject.loginTime = std::stol(valueLogListLogListItem["LoginTime"].asString());
		if(!valueLogListLogListItem["InstanceId"].isNull())
			logListObject.instanceId = valueLogListLogListItem["InstanceId"].asString();
		if(!valueLogListLogListItem["OsVersion"].isNull())
			logListObject.osVersion = valueLogListLogListItem["OsVersion"].asString();
		if(!valueLogListLogListItem["ProtocolName"].isNull())
			logListObject.protocolName = valueLogListLogListItem["ProtocolName"].asString();
		if(!valueLogListLogListItem["Online"].isNull())
			logListObject.online = valueLogListLogListItem["Online"].asString();
		if(!valueLogListLogListItem["Location"].isNull())
			logListObject.location = valueLogListLogListItem["Location"].asString();
		if(!valueLogListLogListItem["id"].isNull())
			logListObject.id = std::stol(valueLogListLogListItem["id"].asString());
		if(!valueLogListLogListItem["Region"].isNull())
			logListObject.region = valueLogListLogListItem["Region"].asString();
		if(!valueLogListLogListItem["Status"].isNull())
			logListObject.status = std::stoi(valueLogListLogListItem["Status"].asString());
		logList_.push_back(logListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeLoginLogsResult::LogListItem> DescribeLoginLogsResult::getLogList()const
{
	return logList_;
}

int DescribeLoginLogsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeLoginLogsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLoginLogsResult::getCurrentPage()const
{
	return currentPage_;
}

