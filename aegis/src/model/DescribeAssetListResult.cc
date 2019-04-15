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
	auto allAssetList = value["AssetList"]["Asset"];
	for (auto value : allAssetList)
	{
		Asset assetListObject;
		if(!value["InternetIp"].isNull())
			assetListObject.internetIp = value["InternetIp"].asString();
		if(!value["IntranetIp"].isNull())
			assetListObject.intranetIp = value["IntranetIp"].asString();
		if(!value["InstanceName"].isNull())
			assetListObject.instanceName = value["InstanceName"].asString();
		if(!value["Ip"].isNull())
			assetListObject.ip = value["Ip"].asString();
		if(!value["Uuid"].isNull())
			assetListObject.uuid = value["Uuid"].asString();
		if(!value["AssetType"].isNull())
			assetListObject.assetType = value["AssetType"].asString();
		if(!value["Os"].isNull())
			assetListObject.os = value["Os"].asString();
		if(!value["ClientStatus"].isNull())
			assetListObject.clientStatus = value["ClientStatus"].asString();
		if(!value["Region"].isNull())
			assetListObject.region = value["Region"].asString();
		if(!value["RegionName"].isNull())
			assetListObject.regionName = value["RegionName"].asString();
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

