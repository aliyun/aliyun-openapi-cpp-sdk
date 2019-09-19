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

#include <alibabacloud/aegis/model/DescribeWebLockBindListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeWebLockBindListResult::DescribeWebLockBindListResult() :
	ServiceResult()
{}

DescribeWebLockBindListResult::DescribeWebLockBindListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebLockBindListResult::~DescribeWebLockBindListResult()
{}

void DescribeWebLockBindListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBindListNode = value["BindList"]["Bind"];
	for (auto valueBindListBind : allBindListNode)
	{
		Bind bindListObject;
		if(!valueBindListBind["Uuid"].isNull())
			bindListObject.uuid = valueBindListBind["Uuid"].asString();
		if(!valueBindListBind["InstanceName"].isNull())
			bindListObject.instanceName = valueBindListBind["InstanceName"].asString();
		if(!valueBindListBind["InternetIp"].isNull())
			bindListObject.internetIp = valueBindListBind["InternetIp"].asString();
		if(!valueBindListBind["IntranetIp"].isNull())
			bindListObject.intranetIp = valueBindListBind["IntranetIp"].asString();
		if(!valueBindListBind["Os"].isNull())
			bindListObject.os = valueBindListBind["Os"].asString();
		if(!valueBindListBind["DirCount"].isNull())
			bindListObject.dirCount = valueBindListBind["DirCount"].asString();
		if(!valueBindListBind["ServiceStatus"].isNull())
			bindListObject.serviceStatus = valueBindListBind["ServiceStatus"].asString();
		if(!valueBindListBind["ServiceCode"].isNull())
			bindListObject.serviceCode = valueBindListBind["ServiceCode"].asString();
		if(!valueBindListBind["ServiceDetail"].isNull())
			bindListObject.serviceDetail = valueBindListBind["ServiceDetail"].asString();
		if(!valueBindListBind["Status"].isNull())
			bindListObject.status = valueBindListBind["Status"].asString();
		if(!valueBindListBind["Percent"].isNull())
			bindListObject.percent = std::stoi(valueBindListBind["Percent"].asString());
		bindList_.push_back(bindListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeWebLockBindListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeWebLockBindListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeWebLockBindListResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeWebLockBindListResult::Bind> DescribeWebLockBindListResult::getBindList()const
{
	return bindList_;
}

