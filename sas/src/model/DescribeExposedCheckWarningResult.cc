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

#include <alibabacloud/sas/model/DescribeExposedCheckWarningResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeExposedCheckWarningResult::DescribeExposedCheckWarningResult() :
	ServiceResult()
{}

DescribeExposedCheckWarningResult::DescribeExposedCheckWarningResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeExposedCheckWarningResult::~DescribeExposedCheckWarningResult()
{}

void DescribeExposedCheckWarningResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWarningListNode = value["WarningList"]["CheckWarning"];
	for (auto valueWarningListCheckWarning : allWarningListNode)
	{
		CheckWarning warningListObject;
		if(!valueWarningListCheckWarning["SubTypeAlias"].isNull())
			warningListObject.subTypeAlias = valueWarningListCheckWarning["SubTypeAlias"].asString();
		if(!valueWarningListCheckWarning["Uuid"].isNull())
			warningListObject.uuid = valueWarningListCheckWarning["Uuid"].asString();
		if(!valueWarningListCheckWarning["TypeAlias"].isNull())
			warningListObject.typeAlias = valueWarningListCheckWarning["TypeAlias"].asString();
		if(!valueWarningListCheckWarning["RiskName"].isNull())
			warningListObject.riskName = valueWarningListCheckWarning["RiskName"].asString();
		if(!valueWarningListCheckWarning["RiskId"].isNull())
			warningListObject.riskId = std::stol(valueWarningListCheckWarning["RiskId"].asString());
		warningList_.push_back(warningListObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::vector<DescribeExposedCheckWarningResult::CheckWarning> DescribeExposedCheckWarningResult::getWarningList()const
{
	return warningList_;
}

int DescribeExposedCheckWarningResult::getCount()const
{
	return count_;
}

