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
	auto allLogList = value["LogList"]["LogListItem"];
	for (auto value : allLogList)
	{
		LogListItem logListObject;
		if(!value["LoginSourceIp"].isNull())
			logListObject.loginSourceIp = value["LoginSourceIp"].asString();
		if(!value["InstanceName"].isNull())
			logListObject.instanceName = value["InstanceName"].asString();
		if(!value["GroupId"].isNull())
			logListObject.groupId = std::stol(value["GroupId"].asString());
		if(!value["Ip"].isNull())
			logListObject.ip = value["Ip"].asString();
		if(!value["Type"].isNull())
			logListObject.type = value["Type"].asString();
		if(!value["UserName"].isNull())
			logListObject.userName = value["UserName"].asString();
		if(!value["Uuid"].isNull())
			logListObject.uuid = value["Uuid"].asString();
		if(!value["Protocol"].isNull())
			logListObject.protocol = std::stoi(value["Protocol"].asString());
		if(!value["LoginTime"].isNull())
			logListObject.loginTime = std::stol(value["LoginTime"].asString());
		if(!value["InstanceId"].isNull())
			logListObject.instanceId = value["InstanceId"].asString();
		if(!value["OsVersion"].isNull())
			logListObject.osVersion = value["OsVersion"].asString();
		if(!value["ProtocolName"].isNull())
			logListObject.protocolName = value["ProtocolName"].asString();
		if(!value["Online"].isNull())
			logListObject.online = value["Online"].asString();
		if(!value["Location"].isNull())
			logListObject.location = value["Location"].asString();
		if(!value["id"].isNull())
			logListObject.id = std::stol(value["id"].asString());
		if(!value["Region"].isNull())
			logListObject.region = value["Region"].asString();
		if(!value["Status"].isNull())
			logListObject.status = std::stoi(value["Status"].asString());
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

