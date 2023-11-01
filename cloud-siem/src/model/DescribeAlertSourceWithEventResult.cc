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

#include <alibabacloud/cloud-siem/model/DescribeAlertSourceWithEventResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeAlertSourceWithEventResult::DescribeAlertSourceWithEventResult() :
	ServiceResult()
{}

DescribeAlertSourceWithEventResult::DescribeAlertSourceWithEventResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAlertSourceWithEventResult::~DescribeAlertSourceWithEventResult()
{}

void DescribeAlertSourceWithEventResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["SourceName"].isNull())
			dataObject.sourceName = valueDataDataItem["SourceName"].asString();
		if(!valueDataDataItem["Source"].isNull())
			dataObject.source = valueDataDataItem["Source"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeAlertSourceWithEventResult::getMessage()const
{
	return message_;
}

std::vector<DescribeAlertSourceWithEventResult::DataItem> DescribeAlertSourceWithEventResult::getData()const
{
	return data_;
}

int DescribeAlertSourceWithEventResult::getCode()const
{
	return code_;
}

bool DescribeAlertSourceWithEventResult::getSuccess()const
{
	return success_;
}

