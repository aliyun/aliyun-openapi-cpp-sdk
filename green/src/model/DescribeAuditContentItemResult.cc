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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allAuditContentItemList = value["AuditContentItemList"]["AuditContentItem"];
	for (auto value : allAuditContentItemList)
	{
		AuditContentItem auditContentItemListObject;
		if(!value["ParentTaskId"].isNull())
			auditContentItemListObject.parentTaskId = value["ParentTaskId"].asString();
		if(!value["Content"].isNull())
			auditContentItemListObject.content = value["Content"].asString();
		if(!value["Sn"].isNull())
			auditContentItemListObject.sn = std::stoi(value["Sn"].asString());
		if(!value["StartTime"].isNull())
			auditContentItemListObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			auditContentItemListObject.endTime = value["EndTime"].asString();
		if(!value["Audit"].isNull())
			auditContentItemListObject.audit = std::stoi(value["Audit"].asString());
		if(!value["AuditResult"].isNull())
			auditContentItemListObject.auditResult = value["AuditResult"].asString();
		if(!value["Suggestion"].isNull())
			auditContentItemListObject.suggestion = value["Suggestion"].asString();
		if(!value["Id"].isNull())
			auditContentItemListObject.id = std::stol(value["Id"].asString());
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

