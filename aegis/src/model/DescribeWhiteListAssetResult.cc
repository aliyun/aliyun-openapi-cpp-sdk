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

#include <alibabacloud/aegis/model/DescribeWhiteListAssetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeWhiteListAssetResult::DescribeWhiteListAssetResult() :
	ServiceResult()
{}

DescribeWhiteListAssetResult::DescribeWhiteListAssetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWhiteListAssetResult::~DescribeWhiteListAssetResult()
{}

void DescribeWhiteListAssetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAssetsNode = value["Assets"]["Asset"];
	for (auto valueAssetsAsset : allAssetsNode)
	{
		Asset assetsObject;
		if(!valueAssetsAsset["Id"].isNull())
			assetsObject.id = std::stol(valueAssetsAsset["Id"].asString());
		if(!valueAssetsAsset["Uuid"].isNull())
			assetsObject.uuid = valueAssetsAsset["Uuid"].asString();
		if(!valueAssetsAsset["GroupId"].isNull())
			assetsObject.groupId = std::stol(valueAssetsAsset["GroupId"].asString());
		if(!valueAssetsAsset["MachineName"].isNull())
			assetsObject.machineName = valueAssetsAsset["MachineName"].asString();
		if(!valueAssetsAsset["MachineIp"].isNull())
			assetsObject.machineIp = valueAssetsAsset["MachineIp"].asString();
		if(!valueAssetsAsset["Selected"].isNull())
			assetsObject.selected = std::stoi(valueAssetsAsset["Selected"].asString());
		if(!valueAssetsAsset["AllowSelected"].isNull())
			assetsObject.allowSelected = std::stoi(valueAssetsAsset["AllowSelected"].asString());
		assets_.push_back(assetsObject);
	}

}

std::vector<DescribeWhiteListAssetResult::Asset> DescribeWhiteListAssetResult::getAssets()const
{
	return assets_;
}

