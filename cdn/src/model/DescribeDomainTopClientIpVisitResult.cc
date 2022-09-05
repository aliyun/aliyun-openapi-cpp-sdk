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

#include <alibabacloud/cdn/model/DescribeDomainTopClientIpVisitResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainTopClientIpVisitResult::DescribeDomainTopClientIpVisitResult() :
	ServiceResult()
{}

DescribeDomainTopClientIpVisitResult::DescribeDomainTopClientIpVisitResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainTopClientIpVisitResult::~DescribeDomainTopClientIpVisitResult()
{}

void DescribeDomainTopClientIpVisitResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClientIpListNode = value["ClientIpList"]["ClientIp"];
	for (auto valueClientIpListClientIp : allClientIpListNode)
	{
		ClientIp clientIpListObject;
		if(!valueClientIpListClientIp["Rank"].isNull())
			clientIpListObject.rank = std::stoi(valueClientIpListClientIp["Rank"].asString());
		if(!valueClientIpListClientIp["ClientIp"].isNull())
			clientIpListObject.clientIp = valueClientIpListClientIp["ClientIp"].asString();
		if(!valueClientIpListClientIp["Acc"].isNull())
			clientIpListObject.acc = std::stol(valueClientIpListClientIp["Acc"].asString());
		if(!valueClientIpListClientIp["Traffic"].isNull())
			clientIpListObject.traffic = std::stol(valueClientIpListClientIp["Traffic"].asString());
		clientIpList_.push_back(clientIpListObject);
	}

}

std::vector<DescribeDomainTopClientIpVisitResult::ClientIp> DescribeDomainTopClientIpVisitResult::getClientIpList()const
{
	return clientIpList_;
}

