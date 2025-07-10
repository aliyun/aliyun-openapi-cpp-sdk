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

#include <alibabacloud/vpc/model/ListVSwitchCidrReservationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ListVSwitchCidrReservationsResult::ListVSwitchCidrReservationsResult() :
	ServiceResult()
{}

ListVSwitchCidrReservationsResult::ListVSwitchCidrReservationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVSwitchCidrReservationsResult::~ListVSwitchCidrReservationsResult()
{}

void ListVSwitchCidrReservationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVSwitchCidrReservationsNode = value["VSwitchCidrReservations"]["VSwitchCidrReservation"];
	for (auto valueVSwitchCidrReservationsVSwitchCidrReservation : allVSwitchCidrReservationsNode)
	{
		VSwitchCidrReservation vSwitchCidrReservationsObject;
		if(!valueVSwitchCidrReservationsVSwitchCidrReservation["VpcId"].isNull())
			vSwitchCidrReservationsObject.vpcId = valueVSwitchCidrReservationsVSwitchCidrReservation["VpcId"].asString();
		if(!valueVSwitchCidrReservationsVSwitchCidrReservation["VSwitchId"].isNull())
			vSwitchCidrReservationsObject.vSwitchId = valueVSwitchCidrReservationsVSwitchCidrReservation["VSwitchId"].asString();
		if(!valueVSwitchCidrReservationsVSwitchCidrReservation["VSwitchCidrReservationId"].isNull())
			vSwitchCidrReservationsObject.vSwitchCidrReservationId = valueVSwitchCidrReservationsVSwitchCidrReservation["VSwitchCidrReservationId"].asString();
		if(!valueVSwitchCidrReservationsVSwitchCidrReservation["VSwitchCidrReservationCidr"].isNull())
			vSwitchCidrReservationsObject.vSwitchCidrReservationCidr = valueVSwitchCidrReservationsVSwitchCidrReservation["VSwitchCidrReservationCidr"].asString();
		if(!valueVSwitchCidrReservationsVSwitchCidrReservation["VSwitchCidrReservationName"].isNull())
			vSwitchCidrReservationsObject.vSwitchCidrReservationName = valueVSwitchCidrReservationsVSwitchCidrReservation["VSwitchCidrReservationName"].asString();
		if(!valueVSwitchCidrReservationsVSwitchCidrReservation["VSwitchCidrReservationDescription"].isNull())
			vSwitchCidrReservationsObject.vSwitchCidrReservationDescription = valueVSwitchCidrReservationsVSwitchCidrReservation["VSwitchCidrReservationDescription"].asString();
		if(!valueVSwitchCidrReservationsVSwitchCidrReservation["IpVersion"].isNull())
			vSwitchCidrReservationsObject.ipVersion = valueVSwitchCidrReservationsVSwitchCidrReservation["IpVersion"].asString();
		if(!valueVSwitchCidrReservationsVSwitchCidrReservation["CreationTime"].isNull())
			vSwitchCidrReservationsObject.creationTime = valueVSwitchCidrReservationsVSwitchCidrReservation["CreationTime"].asString();
		if(!valueVSwitchCidrReservationsVSwitchCidrReservation["Type"].isNull())
			vSwitchCidrReservationsObject.type = valueVSwitchCidrReservationsVSwitchCidrReservation["Type"].asString();
		if(!valueVSwitchCidrReservationsVSwitchCidrReservation["AvailableCidrCount"].isNull())
			vSwitchCidrReservationsObject.availableCidrCount = std::stoi(valueVSwitchCidrReservationsVSwitchCidrReservation["AvailableCidrCount"].asString());
		if(!valueVSwitchCidrReservationsVSwitchCidrReservation["AssignedCidrCount"].isNull())
			vSwitchCidrReservationsObject.assignedCidrCount = std::stoi(valueVSwitchCidrReservationsVSwitchCidrReservation["AssignedCidrCount"].asString());
		if(!valueVSwitchCidrReservationsVSwitchCidrReservation["Status"].isNull())
			vSwitchCidrReservationsObject.status = valueVSwitchCidrReservationsVSwitchCidrReservation["Status"].asString();
		auto allTagsNode = valueVSwitchCidrReservationsVSwitchCidrReservation["Tags"]["Tag"];
		for (auto valueVSwitchCidrReservationsVSwitchCidrReservationTagsTag : allTagsNode)
		{
			VSwitchCidrReservation::Tag tagsObject;
			if(!valueVSwitchCidrReservationsVSwitchCidrReservationTagsTag["Key"].isNull())
				tagsObject.key = valueVSwitchCidrReservationsVSwitchCidrReservationTagsTag["Key"].asString();
			if(!valueVSwitchCidrReservationsVSwitchCidrReservationTagsTag["Value"].isNull())
				tagsObject.value = valueVSwitchCidrReservationsVSwitchCidrReservationTagsTag["Value"].asString();
			vSwitchCidrReservationsObject.tags.push_back(tagsObject);
		}
		vSwitchCidrReservations_.push_back(vSwitchCidrReservationsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stol(value["MaxResults"].asString());

}

long ListVSwitchCidrReservationsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListVSwitchCidrReservationsResult::VSwitchCidrReservation> ListVSwitchCidrReservationsResult::getVSwitchCidrReservations()const
{
	return vSwitchCidrReservations_;
}

std::string ListVSwitchCidrReservationsResult::getNextToken()const
{
	return nextToken_;
}

long ListVSwitchCidrReservationsResult::getMaxResults()const
{
	return maxResults_;
}

