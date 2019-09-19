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

#include <alibabacloud/green/model/DescribeAuditContentItemResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeAuditContentItemResult::DescribeAuditContentItemResult() :
	ServiceResult()
{}

DescribeAuditContentItemResult::DescribeAuditContentItemResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAuditContentItemResult::~DescribeAuditContentItemResult()
{}

void DescribeAuditContentItemResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAuditContentItemListNode = value["AuditContentItemList"]["AuditContentItem"];
	for (auto valueAuditContentItemListAuditContentItem : allAuditContentItemListNode)
	{
		AuditContentItem auditContentItemListObject;
		if(!valueAuditContentItemListAuditContentItem["ParentTaskId"].isNull())
			auditContentItemListObject.parentTaskId = valueAuditContentItemListAuditContentItem["ParentTaskId"].asString();
		if(!valueAuditContentItemListAuditContentItem["Content"].isNull())
			auditContentItemListObject.content = valueAuditContentItemListAuditContentItem["Content"].asString();
		if(!valueAuditContentItemListAuditContentItem["Sn"].isNull())
			auditContentItemListObject.sn = std::stoi(valueAuditContentItemListAuditContentItem["Sn"].asString());
		if(!valueAuditContentItemListAuditContentItem["StartTime"].isNull())
			auditContentItemListObject.startTime = valueAuditContentItemListAuditContentItem["StartTime"].asString();
		if(!valueAuditContentItemListAuditContentItem["EndTime"].isNull())
			auditContentItemListObject.endTime = valueAuditContentItemListAuditContentItem["EndTime"].asString();
		if(!valueAuditContentItemListAuditContentItem["Audit"].isNull())
			auditContentItemListObject.audit = std::stoi(valueAuditContentItemListAuditContentItem["Audit"].asString());
		if(!valueAuditContentItemListAuditContentItem["AuditResult"].isNull())
			auditContentItemListObject.auditResult = valueAuditContentItemListAuditContentItem["AuditResult"].asString();
		if(!valueAuditContentItemListAuditContentItem["Suggestion"].isNull())
			auditContentItemListObject.suggestion = valueAuditContentItemListAuditContentItem["Suggestion"].asString();
		if(!valueAuditContentItemListAuditContentItem["Id"].isNull())
			auditContentItemListObject.id = std::stol(valueAuditContentItemListAuditContentItem["Id"].asString());
		auto allAuditIllegalReasons = value["AuditIllegalReasons"]["StringItem"];
		for (auto value : allAuditIllegalReasons)
			auditContentItemListObject.auditIllegalReasons.push_back(value.asString());
		auditContentItemList_.push_back(auditContentItemListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeAuditContentItemResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeAuditContentItemResult::AuditContentItem> DescribeAuditContentItemResult::getAuditContentItemList()const
{
	return auditContentItemList_;
}

int DescribeAuditContentItemResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAuditContentItemResult::getCurrentPage()const
{
	return currentPage_;
}

