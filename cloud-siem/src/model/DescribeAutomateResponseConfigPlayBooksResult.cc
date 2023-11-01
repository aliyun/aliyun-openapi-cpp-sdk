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

#include <alibabacloud/cloud-siem/model/DescribeAutomateResponseConfigPlayBooksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeAutomateResponseConfigPlayBooksResult::DescribeAutomateResponseConfigPlayBooksResult() :
	ServiceResult()
{}

DescribeAutomateResponseConfigPlayBooksResult::DescribeAutomateResponseConfigPlayBooksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAutomateResponseConfigPlayBooksResult::~DescribeAutomateResponseConfigPlayBooksResult()
{}

void DescribeAutomateResponseConfigPlayBooksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Uuid"].isNull())
			dataObject.uuid = valueDataDataItem["Uuid"].asString();
		if(!valueDataDataItem["Description"].isNull())
			dataObject.description = valueDataDataItem["Description"].asString();
		if(!valueDataDataItem["DisplayName"].isNull())
			dataObject.displayName = valueDataDataItem["DisplayName"].asString();
		if(!valueDataDataItem["Name"].isNull())
			dataObject.name = valueDataDataItem["Name"].asString();
		if(!valueDataDataItem["ParamType"].isNull())
			dataObject.paramType = valueDataDataItem["ParamType"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeAutomateResponseConfigPlayBooksResult::getMessage()const
{
	return message_;
}

std::vector<DescribeAutomateResponseConfigPlayBooksResult::DataItem> DescribeAutomateResponseConfigPlayBooksResult::getData()const
{
	return data_;
}

int DescribeAutomateResponseConfigPlayBooksResult::getCode()const
{
	return code_;
}

bool DescribeAutomateResponseConfigPlayBooksResult::getSuccess()const
{
	return success_;
}

