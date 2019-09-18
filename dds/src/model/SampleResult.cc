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

#include <alibabacloud/dds/model/SampleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

SampleResult::SampleResult() :
	ServiceResult()
{}

SampleResult::SampleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SampleResult::~SampleResult()
{}

void SampleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecurityIpGroups = value["SecurityIpGroups"]["SecurityIpGroup"];
	for (auto value : allSecurityIpGroups)
	{
		SecurityIpGroup securityIpGroupsObject;
		if(!value["SecurityIpGroupName"].isNull())
			securityIpGroupsObject.securityIpGroupName = value["SecurityIpGroupName"].asString();
		if(!value["SecurityIpGroupAttribute"].isNull())
			securityIpGroupsObject.securityIpGroupAttribute = value["SecurityIpGroupAttribute"].asString();
		if(!value["SecurityIpList"].isNull())
			securityIpGroupsObject.securityIpList = value["SecurityIpList"].asString();
		securityIpGroups_.push_back(securityIpGroupsObject);
	}
	if(!value["SecurityIps"].isNull())
		securityIps_ = value["SecurityIps"].asString();

}

std::string SampleResult::getSecurityIps()const
{
	return securityIps_;
}

std::vector<SampleResult::SecurityIpGroup> SampleResult::getSecurityIpGroups()const
{
	return securityIpGroups_;
}

