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

#include <alibabacloud/green/model/DescribeWebsiteScanResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeWebsiteScanResultResult::DescribeWebsiteScanResultResult() :
	ServiceResult()
{}

DescribeWebsiteScanResultResult::DescribeWebsiteScanResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebsiteScanResultResult::~DescribeWebsiteScanResultResult()
{}

void DescribeWebsiteScanResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWebsiteScanResultListNode = value["WebsiteScanResultList"]["WebsiteScanResult"];
	for (auto valueWebsiteScanResultListWebsiteScanResult : allWebsiteScanResultListNode)
	{
		WebsiteScanResult websiteScanResultListObject;
		if(!valueWebsiteScanResultListWebsiteScanResult["InstanceId"].isNull())
			websiteScanResultListObject.instanceId = valueWebsiteScanResultListWebsiteScanResult["InstanceId"].asString();
		if(!valueWebsiteScanResultListWebsiteScanResult["ScanTime"].isNull())
			websiteScanResultListObject.scanTime = valueWebsiteScanResultListWebsiteScanResult["ScanTime"].asString();
		if(!valueWebsiteScanResultListWebsiteScanResult["Domain"].isNull())
			websiteScanResultListObject.domain = valueWebsiteScanResultListWebsiteScanResult["Domain"].asString();
		if(!valueWebsiteScanResultListWebsiteScanResult["SourceRiskCount"].isNull())
			websiteScanResultListObject.sourceRiskCount = std::stoi(valueWebsiteScanResultListWebsiteScanResult["SourceRiskCount"].asString());
		if(!valueWebsiteScanResultListWebsiteScanResult["ImageRiskCount"].isNull())
			websiteScanResultListObject.imageRiskCount = std::stoi(valueWebsiteScanResultListWebsiteScanResult["ImageRiskCount"].asString());
		if(!valueWebsiteScanResultListWebsiteScanResult["HandleStatus"].isNull())
			websiteScanResultListObject.handleStatus = std::stoi(valueWebsiteScanResultListWebsiteScanResult["HandleStatus"].asString());
		if(!valueWebsiteScanResultListWebsiteScanResult["Id"].isNull())
			websiteScanResultListObject.id = std::stoi(valueWebsiteScanResultListWebsiteScanResult["Id"].asString());
		if(!valueWebsiteScanResultListWebsiteScanResult["TextRiskCount"].isNull())
			websiteScanResultListObject.textRiskCount = std::stoi(valueWebsiteScanResultListWebsiteScanResult["TextRiskCount"].asString());
		if(!valueWebsiteScanResultListWebsiteScanResult["TaskId"].isNull())
			websiteScanResultListObject.taskId = valueWebsiteScanResultListWebsiteScanResult["TaskId"].asString();
		if(!valueWebsiteScanResultListWebsiteScanResult["Url"].isNull())
			websiteScanResultListObject.url = valueWebsiteScanResultListWebsiteScanResult["Url"].asString();
		auto allLabels = value["Labels"]["StringItem"];
		for (auto value : allLabels)
			websiteScanResultListObject.labels.push_back(value.asString());
		websiteScanResultList_.push_back(websiteScanResultListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeWebsiteScanResultResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeWebsiteScanResultResult::getPageSize()const
{
	return pageSize_;
}

int DescribeWebsiteScanResultResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeWebsiteScanResultResult::WebsiteScanResult> DescribeWebsiteScanResultResult::getWebsiteScanResultList()const
{
	return websiteScanResultList_;
}

