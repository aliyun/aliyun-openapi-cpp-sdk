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

#include <alibabacloud/ga/model/ListBasicAccelerateIpEndpointRelationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListBasicAccelerateIpEndpointRelationsResult::ListBasicAccelerateIpEndpointRelationsResult() :
	ServiceResult()
{}

ListBasicAccelerateIpEndpointRelationsResult::ListBasicAccelerateIpEndpointRelationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBasicAccelerateIpEndpointRelationsResult::~ListBasicAccelerateIpEndpointRelationsResult()
{}

void ListBasicAccelerateIpEndpointRelationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccelerateIpEndpointRelationsNode = value["AccelerateIpEndpointRelations"]["accelerateIpEndpointRelationsItem"];
	for (auto valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem : allAccelerateIpEndpointRelationsNode)
	{
		AccelerateIpEndpointRelationsItem accelerateIpEndpointRelationsObject;
		if(!valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["AccelerateIpId"].isNull())
			accelerateIpEndpointRelationsObject.accelerateIpId = valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["AccelerateIpId"].asString();
		if(!valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["IpAddress"].isNull())
			accelerateIpEndpointRelationsObject.ipAddress = valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["IpAddress"].asString();
		if(!valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["EndpointId"].isNull())
			accelerateIpEndpointRelationsObject.endpointId = valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["EndpointId"].asString();
		if(!valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["EndpointName"].isNull())
			accelerateIpEndpointRelationsObject.endpointName = valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["EndpointName"].asString();
		if(!valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["EndpointType"].isNull())
			accelerateIpEndpointRelationsObject.endpointType = valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["EndpointType"].asString();
		if(!valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["EndpointAddress"].isNull())
			accelerateIpEndpointRelationsObject.endpointAddress = valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["EndpointAddress"].asString();
		if(!valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["EndpointSubAddress"].isNull())
			accelerateIpEndpointRelationsObject.endpointSubAddress = valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["EndpointSubAddress"].asString();
		if(!valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["EndpointSubAddressType"].isNull())
			accelerateIpEndpointRelationsObject.endpointSubAddressType = valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["EndpointSubAddressType"].asString();
		if(!valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["EndpointZoneId"].isNull())
			accelerateIpEndpointRelationsObject.endpointZoneId = valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["EndpointZoneId"].asString();
		if(!valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["State"].isNull())
			accelerateIpEndpointRelationsObject.state = valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["State"].asString();
		if(!valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["AcceleratorId"].isNull())
			accelerateIpEndpointRelationsObject.acceleratorId = valueAccelerateIpEndpointRelationsaccelerateIpEndpointRelationsItem["AcceleratorId"].asString();
		accelerateIpEndpointRelations_.push_back(accelerateIpEndpointRelationsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = value["MaxResults"].asString();

}

std::string ListBasicAccelerateIpEndpointRelationsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListBasicAccelerateIpEndpointRelationsResult::getNextToken()const
{
	return nextToken_;
}

std::string ListBasicAccelerateIpEndpointRelationsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListBasicAccelerateIpEndpointRelationsResult::AccelerateIpEndpointRelationsItem> ListBasicAccelerateIpEndpointRelationsResult::getAccelerateIpEndpointRelations()const
{
	return accelerateIpEndpointRelations_;
}

