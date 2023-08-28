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

#include <alibabacloud/paifeaturestore/model/GetProjectFeatureEntityHotIdsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

GetProjectFeatureEntityHotIdsResult::GetProjectFeatureEntityHotIdsResult() :
	ServiceResult()
{}

GetProjectFeatureEntityHotIdsResult::GetProjectFeatureEntityHotIdsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetProjectFeatureEntityHotIdsResult::~GetProjectFeatureEntityHotIdsResult()
{}

void GetProjectFeatureEntityHotIdsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HotIds"].isNull())
		hotIds_ = value["HotIds"].asString();
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["NextSeqNumber"].isNull())
		nextSeqNumber_ = value["NextSeqNumber"].asString();

}

std::string GetProjectFeatureEntityHotIdsResult::getNextSeqNumber()const
{
	return nextSeqNumber_;
}

std::string GetProjectFeatureEntityHotIdsResult::getHotIds()const
{
	return hotIds_;
}

int GetProjectFeatureEntityHotIdsResult::getCount()const
{
	return count_;
}

