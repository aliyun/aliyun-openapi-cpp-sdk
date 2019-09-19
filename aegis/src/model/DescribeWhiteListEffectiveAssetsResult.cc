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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAssetsNode = value["Assets"]["Asset"];
	for (auto valueAssetsAsset : allAssetsNode)
	{
		Asset assetsObject;
		if(!valueAssetsAsset["Uuid"].isNull())
			assetsObject.uuid = valueAssetsAsset["Uuid"].asString();
		if(!valueAssetsAsset["MachineName"].isNull())
			assetsObject.machineName = valueAssetsAsset["MachineName"].asString();
		if(!valueAssetsAsset["InternetIp"].isNull())
			assetsObject.internetIp = valueAssetsAsset["InternetIp"].asString();
		if(!valueAssetsAsset["IntranetIp"].isNull())
			assetsObject.intranetIp = valueAssetsAsset["IntranetIp"].asString();
		if(!valueAssetsAsset["StrategyId"].isNull())
			assetsObject.strategyId = std::stol(valueAssetsAsset["StrategyId"].asString());
		if(!valueAssetsAsset["StrategyName"].isNull())
			assetsObject.strategyName = valueAssetsAsset["StrategyName"].asString();
		if(!valueAssetsAsset["SuspiciousEventCount"].isNull())
			assetsObject.suspiciousEventCount = std::stoi(valueAssetsAsset["SuspiciousEventCount"].asString());
		if(!valueAssetsAsset["ProcessMethod"].isNull())
			assetsObject.processMethod = std::stoi(valueAssetsAsset["ProcessMethod"].asString());
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

