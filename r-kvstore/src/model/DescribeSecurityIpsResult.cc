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

#include <alibabacloud/r-kvstore/model/DescribeSecurityIpsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeSecurityIpsResult::DescribeSecurityIpsResult() :
	ServiceResult()
{}

DescribeSecurityIpsResult::DescribeSecurityIpsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSecurityIpsResult::~DescribeSecurityIpsResult()
{}

void DescribeSecurityIpsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
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

}

std::vector<DescribeSecurityIpsResult::SecurityIpGroup> DescribeSecurityIpsResult::getSecurityIpGroups()const
{
	return securityIpGroups_;
}

