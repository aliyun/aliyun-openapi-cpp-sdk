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

#include <alibabacloud/aegis/model/DescribeSasAssetStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeSasAssetStatisticsResult::DescribeSasAssetStatisticsResult() :
	ServiceResult()
{}

DescribeSasAssetStatisticsResult::DescribeSasAssetStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSasAssetStatisticsResult::~DescribeSasAssetStatisticsResult()
{}

void DescribeSasAssetStatisticsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allAssetList = value["AssetList"]["Asset"];
	for (auto value : allAssetList)
	{
		Asset assetListObject;
		if(!value["HealthCheckCount"].isNull())
			assetListObject.healthCheckCount = std::stoi(value["HealthCheckCount"].asString());
		if(!value["VulCount"].isNull())
			assetListObject.vulCount = std::stoi(value["VulCount"].asString());
		if(!value["SafeEventCount"].isNull())
			assetListObject.safeEventCount = std::stoi(value["SafeEventCount"].asString());
		if(!value["Uuid"].isNull())
			assetListObject.uuid = value["Uuid"].asString();
		assetList_.push_back(assetListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeSasAssetStatisticsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSasAssetStatisticsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSasAssetStatisticsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeSasAssetStatisticsResult::Asset> DescribeSasAssetStatisticsResult::getAssetList()const
{
	return assetList_;
}

