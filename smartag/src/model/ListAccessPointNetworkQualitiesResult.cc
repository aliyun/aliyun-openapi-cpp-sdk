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

#include <alibabacloud/smartag/model/ListAccessPointNetworkQualitiesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

ListAccessPointNetworkQualitiesResult::ListAccessPointNetworkQualitiesResult() :
	ServiceResult()
{}

ListAccessPointNetworkQualitiesResult::ListAccessPointNetworkQualitiesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAccessPointNetworkQualitiesResult::~ListAccessPointNetworkQualitiesResult()
{}

void ListAccessPointNetworkQualitiesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccessPointNetworkQualitiesNode = value["AccessPointNetworkQualities"]["AccessPointNetworkQuality"];
	for (auto valueAccessPointNetworkQualitiesAccessPointNetworkQuality : allAccessPointNetworkQualitiesNode)
	{
		AccessPointNetworkQuality accessPointNetworkQualitiesObject;
		if(!valueAccessPointNetworkQualitiesAccessPointNetworkQuality["Loss"].isNull())
			accessPointNetworkQualitiesObject.loss = valueAccessPointNetworkQualitiesAccessPointNetworkQuality["Loss"].asString();
		if(!valueAccessPointNetworkQualitiesAccessPointNetworkQuality["Rtt"].isNull())
			accessPointNetworkQualitiesObject.rtt = valueAccessPointNetworkQualitiesAccessPointNetworkQuality["Rtt"].asString();
		if(!valueAccessPointNetworkQualitiesAccessPointNetworkQuality["Id"].isNull())
			accessPointNetworkQualitiesObject.id = std::stoi(valueAccessPointNetworkQualitiesAccessPointNetworkQuality["Id"].asString());
		accessPointNetworkQualities_.push_back(accessPointNetworkQualitiesObject);
	}

}

std::vector<ListAccessPointNetworkQualitiesResult::AccessPointNetworkQuality> ListAccessPointNetworkQualitiesResult::getAccessPointNetworkQualities()const
{
	return accessPointNetworkQualities_;
}

