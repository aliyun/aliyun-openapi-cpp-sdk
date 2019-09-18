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

#include <alibabacloud/green/model/DescribeOssResultItemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeOssResultItemsResult::DescribeOssResultItemsResult() :
	ServiceResult()
{}

DescribeOssResultItemsResult::DescribeOssResultItemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOssResultItemsResult::~DescribeOssResultItemsResult()
{}

void DescribeOssResultItemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScanResultList = value["ScanResultList"]["ScanResult"];
	for (auto value : allScanResultList)
	{
		ScanResult scanResultListObject;
		if(!value["TaskId"].isNull())
			scanResultListObject.taskId = value["TaskId"].asString();
		if(!value["DataId"].isNull())
			scanResultListObject.dataId = value["DataId"].asString();
		if(!value["NewUrl"].isNull())
			scanResultListObject.newUrl = value["NewUrl"].asString();
		if(!value["Thumbnail"].isNull())
			scanResultListObject.thumbnail = value["Thumbnail"].asString();
		if(!value["RequestTime"].isNull())
			scanResultListObject.requestTime = value["RequestTime"].asString();
		if(!value["ScanFinishedTime"].isNull())
			scanResultListObject.scanFinishedTime = value["ScanFinishedTime"].asString();
		if(!value["CreateTime"].isNull())
			scanResultListObject.createTime = value["CreateTime"].asString();
		if(!value["Suggestion"].isNull())
			scanResultListObject.suggestion = value["Suggestion"].asString();
		if(!value["Id"].isNull())
			scanResultListObject.id = std::stol(value["Id"].asString());
		if(!value["Bucket"].isNull())
			scanResultListObject.bucket = value["Bucket"].asString();
		if(!value["Object"].isNull())
			scanResultListObject.object = value["Object"].asString();
		if(!value["Score"].isNull())
			scanResultListObject.score = value["Score"].asString();
		if(!value["HandleStatus"].isNull())
			scanResultListObject.handleStatus = std::stoi(value["HandleStatus"].asString());
		if(!value["ResourceStatus"].isNull())
			scanResultListObject.resourceStatus = std::stoi(value["ResourceStatus"].asString());
		auto allFrameResults = value["FrameResults"]["FrameResult"];
		for (auto value : allFrameResults)
		{
			ScanResult::FrameResult frameResultsObject;
			if(!value["Thumbnail"].isNull())
				frameResultsObject.thumbnail = value["Thumbnail"].asString();
			if(!value["Offset"].isNull())
				frameResultsObject.offset = std::stoi(value["Offset"].asString());
			if(!value["Url"].isNull())
				frameResultsObject.url = value["Url"].asString();
			scanResultListObject.frameResults.push_back(frameResultsObject);
		}
		scanResultList_.push_back(scanResultListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["QueryId"].isNull())
		queryId_ = value["QueryId"].asString();

}

int DescribeOssResultItemsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeOssResultItemsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeOssResultItemsResult::getCurrentPage()const
{
	return currentPage_;
}

std::string DescribeOssResultItemsResult::getQueryId()const
{
	return queryId_;
}

std::vector<DescribeOssResultItemsResult::ScanResult> DescribeOssResultItemsResult::getScanResultList()const
{
	return scanResultList_;
}

