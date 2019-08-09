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

#include <alibabacloud/vod/model/ListAuditSecurityIpResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListAuditSecurityIpResult::ListAuditSecurityIpResult() :
	ServiceResult()
{}

ListAuditSecurityIpResult::ListAuditSecurityIpResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAuditSecurityIpResult::~ListAuditSecurityIpResult()
{}

void ListAuditSecurityIpResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allSecurityIpList = value["SecurityIpList"]["SecurityIp"];
	for (auto value : allSecurityIpList)
	{
		SecurityIp securityIpListObject;
		if(!value["SecurityGroupName"].isNull())
			securityIpListObject.securityGroupName = value["SecurityGroupName"].asString();
		if(!value["Ips"].isNull())
			securityIpListObject.ips = value["Ips"].asString();
		if(!value["CreationTime"].isNull())
			securityIpListObject.creationTime = value["CreationTime"].asString();
		if(!value["ModificationTime"].isNull())
			securityIpListObject.modificationTime = value["ModificationTime"].asString();
		securityIpList_.push_back(securityIpListObject);
	}

}

std::vector<ListAuditSecurityIpResult::SecurityIp> ListAuditSecurityIpResult::getSecurityIpList()const
{
	return securityIpList_;
}

