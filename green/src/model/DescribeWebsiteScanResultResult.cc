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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allWebsiteScanResultList = value["WebsiteScanResultList"]["WebsiteScanResult"];
	for (auto value : allWebsiteScanResultList)
	{
		WebsiteScanResult websiteScanResultListObject;
		if(!value["InstanceId"].isNull())
			websiteScanResultListObject.instanceId = value["InstanceId"].asString();
		if(!value["ScanTime"].isNull())
			websiteScanResultListObject.scanTime = value["ScanTime"].asString();
		if(!value["Domain"].isNull())
			websiteScanResultListObject.domain = value["Domain"].asString();
		if(!value["SourceRiskCount"].isNull())
			websiteScanResultListObject.sourceRiskCount = std::stoi(value["SourceRiskCount"].asString());
		if(!value["ImageRiskCount"].isNull())
			websiteScanResultListObject.imageRiskCount = std::stoi(value["ImageRiskCount"].asString());
		if(!value["HandleStatus"].isNull())
			websiteScanResultListObject.handleStatus = std::stoi(value["HandleStatus"].asString());
		if(!value["Id"].isNull())
			websiteScanResultListObject.id = std::stoi(value["Id"].asString());
		if(!value["TextRiskCount"].isNull())
			websiteScanResultListObject.textRiskCount = std::stoi(value["TextRiskCount"].asString());
		if(!value["TaskId"].isNull())
			websiteScanResultListObject.taskId = value["TaskId"].asString();
		if(!value["Url"].isNull())
			websiteScanResultListObject.url = value["Url"].asString();
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

