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

#include <alibabacloud/ga/model/CreateBasicEndpointsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

CreateBasicEndpointsResult::CreateBasicEndpointsResult() :
	ServiceResult()
{}

CreateBasicEndpointsResult::CreateBasicEndpointsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateBasicEndpointsResult::~CreateBasicEndpointsResult()
{}

void CreateBasicEndpointsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEndpointsNode = value["Endpoints"]["endpointsItem"];
	for (auto valueEndpointsendpointsItem : allEndpointsNode)
	{
		EndpointsItem endpointsObject;
		if(!valueEndpointsendpointsItem["EndpointId"].isNull())
			endpointsObject.endpointId = valueEndpointsendpointsItem["EndpointId"].asString();
		if(!valueEndpointsendpointsItem["EndpointType"].isNull())
			endpointsObject.endpointType = valueEndpointsendpointsItem["EndpointType"].asString();
		if(!valueEndpointsendpointsItem["EndpointAddress"].isNull())
			endpointsObject.endpointAddress = valueEndpointsendpointsItem["EndpointAddress"].asString();
		if(!valueEndpointsendpointsItem["EndpointSubAddress"].isNull())
			endpointsObject.endpointSubAddress = valueEndpointsendpointsItem["EndpointSubAddress"].asString();
		endpoints_.push_back(endpointsObject);
	}
	if(!value["EndpointGroupId"].isNull())
		endpointGroupId_ = value["EndpointGroupId"].asString();

}

std::vector<CreateBasicEndpointsResult::EndpointsItem> CreateBasicEndpointsResult::getEndpoints()const
{
	return endpoints_;
}

std::string CreateBasicEndpointsResult::getEndpointGroupId()const
{
	return endpointGroupId_;
}

