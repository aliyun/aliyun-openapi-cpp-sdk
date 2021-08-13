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

#include <alibabacloud/smartag/model/ListAccessPointsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

ListAccessPointsResult::ListAccessPointsResult() :
	ServiceResult()
{}

ListAccessPointsResult::ListAccessPointsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAccessPointsResult::~ListAccessPointsResult()
{}

void ListAccessPointsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccessPointsNode = value["AccessPoints"]["AccessPoint"];
	for (auto valueAccessPointsAccessPoint : allAccessPointsNode)
	{
		AccessPoint accessPointsObject;
		if(!valueAccessPointsAccessPoint["Longitude"].isNull())
			accessPointsObject.longitude = valueAccessPointsAccessPoint["Longitude"].asString();
		if(!valueAccessPointsAccessPoint["ActiveSmartAGCount"].isNull())
			accessPointsObject.activeSmartAGCount = std::stoi(valueAccessPointsAccessPoint["ActiveSmartAGCount"].asString());
		if(!valueAccessPointsAccessPoint["InactiveSmartAGCount"].isNull())
			accessPointsObject.inactiveSmartAGCount = std::stoi(valueAccessPointsAccessPoint["InactiveSmartAGCount"].asString());
		if(!valueAccessPointsAccessPoint["Latitude"].isNull())
			accessPointsObject.latitude = valueAccessPointsAccessPoint["Latitude"].asString();
		if(!valueAccessPointsAccessPoint["AccessPointId"].isNull())
			accessPointsObject.accessPointId = std::stoi(valueAccessPointsAccessPoint["AccessPointId"].asString());
		accessPoints_.push_back(accessPointsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<ListAccessPointsResult::AccessPoint> ListAccessPointsResult::getAccessPoints()const
{
	return accessPoints_;
}

int ListAccessPointsResult::getTotalCount()const
{
	return totalCount_;
}

