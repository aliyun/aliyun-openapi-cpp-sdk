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

#include <alibabacloud/dcdn/model/DescribeDcdnFullDomainsBlockIPHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnFullDomainsBlockIPHistoryResult::DescribeDcdnFullDomainsBlockIPHistoryResult() :
	ServiceResult()
{}

DescribeDcdnFullDomainsBlockIPHistoryResult::DescribeDcdnFullDomainsBlockIPHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnFullDomainsBlockIPHistoryResult::~DescribeDcdnFullDomainsBlockIPHistoryResult()
{}

void DescribeDcdnFullDomainsBlockIPHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIPBlockInfoNode = value["IPBlockInfo"]["IPBlockHistory"];
	for (auto valueIPBlockInfoIPBlockHistory : allIPBlockInfoNode)
	{
		IPBlockHistory iPBlockInfoObject;
		if(!valueIPBlockInfoIPBlockHistory["BlockIP"].isNull())
			iPBlockInfoObject.blockIP = valueIPBlockInfoIPBlockHistory["BlockIP"].asString();
		if(!valueIPBlockInfoIPBlockHistory["DeliverTime"].isNull())
			iPBlockInfoObject.deliverTime = valueIPBlockInfoIPBlockHistory["DeliverTime"].asString();
		if(!valueIPBlockInfoIPBlockHistory["Status"].isNull())
			iPBlockInfoObject.status = valueIPBlockInfoIPBlockHistory["Status"].asString();
		iPBlockInfo_.push_back(iPBlockInfoObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();

}

std::string DescribeDcdnFullDomainsBlockIPHistoryResult::getDescription()const
{
	return description_;
}

std::vector<DescribeDcdnFullDomainsBlockIPHistoryResult::IPBlockHistory> DescribeDcdnFullDomainsBlockIPHistoryResult::getIPBlockInfo()const
{
	return iPBlockInfo_;
}

int DescribeDcdnFullDomainsBlockIPHistoryResult::getCode()const
{
	return code_;
}

