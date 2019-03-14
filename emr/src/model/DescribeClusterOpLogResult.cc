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

#include <alibabacloud/emr/model/DescribeClusterOpLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeClusterOpLogResult::DescribeClusterOpLogResult() :
	ServiceResult()
{}

DescribeClusterOpLogResult::DescribeClusterOpLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterOpLogResult::~DescribeClusterOpLogResult()
{}

void DescribeClusterOpLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allChangeLogList = value["ChangeLogList"]["ChangeLog"];
	for (auto value : allChangeLogList)
	{
		ChangeLog changeLogListObject;
		if(!value["Id"].isNull())
			changeLogListObject.id = std::stol(value["Id"].asString());
		if(!value["GmtCreate"].isNull())
			changeLogListObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["GmtModified"].isNull())
			changeLogListObject.gmtModified = value["GmtModified"].asString();
		if(!value["TargetKey"].isNull())
			changeLogListObject.targetKey = value["TargetKey"].asString();
		if(!value["Status"].isNull())
			changeLogListObject.status = value["Status"].asString();
		if(!value["ChangeType"].isNull())
			changeLogListObject.changeType = value["ChangeType"].asString();
		if(!value["Message"].isNull())
			changeLogListObject.message = value["Message"].asString();
		if(!value["TargetType"].isNull())
			changeLogListObject.targetType = value["TargetType"].asString();
		changeLogList_.push_back(changeLogListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["Total"].isNull())
		total_ = value["Total"].asString();

}

std::string DescribeClusterOpLogResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeClusterOpLogResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeClusterOpLogResult::getTotal()const
{
	return total_;
}

std::vector<DescribeClusterOpLogResult::ChangeLog> DescribeClusterOpLogResult::getChangeLogList()const
{
	return changeLogList_;
}

