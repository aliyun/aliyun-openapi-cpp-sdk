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

#include <alibabacloud/aegis/model/DescribeWhiteListEffectiveAssetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeWhiteListEffectiveAssetsResult::DescribeWhiteListEffectiveAssetsResult() :
	ServiceResult()
{}

DescribeWhiteListEffectiveAssetsResult::DescribeWhiteListEffectiveAssetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWhiteListEffectiveAssetsResult::~DescribeWhiteListEffectiveAssetsResult()
{}

void DescribeWhiteListEffectiveAssetsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allAssets = value["Assets"]["Asset"];
	for (auto value : allAssets)
	{
		Asset assetsObject;
		if(!value["Uuid"].isNull())
			assetsObject.uuid = value["Uuid"].asString();
		if(!value["MachineName"].isNull())
			assetsObject.machineName = value["MachineName"].asString();
		if(!value["InternetIp"].isNull())
			assetsObject.internetIp = value["InternetIp"].asString();
		if(!value["IntranetIp"].isNull())
			assetsObject.intranetIp = value["IntranetIp"].asString();
		if(!value["StrategyId"].isNull())
			assetsObject.strategyId = std::stol(value["StrategyId"].asString());
		if(!value["StrategyName"].isNull())
			assetsObject.strategyName = value["StrategyName"].asString();
		if(!value["SuspiciousEventCount"].isNull())
			assetsObject.suspiciousEventCount = std::stoi(value["SuspiciousEventCount"].asString());
		if(!value["ProcessMethod"].isNull())
			assetsObject.processMethod = std::stoi(value["ProcessMethod"].asString());
		assets_.push_back(assetsObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());

}

int DescribeWhiteListEffectiveAssetsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeWhiteListEffectiveAssetsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeWhiteListEffectiveAssetsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeWhiteListEffectiveAssetsResult::Asset> DescribeWhiteListEffectiveAssetsResult::getAssets()const
{
	return assets_;
}

int DescribeWhiteListEffectiveAssetsResult::getCount()const
{
	return count_;
}

