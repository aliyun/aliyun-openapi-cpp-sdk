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

#include <alibabacloud/jarvis/model/DescribeRiskTrendResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Jarvis;
using namespace AlibabaCloud::Jarvis::Model;

DescribeRiskTrendResult::DescribeRiskTrendResult() :
	ServiceResult()
{}

DescribeRiskTrendResult::DescribeRiskTrendResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRiskTrendResult::~DescribeRiskTrendResult()
{}

void DescribeRiskTrendResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allDataList = value["DataList"]["DataItem"];
	for (auto value : allDataList)
	{
		DataItem dataListObject;
		if(!value["UpdateTime"].isNull())
			dataListObject.updateTime = value["UpdateTime"].asString();
		if(!value["NewRiskCount"].isNull())
			dataListObject.newRiskCount = std::stoi(value["NewRiskCount"].asString());
		if(!value["TotalRiskCount"].isNull())
			dataListObject.totalRiskCount = std::stoi(value["TotalRiskCount"].asString());
		dataList_.push_back(dataListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["Module"].isNull())
		module_ = value["Module"].asString();

}

std::vector<DescribeRiskTrendResult::DataItem> DescribeRiskTrendResult::getDataList()const
{
	return dataList_;
}

std::string DescribeRiskTrendResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeRiskTrendResult::getModule()const
{
	return module_;
}

