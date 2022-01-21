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

#include <alibabacloud/cms/model/DescribeAlertLogHistogramResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeAlertLogHistogramResult::DescribeAlertLogHistogramResult() :
	ServiceResult()
{}

DescribeAlertLogHistogramResult::DescribeAlertLogHistogramResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAlertLogHistogramResult::~DescribeAlertLogHistogramResult()
{}

void DescribeAlertLogHistogramResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAlertLogHistogramListNode = value["AlertLogHistogramList"]["AlertLogHistogramListItem"];
	for (auto valueAlertLogHistogramListAlertLogHistogramListItem : allAlertLogHistogramListNode)
	{
		AlertLogHistogramListItem alertLogHistogramListObject;
		if(!valueAlertLogHistogramListAlertLogHistogramListItem["From"].isNull())
			alertLogHistogramListObject.from = std::stol(valueAlertLogHistogramListAlertLogHistogramListItem["From"].asString());
		if(!valueAlertLogHistogramListAlertLogHistogramListItem["To"].isNull())
			alertLogHistogramListObject.to = std::stol(valueAlertLogHistogramListAlertLogHistogramListItem["To"].asString());
		if(!valueAlertLogHistogramListAlertLogHistogramListItem["Count"].isNull())
			alertLogHistogramListObject.count = std::stoi(valueAlertLogHistogramListAlertLogHistogramListItem["Count"].asString());
		alertLogHistogramList_.push_back(alertLogHistogramListObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeAlertLogHistogramResult::getMessage()const
{
	return message_;
}

std::vector<DescribeAlertLogHistogramResult::AlertLogHistogramListItem> DescribeAlertLogHistogramResult::getAlertLogHistogramList()const
{
	return alertLogHistogramList_;
}

std::string DescribeAlertLogHistogramResult::getCode()const
{
	return code_;
}

bool DescribeAlertLogHistogramResult::getSuccess()const
{
	return success_;
}

