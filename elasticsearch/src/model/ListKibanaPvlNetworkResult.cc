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

#include <alibabacloud/elasticsearch/model/ListKibanaPvlNetworkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListKibanaPvlNetworkResult::ListKibanaPvlNetworkResult() :
	ServiceResult()
{}

ListKibanaPvlNetworkResult::ListKibanaPvlNetworkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListKibanaPvlNetworkResult::~ListKibanaPvlNetworkResult()
{}

void ListKibanaPvlNetworkResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["endpointName"].isNull())
			resultObject.endpointName = valueResultResultItem["endpointName"].asString();
		if(!valueResultResultItem["vpcId"].isNull())
			resultObject.vpcId = valueResultResultItem["vpcId"].asString();
		if(!valueResultResultItem["endpointId"].isNull())
			resultObject.endpointId = valueResultResultItem["endpointId"].asString();
		if(!valueResultResultItem["endpointStatus"].isNull())
			resultObject.endpointStatus = valueResultResultItem["endpointStatus"].asString();
		if(!valueResultResultItem["createTime"].isNull())
			resultObject.createTime = valueResultResultItem["createTime"].asString();
		if(!valueResultResultItem["pvlId"].isNull())
			resultObject.pvlId = valueResultResultItem["pvlId"].asString();
		auto allvSwitchIdsZoneNode = valueResultResultItem["vSwitchIdsZone"]["vSwitchIdsZoneItem"];
		for (auto valueResultResultItemvSwitchIdsZonevSwitchIdsZoneItem : allvSwitchIdsZoneNode)
		{
			ResultItem::VSwitchIdsZoneItem vSwitchIdsZoneObject;
			if(!valueResultResultItemvSwitchIdsZonevSwitchIdsZoneItem["zoneId"].isNull())
				vSwitchIdsZoneObject.zoneId = valueResultResultItemvSwitchIdsZonevSwitchIdsZoneItem["zoneId"].asString();
			if(!valueResultResultItemvSwitchIdsZonevSwitchIdsZoneItem["vswitchId"].isNull())
				vSwitchIdsZoneObject.vswitchId = valueResultResultItemvSwitchIdsZonevSwitchIdsZoneItem["vswitchId"].asString();
			resultObject.vSwitchIdsZone.push_back(vSwitchIdsZoneObject);
		}
		auto allSecurityGroups = value["securityGroups"]["securityGroups"];
		for (auto value : allSecurityGroups)
			resultObject.securityGroups.push_back(value.asString());
		result_.push_back(resultObject);
	}

}

std::vector<ListKibanaPvlNetworkResult::ResultItem> ListKibanaPvlNetworkResult::getResult()const
{
	return result_;
}

