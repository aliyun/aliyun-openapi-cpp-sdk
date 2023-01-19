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

#include <alibabacloud/sas/model/DescribeAffectedAssetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeAffectedAssetsResult::DescribeAffectedAssetsResult() :
	ServiceResult()
{}

DescribeAffectedAssetsResult::DescribeAffectedAssetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAffectedAssetsResult::~DescribeAffectedAssetsResult()
{}

void DescribeAffectedAssetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAssetListNode = value["AssetList"]["assetEvent"];
	for (auto valueAssetListassetEvent : allAssetListNode)
	{
		AssetEvent assetListObject;
		if(!valueAssetListassetEvent["Uuid"].isNull())
			assetListObject.uuid = valueAssetListassetEvent["Uuid"].asString();
		if(!valueAssetListassetEvent["InternetIp"].isNull())
			assetListObject.internetIp = valueAssetListassetEvent["InternetIp"].asString();
		if(!valueAssetListassetEvent["RiskNum"].isNull())
			assetListObject.riskNum = std::stoi(valueAssetListassetEvent["RiskNum"].asString());
		if(!valueAssetListassetEvent["InstanceName"].isNull())
			assetListObject.instanceName = valueAssetListassetEvent["InstanceName"].asString();
		if(!valueAssetListassetEvent["InstanceId"].isNull())
			assetListObject.instanceId = valueAssetListassetEvent["InstanceId"].asString();
		if(!valueAssetListassetEvent["IntranetIp"].isNull())
			assetListObject.intranetIp = valueAssetListassetEvent["IntranetIp"].asString();
		assetList_.push_back(assetListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

DescribeAffectedAssetsResult::PageInfo DescribeAffectedAssetsResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeAffectedAssetsResult::AssetEvent> DescribeAffectedAssetsResult::getAssetList()const
{
	return assetList_;
}

