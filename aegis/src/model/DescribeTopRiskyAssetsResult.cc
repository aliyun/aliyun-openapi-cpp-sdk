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

#include <alibabacloud/aegis/model/DescribeTopRiskyAssetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeTopRiskyAssetsResult::DescribeTopRiskyAssetsResult() :
	ServiceResult()
{}

DescribeTopRiskyAssetsResult::DescribeTopRiskyAssetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTopRiskyAssetsResult::~DescribeTopRiskyAssetsResult()
{}

void DescribeTopRiskyAssetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTopRiskyAssetsNode = value["TopRiskyAssets"]["TopRiskyAsset"];
	for (auto valueTopRiskyAssetsTopRiskyAsset : allTopRiskyAssetsNode)
	{
		TopRiskyAsset topRiskyAssetsObject;
		if(!valueTopRiskyAssetsTopRiskyAsset["Type"].isNull())
			topRiskyAssetsObject.type = valueTopRiskyAssetsTopRiskyAsset["Type"].asString();
		auto allAssetInfosNode = allTopRiskyAssetsNode["AssetInfos"]["AssetInfo"];
		for (auto allTopRiskyAssetsNodeAssetInfosAssetInfo : allAssetInfosNode)
		{
			TopRiskyAsset::AssetInfo assetInfosObject;
			if(!allTopRiskyAssetsNodeAssetInfosAssetInfo["Uuid"].isNull())
				assetInfosObject.uuid = allTopRiskyAssetsNodeAssetInfosAssetInfo["Uuid"].asString();
			if(!allTopRiskyAssetsNodeAssetInfosAssetInfo["Ip"].isNull())
				assetInfosObject.ip = allTopRiskyAssetsNodeAssetInfosAssetInfo["Ip"].asString();
			if(!allTopRiskyAssetsNodeAssetInfosAssetInfo["InstanceName"].isNull())
				assetInfosObject.instanceName = allTopRiskyAssetsNodeAssetInfosAssetInfo["InstanceName"].asString();
			if(!allTopRiskyAssetsNodeAssetInfosAssetInfo["Count"].isNull())
				assetInfosObject.count = allTopRiskyAssetsNodeAssetInfosAssetInfo["Count"].asString();
			topRiskyAssetsObject.assetInfos.push_back(assetInfosObject);
		}
		topRiskyAssets_.push_back(topRiskyAssetsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeTopRiskyAssetsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeTopRiskyAssetsResult::TopRiskyAsset> DescribeTopRiskyAssetsResult::getTopRiskyAssets()const
{
	return topRiskyAssets_;
}

