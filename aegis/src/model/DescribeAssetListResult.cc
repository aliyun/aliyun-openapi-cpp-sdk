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

#include <alibabacloud/aegis/model/DescribeAssetListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeAssetListResult::DescribeAssetListResult() :
	ServiceResult()
{}

DescribeAssetListResult::DescribeAssetListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAssetListResult::~DescribeAssetListResult()
{}

void DescribeAssetListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAssetListNode = value["AssetList"]["Asset"];
	for (auto valueAssetListAsset : allAssetListNode)
	{
		Asset assetListObject;
		if(!valueAssetListAsset["InternetIp"].isNull())
			assetListObject.internetIp = valueAssetListAsset["InternetIp"].asString();
		if(!valueAssetListAsset["IntranetIp"].isNull())
			assetListObject.intranetIp = valueAssetListAsset["IntranetIp"].asString();
		if(!valueAssetListAsset["InstanceName"].isNull())
			assetListObject.instanceName = valueAssetListAsset["InstanceName"].asString();
		if(!valueAssetListAsset["Ip"].isNull())
			assetListObject.ip = valueAssetListAsset["Ip"].asString();
		if(!valueAssetListAsset["Uuid"].isNull())
			assetListObject.uuid = valueAssetListAsset["Uuid"].asString();
		if(!valueAssetListAsset["AssetType"].isNull())
			assetListObject.assetType = valueAssetListAsset["AssetType"].asString();
		if(!valueAssetListAsset["Os"].isNull())
			assetListObject.os = valueAssetListAsset["Os"].asString();
		if(!valueAssetListAsset["ClientStatus"].isNull())
			assetListObject.clientStatus = valueAssetListAsset["ClientStatus"].asString();
		if(!valueAssetListAsset["Region"].isNull())
			assetListObject.region = valueAssetListAsset["Region"].asString();
		if(!valueAssetListAsset["RegionName"].isNull())
			assetListObject.regionName = valueAssetListAsset["RegionName"].asString();
		if(!valueAssetListAsset["Status"].isNull())
			assetListObject.status = valueAssetListAsset["Status"].asString();
		assetList_.push_back(assetListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeAssetListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAssetListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAssetListResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeAssetListResult::Asset> DescribeAssetListResult::getAssetList()const
{
	return assetList_;
}

