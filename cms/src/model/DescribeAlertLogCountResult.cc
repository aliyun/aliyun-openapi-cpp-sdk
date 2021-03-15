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

#include <alibabacloud/cms/model/DescribeAlertLogCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeAlertLogCountResult::DescribeAlertLogCountResult() :
	ServiceResult()
{}

DescribeAlertLogCountResult::DescribeAlertLogCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAlertLogCountResult::~DescribeAlertLogCountResult()
{}

void DescribeAlertLogCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAlertLogCountNode = value["AlertLogCount"]["AlertLogCountItem"];
	for (auto valueAlertLogCountAlertLogCountItem : allAlertLogCountNode)
	{
		AlertLogCountItem alertLogCountObject;
		if(!valueAlertLogCountAlertLogCountItem["Count"].isNull())
			alertLogCountObject.count = std::stoi(valueAlertLogCountAlertLogCountItem["Count"].asString());
		auto allLogsNode = valueAlertLogCountAlertLogCountItem["Logs"]["LogsItem"];
		for (auto valueAlertLogCountAlertLogCountItemLogsLogsItem : allLogsNode)
		{
			AlertLogCountItem::LogsItem logsObject;
			if(!valueAlertLogCountAlertLogCountItemLogsLogsItem["Name"].isNull())
				logsObject.name = valueAlertLogCountAlertLogCountItemLogsLogsItem["Name"].asString();
			if(!valueAlertLogCountAlertLogCountItemLogsLogsItem["Value"].isNull())
				logsObject.value = valueAlertLogCountAlertLogCountItemLogsLogsItem["Value"].asString();
			alertLogCountObject.logs.push_back(logsObject);
		}
		alertLogCount_.push_back(alertLogCountObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeAlertLogCountResult::getMessage()const
{
	return message_;
}

std::vector<DescribeAlertLogCountResult::AlertLogCountItem> DescribeAlertLogCountResult::getAlertLogCount()const
{
	return alertLogCount_;
}

std::string DescribeAlertLogCountResult::getCode()const
{
	return code_;
}

bool DescribeAlertLogCountResult::getSuccess()const
{
	return success_;
}

