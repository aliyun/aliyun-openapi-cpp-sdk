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

#include <alibabacloud/ga/model/ListAvailableBusiRegionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListAvailableBusiRegionsResult::ListAvailableBusiRegionsResult() :
	ServiceResult()
{}

ListAvailableBusiRegionsResult::ListAvailableBusiRegionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAvailableBusiRegionsResult::~ListAvailableBusiRegionsResult()
{}

void ListAvailableBusiRegionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRegionsNode = value["Regions"]["RegionsItem"];
	for (auto valueRegionsRegionsItem : allRegionsNode)
	{
		RegionsItem regionsObject;
		if(!valueRegionsRegionsItem["LocalName"].isNull())
			regionsObject.localName = valueRegionsRegionsItem["LocalName"].asString();
		if(!valueRegionsRegionsItem["RegionId"].isNull())
			regionsObject.regionId = valueRegionsRegionsItem["RegionId"].asString();
		if(!valueRegionsRegionsItem["Pop"].isNull())
			regionsObject.pop = valueRegionsRegionsItem["Pop"].asString() == "true";
		regions_.push_back(regionsObject);
	}

}

std::vector<ListAvailableBusiRegionsResult::RegionsItem> ListAvailableBusiRegionsResult::getRegions()const
{
	return regions_;
}

