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

#include <alibabacloud/green/model/DescribeAuditContentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeAuditContentResult::DescribeAuditContentResult() :
	ServiceResult()
{}

DescribeAuditContentResult::DescribeAuditContentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAuditContentResult::~DescribeAuditContentResult()
{}

void DescribeAuditContentResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allAuditContentList = value["AuditContentList"]["AuditContent"];
	for (auto value : allAuditContentList)
	{
		AuditContent auditContentListObject;
		if(!value["TaskId"].isNull())
			auditContentListObject.taskId = value["TaskId"].asString();
		if(!value["DataId"].isNull())
			auditContentListObject.dataId = value["DataId"].asString();
		if(!value["BizType"].isNull())
			auditContentListObject.bizType = value["BizType"].asString();
		if(!value["Content"].isNull())
			auditContentListObject.content = value["Content"].asString();
		if(!value["Url"].isNull())
			auditContentListObject.url = value["Url"].asString();
		if(!value["NewUrl"].isNull())
			auditContentListObject.newUrl = value["NewUrl"].asString();
		if(!value["Thumbnail"].isNull())
			auditContentListObject.thumbnail = value["Thumbnail"].asString();
		if(!value["RequestTime"].isNull())
			auditContentListObject.requestTime = value["RequestTime"].asString();
		if(!value["ScanFinishedTime"].isNull())
			auditContentListObject.scanFinishedTime = value["ScanFinishedTime"].asString();
		if(!value["Audit"].isNull())
			auditContentListObject.audit = std::stoi(value["Audit"].asString());
		if(!value["AuditResult"].isNull())
			auditContentListObject.auditResult = value["AuditResult"].asString();
		if(!value["Suggestion"].isNull())
			auditContentListObject.suggestion = value["Suggestion"].asString();
		if(!value["Id"].isNull())
			auditContentListObject.id = std::stol(value["Id"].asString());
		auto allResults = value["Results"]["Result"];
		for (auto value : allResults)
		{
			AuditContent::Result resultsObject;
			if(!value["Suggestion"].isNull())
				resultsObject.suggestion = value["Suggestion"].asString();
			if(!value["Label"].isNull())
				resultsObject.label = value["Label"].asString();
			if(!value["Scene"].isNull())
				resultsObject.scene = value["Scene"].asString();
			auditContentListObject.results.push_back(resultsObject);
		}
		auto allFrameResults = value["FrameResults"]["frameResult"];
		for (auto value : allFrameResults)
		{
			AuditContent::FrameResult frameResultsObject;
			if(!value["Url"].isNull())
				frameResultsObject.url = value["Url"].asString();
			if(!value["Offset"].isNull())
				frameResultsObject.offset = std::stoi(value["Offset"].asString());
			if(!value["Label"].isNull())
				frameResultsObject.label = value["Label"].asString();
			auditContentListObject.frameResults.push_back(frameResultsObject);
		}
		auto allAuditIllegalReasons = value["AuditIllegalReasons"]["StringItem"];
		for (auto value : allAuditIllegalReasons)
			auditContentListObject.auditIllegalReasons.push_back(value.asString());
		auditContentList_.push_back(auditContentListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeAuditContentResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAuditContentResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAuditContentResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeAuditContentResult::AuditContent> DescribeAuditContentResult::getAuditContentList()const
{
	return auditContentList_;
}

