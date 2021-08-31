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

#include <alibabacloud/edas/model/QueryMigrateRegionListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

QueryMigrateRegionListResult::QueryMigrateRegionListResult() :
	ServiceResult()
{}

QueryMigrateRegionListResult::QueryMigrateRegionListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMigrateRegionListResult::~QueryMigrateRegionListResult()
{}

void QueryMigrateRegionListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRegionEntityListNode = value["RegionEntityList"]["RegionEntity"];
	for (auto valueRegionEntityListRegionEntity : allRegionEntityListNode)
	{
		RegionEntity regionEntityListObject;
		if(!valueRegionEntityListRegionEntity["RegionNo"].isNull())
			regionEntityListObject.regionNo = valueRegionEntityListRegionEntity["RegionNo"].asString();
		if(!valueRegionEntityListRegionEntity["RegionName"].isNull())
			regionEntityListObject.regionName = valueRegionEntityListRegionEntity["RegionName"].asString();
		regionEntityList_.push_back(regionEntityListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryMigrateRegionListResult::getMessage()const
{
	return message_;
}

std::vector<QueryMigrateRegionListResult::RegionEntity> QueryMigrateRegionListResult::getRegionEntityList()const
{
	return regionEntityList_;
}

int QueryMigrateRegionListResult::getCode()const
{
	return code_;
}

