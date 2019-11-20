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

#include <alibabacloud/sddp/model/DescribeOriginalLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeOriginalLogsResult::DescribeOriginalLogsResult() :
	ServiceResult()
{}

DescribeOriginalLogsResult::DescribeOriginalLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOriginalLogsResult::~DescribeOriginalLogsResult()
{}

void DescribeOriginalLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Log"];
	for (auto valueItemsLog : allItemsNode)
	{
		Log itemsObject;
		auto allLogContentsNode = allItemsNode["LogContents"]["logContent"];
		for (auto allItemsNodeLogContentslogContent : allLogContentsNode)
		{
			Log::LogContent logContentsObject;
			if(!allItemsNodeLogContentslogContent["Key"].isNull())
				logContentsObject.key = allItemsNodeLogContentslogContent["Key"].asString();
			if(!allItemsNodeLogContentslogContent["Value"].isNull())
				logContentsObject.value = allItemsNodeLogContentslogContent["Value"].asString();
			itemsObject.logContents.push_back(logContentsObject);
		}
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeOriginalLogsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeOriginalLogsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeOriginalLogsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeOriginalLogsResult::Log> DescribeOriginalLogsResult::getItems()const
{
	return items_;
}

