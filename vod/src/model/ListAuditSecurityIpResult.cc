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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecurityIpListNode = value["SecurityIpList"]["SecurityIp"];
	for (auto valueSecurityIpListSecurityIp : allSecurityIpListNode)
	{
		SecurityIp securityIpListObject;
		if(!valueSecurityIpListSecurityIp["CreationTime"].isNull())
			securityIpListObject.creationTime = valueSecurityIpListSecurityIp["CreationTime"].asString();
		if(!valueSecurityIpListSecurityIp["Ips"].isNull())
			securityIpListObject.ips = valueSecurityIpListSecurityIp["Ips"].asString();
		if(!valueSecurityIpListSecurityIp["ModificationTime"].isNull())
			securityIpListObject.modificationTime = valueSecurityIpListSecurityIp["ModificationTime"].asString();
		if(!valueSecurityIpListSecurityIp["SecurityGroupName"].isNull())
			securityIpListObject.securityGroupName = valueSecurityIpListSecurityIp["SecurityGroupName"].asString();
		securityIpList_.push_back(securityIpListObject);
	}

}

std::vector<ListAuditSecurityIpResult::SecurityIp> ListAuditSecurityIpResult::getSecurityIpList()const
{
	return securityIpList_;
}

