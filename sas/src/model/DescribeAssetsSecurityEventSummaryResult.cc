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

#include <alibabacloud/sas/model/DescribeAssetsSecurityEventSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeAssetsSecurityEventSummaryResult::DescribeAssetsSecurityEventSummaryResult() :
	ServiceResult()
{}

DescribeAssetsSecurityEventSummaryResult::DescribeAssetsSecurityEventSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAssetsSecurityEventSummaryResult::~DescribeAssetsSecurityEventSummaryResult()
{}

void DescribeAssetsSecurityEventSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAssetsNode = value["Assets"]["RiskAssetCount"];
	for (auto valueAssetsRiskAssetCount : allAssetsNode)
	{
		RiskAssetCount assetsObject;
		if(!valueAssetsRiskAssetCount["RiskCount"].isNull())
			assetsObject.riskCount = std::stol(valueAssetsRiskAssetCount["RiskCount"].asString());
		if(!valueAssetsRiskAssetCount["TotalCount"].isNull())
			assetsObject.totalCount = std::stol(valueAssetsRiskAssetCount["TotalCount"].asString());
		if(!valueAssetsRiskAssetCount["AssetType"].isNull())
			assetsObject.assetType = valueAssetsRiskAssetCount["AssetType"].asString();
		assets_.push_back(assetsObject);
	}

}

std::vector<DescribeAssetsSecurityEventSummaryResult::RiskAssetCount> DescribeAssetsSecurityEventSummaryResult::getAssets()const
{
	return assets_;
}

