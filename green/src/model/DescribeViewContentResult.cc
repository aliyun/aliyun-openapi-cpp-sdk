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

#include <alibabacloud/green/model/DescribeViewContentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeViewContentResult::DescribeViewContentResult() :
	ServiceResult()
{}

DescribeViewContentResult::DescribeViewContentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeViewContentResult::~DescribeViewContentResult()
{}

void DescribeViewContentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allViewContentListNode = value["ViewContentList"]["ViewContent"];
	for (auto valueViewContentListViewContent : allViewContentListNode)
	{
		ViewContent viewContentListObject;
		if(!valueViewContentListViewContent["TaskId"].isNull())
			viewContentListObject.taskId = valueViewContentListViewContent["TaskId"].asString();
		if(!valueViewContentListViewContent["DataId"].isNull())
			viewContentListObject.dataId = valueViewContentListViewContent["DataId"].asString();
		if(!valueViewContentListViewContent["BizType"].isNull())
			viewContentListObject.bizType = valueViewContentListViewContent["BizType"].asString();
		if(!valueViewContentListViewContent["Content"].isNull())
			viewContentListObject.content = valueViewContentListViewContent["Content"].asString();
		if(!valueViewContentListViewContent["Url"].isNull())
			viewContentListObject.url = valueViewContentListViewContent["Url"].asString();
		if(!valueViewContentListViewContent["NewUrl"].isNull())
			viewContentListObject.newUrl = valueViewContentListViewContent["NewUrl"].asString();
		if(!valueViewContentListViewContent["Thumbnail"].isNull())
			viewContentListObject.thumbnail = valueViewContentListViewContent["Thumbnail"].asString();
		if(!valueViewContentListViewContent["RequestTime"].isNull())
			viewContentListObject.requestTime = valueViewContentListViewContent["RequestTime"].asString();
		if(!valueViewContentListViewContent["ScanFinishedTime"].isNull())
			viewContentListObject.scanFinishedTime = valueViewContentListViewContent["ScanFinishedTime"].asString();
		if(!valueViewContentListViewContent["Suggestion"].isNull())
			viewContentListObject.suggestion = valueViewContentListViewContent["Suggestion"].asString();
		if(!valueViewContentListViewContent["Id"].isNull())
			viewContentListObject.id = std::stol(valueViewContentListViewContent["Id"].asString());
		if(!valueViewContentListViewContent["ScanResult"].isNull())
			viewContentListObject.scanResult = valueViewContentListViewContent["ScanResult"].asString();
		auto allResultsNode = valueViewContentListViewContent["Results"]["Result"];
		for (auto valueViewContentListViewContentResultsResult : allResultsNode)
		{
			ViewContent::Result resultsObject;
			if(!valueViewContentListViewContentResultsResult["Suggestion"].isNull())
				resultsObject.suggestion = valueViewContentListViewContentResultsResult["Suggestion"].asString();
			if(!valueViewContentListViewContentResultsResult["Label"].isNull())
				resultsObject.label = valueViewContentListViewContentResultsResult["Label"].asString();
			if(!valueViewContentListViewContentResultsResult["Scene"].isNull())
				resultsObject.scene = valueViewContentListViewContentResultsResult["Scene"].asString();
			viewContentListObject.results.push_back(resultsObject);
		}
		auto allFrameResultsNode = valueViewContentListViewContent["FrameResults"]["frameResult"];
		for (auto valueViewContentListViewContentFrameResultsframeResult : allFrameResultsNode)
		{
			ViewContent::FrameResult frameResultsObject;
			if(!valueViewContentListViewContentFrameResultsframeResult["Url"].isNull())
				frameResultsObject.url = valueViewContentListViewContentFrameResultsframeResult["Url"].asString();
			if(!valueViewContentListViewContentFrameResultsframeResult["Offset"].isNull())
				frameResultsObject.offset = std::stoi(valueViewContentListViewContentFrameResultsframeResult["Offset"].asString());
			viewContentListObject.frameResults.push_back(frameResultsObject);
		}
		viewContentList_.push_back(viewContentListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeViewContentResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeViewContentResult::ViewContent> DescribeViewContentResult::getViewContentList()const
{
	return viewContentList_;
}

int DescribeViewContentResult::getPageSize()const
{
	return pageSize_;
}

int DescribeViewContentResult::getCurrentPage()const
{
	return currentPage_;
}

