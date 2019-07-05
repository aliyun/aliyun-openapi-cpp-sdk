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
	auto allViewContentList = value["ViewContentList"]["ViewContent"];
	for (auto value : allViewContentList)
	{
		ViewContent viewContentListObject;
		if(!value["TaskId"].isNull())
			viewContentListObject.taskId = value["TaskId"].asString();
		if(!value["DataId"].isNull())
			viewContentListObject.dataId = value["DataId"].asString();
		if(!value["BizType"].isNull())
			viewContentListObject.bizType = value["BizType"].asString();
		if(!value["Content"].isNull())
			viewContentListObject.content = value["Content"].asString();
		if(!value["Url"].isNull())
			viewContentListObject.url = value["Url"].asString();
		if(!value["NewUrl"].isNull())
			viewContentListObject.newUrl = value["NewUrl"].asString();
		if(!value["Thumbnail"].isNull())
			viewContentListObject.thumbnail = value["Thumbnail"].asString();
		if(!value["RequestTime"].isNull())
			viewContentListObject.requestTime = value["RequestTime"].asString();
		if(!value["ScanFinishedTime"].isNull())
			viewContentListObject.scanFinishedTime = value["ScanFinishedTime"].asString();
		if(!value["Suggestion"].isNull())
			viewContentListObject.suggestion = value["Suggestion"].asString();
		if(!value["Id"].isNull())
			viewContentListObject.id = std::stol(value["Id"].asString());
		if(!value["ScanResult"].isNull())
			viewContentListObject.scanResult = value["ScanResult"].asString();
		auto allResults = value["Results"]["Result"];
		for (auto value : allResults)
		{
			ViewContent::Result resultsObject;
			if(!value["Suggestion"].isNull())
				resultsObject.suggestion = value["Suggestion"].asString();
			if(!value["Label"].isNull())
				resultsObject.label = value["Label"].asString();
			if(!value["Scene"].isNull())
				resultsObject.scene = value["Scene"].asString();
			viewContentListObject.results.push_back(resultsObject);
		}
		auto allFrameResults = value["FrameResults"]["frameResult"];
		for (auto value : allFrameResults)
		{
			ViewContent::FrameResult frameResultsObject;
			if(!value["Url"].isNull())
				frameResultsObject.url = value["Url"].asString();
			if(!value["Offset"].isNull())
				frameResultsObject.offset = std::stoi(value["Offset"].asString());
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

