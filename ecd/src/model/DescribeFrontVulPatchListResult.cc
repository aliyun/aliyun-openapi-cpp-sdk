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

#include <alibabacloud/ecd/model/DescribeFrontVulPatchListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeFrontVulPatchListResult::DescribeFrontVulPatchListResult() :
	ServiceResult()
{}

DescribeFrontVulPatchListResult::DescribeFrontVulPatchListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFrontVulPatchListResult::~DescribeFrontVulPatchListResult()
{}

void DescribeFrontVulPatchListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFrontPatchListNode = value["FrontPatchList"]["FrontPatchItem"];
	for (auto valueFrontPatchListFrontPatchItem : allFrontPatchListNode)
	{
		FrontPatchItem frontPatchListObject;
		if(!valueFrontPatchListFrontPatchItem["DesktopId"].isNull())
			frontPatchListObject.desktopId = valueFrontPatchListFrontPatchItem["DesktopId"].asString();
		auto allPatchListNode = valueFrontPatchListFrontPatchItem["PatchList"]["PatchItem"];
		for (auto valueFrontPatchListFrontPatchItemPatchListPatchItem : allPatchListNode)
		{
			FrontPatchItem::PatchItem patchListObject;
			if(!valueFrontPatchListFrontPatchItemPatchListPatchItem["Name"].isNull())
				patchListObject.name = valueFrontPatchListFrontPatchItemPatchListPatchItem["Name"].asString();
			if(!valueFrontPatchListFrontPatchItemPatchListPatchItem["AliasName"].isNull())
				patchListObject.aliasName = valueFrontPatchListFrontPatchItemPatchListPatchItem["AliasName"].asString();
			frontPatchListObject.patchList.push_back(patchListObject);
		}
		frontPatchList_.push_back(frontPatchListObject);
	}

}

std::vector<DescribeFrontVulPatchListResult::FrontPatchItem> DescribeFrontVulPatchListResult::getFrontPatchList()const
{
	return frontPatchList_;
}

