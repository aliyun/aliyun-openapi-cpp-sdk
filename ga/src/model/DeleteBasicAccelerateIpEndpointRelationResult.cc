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

#include <alibabacloud/ga/model/DeleteBasicAccelerateIpEndpointRelationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

DeleteBasicAccelerateIpEndpointRelationResult::DeleteBasicAccelerateIpEndpointRelationResult() :
	ServiceResult()
{}

DeleteBasicAccelerateIpEndpointRelationResult::DeleteBasicAccelerateIpEndpointRelationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteBasicAccelerateIpEndpointRelationResult::~DeleteBasicAccelerateIpEndpointRelationResult()
{}

void DeleteBasicAccelerateIpEndpointRelationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AcceleratorId"].isNull())
		acceleratorId_ = value["AcceleratorId"].asString();
	if(!value["EndpointId"].isNull())
		endpointId_ = value["EndpointId"].asString();
	if(!value["AccelerateIpId"].isNull())
		accelerateIpId_ = value["AccelerateIpId"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();

}

std::string DeleteBasicAccelerateIpEndpointRelationResult::getAccelerateIpId()const
{
	return accelerateIpId_;
}

std::string DeleteBasicAccelerateIpEndpointRelationResult::getState()const
{
	return state_;
}

std::string DeleteBasicAccelerateIpEndpointRelationResult::getEndpointId()const
{
	return endpointId_;
}

std::string DeleteBasicAccelerateIpEndpointRelationResult::getAcceleratorId()const
{
	return acceleratorId_;
}

