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

#include <alibabacloud/cloud-siem/model/DescribeAutomateResponseConfigFeatureResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeAutomateResponseConfigFeatureResult::DescribeAutomateResponseConfigFeatureResult() :
	ServiceResult()
{}

DescribeAutomateResponseConfigFeatureResult::DescribeAutomateResponseConfigFeatureResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAutomateResponseConfigFeatureResult::~DescribeAutomateResponseConfigFeatureResult()
{}

void DescribeAutomateResponseConfigFeatureResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Feature"].isNull())
			dataObject.feature = valueDataDataItem["Feature"].asString();
		if(!valueDataDataItem["DataType"].isNull())
			dataObject.dataType = valueDataDataItem["DataType"].asString();
		auto allSupportOperatorsNode = valueDataDataItem["SupportOperators"]["SupportOperator"];
		for (auto valueDataDataItemSupportOperatorsSupportOperator : allSupportOperatorsNode)
		{
			DataItem::SupportOperator supportOperatorsObject;
			if(!valueDataDataItemSupportOperatorsSupportOperator["HasRightValue"].isNull())
				supportOperatorsObject.hasRightValue = valueDataDataItemSupportOperatorsSupportOperator["HasRightValue"].asString() == "true";
			if(!valueDataDataItemSupportOperatorsSupportOperator["Operator"].isNull())
				supportOperatorsObject._operator = valueDataDataItemSupportOperatorsSupportOperator["Operator"].asString();
			if(!valueDataDataItemSupportOperatorsSupportOperator["OperatorName"].isNull())
				supportOperatorsObject.operatorName = valueDataDataItemSupportOperatorsSupportOperator["OperatorName"].asString();
			if(!valueDataDataItemSupportOperatorsSupportOperator["OperatorDescCn"].isNull())
				supportOperatorsObject.operatorDescCn = valueDataDataItemSupportOperatorsSupportOperator["OperatorDescCn"].asString();
			if(!valueDataDataItemSupportOperatorsSupportOperator["OperatorDescEn"].isNull())
				supportOperatorsObject.operatorDescEn = valueDataDataItemSupportOperatorsSupportOperator["OperatorDescEn"].asString();
			if(!valueDataDataItemSupportOperatorsSupportOperator["SupportDataType"].isNull())
				supportOperatorsObject.supportDataType = valueDataDataItemSupportOperatorsSupportOperator["SupportDataType"].asString();
			if(!valueDataDataItemSupportOperatorsSupportOperator["Index"].isNull())
				supportOperatorsObject.index = std::stoi(valueDataDataItemSupportOperatorsSupportOperator["Index"].asString());
			auto allSupportTag = value["SupportTag"]["SupportTag"];
			for (auto value : allSupportTag)
				supportOperatorsObject.supportTag.push_back(value.asString());
			dataObject.supportOperators.push_back(supportOperatorsObject);
		}
		auto allRightValueEnumsNode = valueDataDataItem["RightValueEnums"]["RightValueEnum"];
		for (auto valueDataDataItemRightValueEnumsRightValueEnum : allRightValueEnumsNode)
		{
			DataItem::RightValueEnum rightValueEnumsObject;
			if(!valueDataDataItemRightValueEnumsRightValueEnum["Value"].isNull())
				rightValueEnumsObject.value = valueDataDataItemRightValueEnumsRightValueEnum["Value"].asString();
			if(!valueDataDataItemRightValueEnumsRightValueEnum["ValueMds"].isNull())
				rightValueEnumsObject.valueMds = valueDataDataItemRightValueEnumsRightValueEnum["ValueMds"].asString();
			dataObject.rightValueEnums.push_back(rightValueEnumsObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeAutomateResponseConfigFeatureResult::getMessage()const
{
	return message_;
}

std::vector<DescribeAutomateResponseConfigFeatureResult::DataItem> DescribeAutomateResponseConfigFeatureResult::getData()const
{
	return data_;
}

int DescribeAutomateResponseConfigFeatureResult::getCode()const
{
	return code_;
}

bool DescribeAutomateResponseConfigFeatureResult::getSuccess()const
{
	return success_;
}

