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

#include <alibabacloud/privatelink/model/ListVpcEndpointServicesByEndUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Privatelink;
using namespace AlibabaCloud::Privatelink::Model;

ListVpcEndpointServicesByEndUserResult::ListVpcEndpointServicesByEndUserResult() :
	ServiceResult()
{}

ListVpcEndpointServicesByEndUserResult::ListVpcEndpointServicesByEndUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVpcEndpointServicesByEndUserResult::~ListVpcEndpointServicesByEndUserResult()
{}

void ListVpcEndpointServicesByEndUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allServicesNode = value["Services"]["Service"];
	for (auto valueServicesService : allServicesNode)
	{
		Service servicesObject;
		if(!valueServicesService["Payer"].isNull())
			servicesObject.payer = valueServicesService["Payer"].asString();
		if(!valueServicesService["ServiceDomain"].isNull())
			servicesObject.serviceDomain = valueServicesService["ServiceDomain"].asString();
		if(!valueServicesService["ServiceId"].isNull())
			servicesObject.serviceId = valueServicesService["ServiceId"].asString();
		if(!valueServicesService["ServiceName"].isNull())
			servicesObject.serviceName = valueServicesService["ServiceName"].asString();
		if(!valueServicesService["ServiceType"].isNull())
			servicesObject.serviceType = valueServicesService["ServiceType"].asString();
		if(!valueServicesService["ServiceDescription"].isNull())
			servicesObject.serviceDescription = valueServicesService["ServiceDescription"].asString();
		if(!valueServicesService["PrivateServiceName"].isNull())
			servicesObject.privateServiceName = valueServicesService["PrivateServiceName"].asString();
		if(!valueServicesService["ServiceSupportIPv6"].isNull())
			servicesObject.serviceSupportIPv6 = valueServicesService["ServiceSupportIPv6"].asString() == "true";
		if(!valueServicesService["ResourceGroupId"].isNull())
			servicesObject.resourceGroupId = valueServicesService["ResourceGroupId"].asString();
		if(!valueServicesService["ServiceResourceType"].isNull())
			servicesObject.serviceResourceType = valueServicesService["ServiceResourceType"].asString();
		auto allTagsNode = valueServicesService["Tags"]["TagModel"];
		for (auto valueServicesServiceTagsTagModel : allTagsNode)
		{
			Service::TagModel tagsObject;
			if(!valueServicesServiceTagsTagModel["Key"].isNull())
				tagsObject.key = valueServicesServiceTagsTagModel["Key"].asString();
			if(!valueServicesServiceTagsTagModel["Value"].isNull())
				tagsObject.value = valueServicesServiceTagsTagModel["Value"].asString();
			servicesObject.tags.push_back(tagsObject);
		}
		auto allZones = value["Zones"]["Zone"];
		for (auto value : allZones)
			servicesObject.zones.push_back(value.asString());
		services_.push_back(servicesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::vector<ListVpcEndpointServicesByEndUserResult::Service> ListVpcEndpointServicesByEndUserResult::getServices()const
{
	return services_;
}

std::string ListVpcEndpointServicesByEndUserResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListVpcEndpointServicesByEndUserResult::getNextToken()const
{
	return nextToken_;
}

int ListVpcEndpointServicesByEndUserResult::getMaxResults()const
{
	return maxResults_;
}

