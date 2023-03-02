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

#include <alibabacloud/swas-open/model/ListInstancesTrafficPackagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

ListInstancesTrafficPackagesResult::ListInstancesTrafficPackagesResult() :
	ServiceResult()
{}

ListInstancesTrafficPackagesResult::ListInstancesTrafficPackagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstancesTrafficPackagesResult::~ListInstancesTrafficPackagesResult()
{}

void ListInstancesTrafficPackagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceTrafficPackageUsagesNode = value["InstanceTrafficPackageUsages"]["InstanceTrafficPackageUsage"];
	for (auto valueInstanceTrafficPackageUsagesInstanceTrafficPackageUsage : allInstanceTrafficPackageUsagesNode)
	{
		InstanceTrafficPackageUsage instanceTrafficPackageUsagesObject;
		if(!valueInstanceTrafficPackageUsagesInstanceTrafficPackageUsage["InstanceId"].isNull())
			instanceTrafficPackageUsagesObject.instanceId = valueInstanceTrafficPackageUsagesInstanceTrafficPackageUsage["InstanceId"].asString();
		if(!valueInstanceTrafficPackageUsagesInstanceTrafficPackageUsage["TrafficUsed"].isNull())
			instanceTrafficPackageUsagesObject.trafficUsed = std::stol(valueInstanceTrafficPackageUsagesInstanceTrafficPackageUsage["TrafficUsed"].asString());
		if(!valueInstanceTrafficPackageUsagesInstanceTrafficPackageUsage["TrafficPackageTotal"].isNull())
			instanceTrafficPackageUsagesObject.trafficPackageTotal = std::stol(valueInstanceTrafficPackageUsagesInstanceTrafficPackageUsage["TrafficPackageTotal"].asString());
		if(!valueInstanceTrafficPackageUsagesInstanceTrafficPackageUsage["TrafficPackageRemaining"].isNull())
			instanceTrafficPackageUsagesObject.trafficPackageRemaining = std::stol(valueInstanceTrafficPackageUsagesInstanceTrafficPackageUsage["TrafficPackageRemaining"].asString());
		if(!valueInstanceTrafficPackageUsagesInstanceTrafficPackageUsage["TrafficOverflow"].isNull())
			instanceTrafficPackageUsagesObject.trafficOverflow = std::stol(valueInstanceTrafficPackageUsagesInstanceTrafficPackageUsage["TrafficOverflow"].asString());
		instanceTrafficPackageUsages_.push_back(instanceTrafficPackageUsagesObject);
	}

}

std::vector<ListInstancesTrafficPackagesResult::InstanceTrafficPackageUsage> ListInstancesTrafficPackagesResult::getInstanceTrafficPackageUsages()const
{
	return instanceTrafficPackageUsages_;
}

