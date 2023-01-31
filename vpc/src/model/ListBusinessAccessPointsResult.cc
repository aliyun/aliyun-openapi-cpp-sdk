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

#include <alibabacloud/vpc/model/ListBusinessAccessPointsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ListBusinessAccessPointsResult::ListBusinessAccessPointsResult() :
	ServiceResult()
{}

ListBusinessAccessPointsResult::ListBusinessAccessPointsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBusinessAccessPointsResult::~ListBusinessAccessPointsResult()
{}

void ListBusinessAccessPointsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBusinessAccessPointsNode = value["BusinessAccessPoints"]["BusinessAccessPointsItem"];
	for (auto valueBusinessAccessPointsBusinessAccessPointsItem : allBusinessAccessPointsNode)
	{
		BusinessAccessPointsItem businessAccessPointsObject;
		if(!valueBusinessAccessPointsBusinessAccessPointsItem["AccessPointId"].isNull())
			businessAccessPointsObject.accessPointId = valueBusinessAccessPointsBusinessAccessPointsItem["AccessPointId"].asString();
		if(!valueBusinessAccessPointsBusinessAccessPointsItem["AccessPointName"].isNull())
			businessAccessPointsObject.accessPointName = valueBusinessAccessPointsBusinessAccessPointsItem["AccessPointName"].asString();
		if(!valueBusinessAccessPointsBusinessAccessPointsItem["SupportLineOperator"].isNull())
			businessAccessPointsObject.supportLineOperator = valueBusinessAccessPointsBusinessAccessPointsItem["SupportLineOperator"].asString();
		if(!valueBusinessAccessPointsBusinessAccessPointsItem["SupportPortTypes"].isNull())
			businessAccessPointsObject.supportPortTypes = valueBusinessAccessPointsBusinessAccessPointsItem["SupportPortTypes"].asString();
		if(!valueBusinessAccessPointsBusinessAccessPointsItem["CloudBoxInstanceIds"].isNull())
			businessAccessPointsObject.cloudBoxInstanceIds = valueBusinessAccessPointsBusinessAccessPointsItem["CloudBoxInstanceIds"].asString();
		if(!valueBusinessAccessPointsBusinessAccessPointsItem["Longitude"].isNull())
			businessAccessPointsObject.longitude = valueBusinessAccessPointsBusinessAccessPointsItem["Longitude"].asString();
		if(!valueBusinessAccessPointsBusinessAccessPointsItem["Latitude"].isNull())
			businessAccessPointsObject.latitude = valueBusinessAccessPointsBusinessAccessPointsItem["Latitude"].asString();
		businessAccessPoints_.push_back(businessAccessPointsObject);
	}

}

std::vector<ListBusinessAccessPointsResult::BusinessAccessPointsItem> ListBusinessAccessPointsResult::getBusinessAccessPoints()const
{
	return businessAccessPoints_;
}

