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

#include <alibabacloud/cloud-siem/model/DescribeOperatorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeOperatorsResult::DescribeOperatorsResult() :
	ServiceResult()
{}

DescribeOperatorsResult::DescribeOperatorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOperatorsResult::~DescribeOperatorsResult()
{}

void DescribeOperatorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Operator"].isNull())
			dataObject._operator = valueDataDataItem["Operator"].asString();
		if(!valueDataDataItem["OperatorName"].isNull())
			dataObject.operatorName = valueDataDataItem["OperatorName"].asString();
		if(!valueDataDataItem["OperatorDescCn"].isNull())
			dataObject.operatorDescCn = valueDataDataItem["OperatorDescCn"].asString();
		if(!valueDataDataItem["OperatorDescEn"].isNull())
			dataObject.operatorDescEn = valueDataDataItem["OperatorDescEn"].asString();
		if(!valueDataDataItem["SupportDataType"].isNull())
			dataObject.supportDataType = valueDataDataItem["SupportDataType"].asString();
		if(!valueDataDataItem["Index"].isNull())
			dataObject.index = std::stoi(valueDataDataItem["Index"].asString());
		auto allSupportTag = value["SupportTag"]["SupportTag"];
		for (auto value : allSupportTag)
			dataObject.supportTag.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeOperatorsResult::getMessage()const
{
	return message_;
}

std::vector<DescribeOperatorsResult::DataItem> DescribeOperatorsResult::getData()const
{
	return data_;
}

int DescribeOperatorsResult::getCode()const
{
	return code_;
}

bool DescribeOperatorsResult::getSuccess()const
{
	return success_;
}

