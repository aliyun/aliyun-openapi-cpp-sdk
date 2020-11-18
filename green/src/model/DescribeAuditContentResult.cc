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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAuditContentListNode = value["AuditContentList"]["AuditContent"];
	for (auto valueAuditContentListAuditContent : allAuditContentListNode)
	{
		AuditContent auditContentListObject;
		if(!valueAuditContentListAuditContent["TaskId"].isNull())
			auditContentListObject.taskId = valueAuditContentListAuditContent["TaskId"].asString();
		if(!valueAuditContentListAuditContent["DataId"].isNull())
			auditContentListObject.dataId = valueAuditContentListAuditContent["DataId"].asString();
		if(!valueAuditContentListAuditContent["BizType"].isNull())
			auditContentListObject.bizType = valueAuditContentListAuditContent["BizType"].asString();
		if(!valueAuditContentListAuditContent["Content"].isNull())
			auditContentListObject.content = valueAuditContentListAuditContent["Content"].asString();
		if(!valueAuditContentListAuditContent["Url"].isNull())
			auditContentListObject.url = valueAuditContentListAuditContent["Url"].asString();
		if(!valueAuditContentListAuditContent["NewUrl"].isNull())
			auditContentListObject.newUrl = valueAuditContentListAuditContent["NewUrl"].asString();
		if(!valueAuditContentListAuditContent["Thumbnail"].isNull())
			auditContentListObject.thumbnail = valueAuditContentListAuditContent["Thumbnail"].asString();
		if(!valueAuditContentListAuditContent["RequestTime"].isNull())
			auditContentListObject.requestTime = valueAuditContentListAuditContent["RequestTime"].asString();
		if(!valueAuditContentListAuditContent["ScanFinishedTime"].isNull())
			auditContentListObject.scanFinishedTime = valueAuditContentListAuditContent["ScanFinishedTime"].asString();
		if(!valueAuditContentListAuditContent["Audit"].isNull())
			auditContentListObject.audit = std::stoi(valueAuditContentListAuditContent["Audit"].asString());
		if(!valueAuditContentListAuditContent["AuditResult"].isNull())
			auditContentListObject.auditResult = valueAuditContentListAuditContent["AuditResult"].asString();
		if(!valueAuditContentListAuditContent["Suggestion"].isNull())
			auditContentListObject.suggestion = valueAuditContentListAuditContent["Suggestion"].asString();
		if(!valueAuditContentListAuditContent["Id"].isNull())
			auditContentListObject.id = std::stol(valueAuditContentListAuditContent["Id"].asString());
		auto allResultsNode = valueAuditContentListAuditContent["Results"]["Result"];
		for (auto valueAuditContentListAuditContentResultsResult : allResultsNode)
		{
			AuditContent::Result resultsObject;
			if(!valueAuditContentListAuditContentResultsResult["Suggestion"].isNull())
				resultsObject.suggestion = valueAuditContentListAuditContentResultsResult["Suggestion"].asString();
			if(!valueAuditContentListAuditContentResultsResult["Label"].isNull())
				resultsObject.label = valueAuditContentListAuditContentResultsResult["Label"].asString();
			if(!valueAuditContentListAuditContentResultsResult["Scene"].isNull())
				resultsObject.scene = valueAuditContentListAuditContentResultsResult["Scene"].asString();
			auditContentListObject.results.push_back(resultsObject);
		}
		auto allFrameResultsNode = valueAuditContentListAuditContent["FrameResults"]["frameResult"];
		for (auto valueAuditContentListAuditContentFrameResultsframeResult : allFrameResultsNode)
		{
			AuditContent::FrameResult frameResultsObject;
			if(!valueAuditContentListAuditContentFrameResultsframeResult["Url"].isNull())
				frameResultsObject.url = valueAuditContentListAuditContentFrameResultsframeResult["Url"].asString();
			if(!valueAuditContentListAuditContentFrameResultsframeResult["Offset"].isNull())
				frameResultsObject.offset = std::stoi(valueAuditContentListAuditContentFrameResultsframeResult["Offset"].asString());
			if(!valueAuditContentListAuditContentFrameResultsframeResult["Label"].isNull())
				frameResultsObject.label = valueAuditContentListAuditContentFrameResultsframeResult["Label"].asString();
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

