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

#include <alibabacloud/sas/model/ListAssetRefreshTaskConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListAssetRefreshTaskConfigResult::ListAssetRefreshTaskConfigResult() :
	ServiceResult()
{}

ListAssetRefreshTaskConfigResult::ListAssetRefreshTaskConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAssetRefreshTaskConfigResult::~ListAssetRefreshTaskConfigResult()
{}

void ListAssetRefreshTaskConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAssetRefreshConfigNode = value["AssetRefreshConfig"]["AssetRefreshConfigItem"];
	for (auto valueAssetRefreshConfigAssetRefreshConfigItem : allAssetRefreshConfigNode)
	{
		AssetRefreshConfigItem assetRefreshConfigObject;
		if(!valueAssetRefreshConfigAssetRefreshConfigItem["Vendor"].isNull())
			assetRefreshConfigObject.vendor = std::stoi(valueAssetRefreshConfigAssetRefreshConfigItem["Vendor"].asString());
		if(!valueAssetRefreshConfigAssetRefreshConfigItem["SchedulePeriod"].isNull())
			assetRefreshConfigObject.schedulePeriod = std::stoi(valueAssetRefreshConfigAssetRefreshConfigItem["SchedulePeriod"].asString());
		if(!valueAssetRefreshConfigAssetRefreshConfigItem["Status"].isNull())
			assetRefreshConfigObject.status = std::stoi(valueAssetRefreshConfigAssetRefreshConfigItem["Status"].asString());
		assetRefreshConfig_.push_back(assetRefreshConfigObject);
	}

}

std::vector<ListAssetRefreshTaskConfigResult::AssetRefreshConfigItem> ListAssetRefreshTaskConfigResult::getAssetRefreshConfig()const
{
	return assetRefreshConfig_;
}

