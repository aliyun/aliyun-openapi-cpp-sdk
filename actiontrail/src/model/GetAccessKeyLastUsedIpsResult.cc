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

#include <alibabacloud/actiontrail/model/GetAccessKeyLastUsedIpsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Actiontrail;
using namespace AlibabaCloud::Actiontrail::Model;

GetAccessKeyLastUsedIpsResult::GetAccessKeyLastUsedIpsResult() :
	ServiceResult()
{}

GetAccessKeyLastUsedIpsResult::GetAccessKeyLastUsedIpsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAccessKeyLastUsedIpsResult::~GetAccessKeyLastUsedIpsResult()
{}

void GetAccessKeyLastUsedIpsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpsNode = value["Ips"]["IpsItem"];
	for (auto valueIpsIpsItem : allIpsNode)
	{
		IpsItem ipsObject;
		if(!valueIpsIpsItem["UsedTimestamp"].isNull())
			ipsObject.usedTimestamp = std::stol(valueIpsIpsItem["UsedTimestamp"].asString());
		if(!valueIpsIpsItem["Detail"].isNull())
			ipsObject.detail = valueIpsIpsItem["Detail"].asString();
		if(!valueIpsIpsItem["Source"].isNull())
			ipsObject.source = valueIpsIpsItem["Source"].asString();
		if(!valueIpsIpsItem["Ip"].isNull())
			ipsObject.ip = valueIpsIpsItem["Ip"].asString();
		ips_.push_back(ipsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string GetAccessKeyLastUsedIpsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<GetAccessKeyLastUsedIpsResult::IpsItem> GetAccessKeyLastUsedIpsResult::getIps()const
{
	return ips_;
}

