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

#include <alibabacloud/vod/model/ListDNADBResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListDNADBResult::ListDNADBResult() :
	ServiceResult()
{}

ListDNADBResult::ListDNADBResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDNADBResult::~ListDNADBResult()
{}

void ListDNADBResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDNADBListNode = value["DNADBList"]["DNADB"];
	for (auto valueDNADBListDNADB : allDNADBListNode)
	{
		DNADB dNADBListObject;
		if(!valueDNADBListDNADB["DBId"].isNull())
			dNADBListObject.dBId = valueDNADBListDNADB["DBId"].asString();
		if(!valueDNADBListDNADB["Status"].isNull())
			dNADBListObject.status = valueDNADBListDNADB["Status"].asString();
		if(!valueDNADBListDNADB["DBDescription"].isNull())
			dNADBListObject.dBDescription = valueDNADBListDNADB["DBDescription"].asString();
		if(!valueDNADBListDNADB["DBType"].isNull())
			dNADBListObject.dBType = valueDNADBListDNADB["DBType"].asString();
		if(!valueDNADBListDNADB["DBName"].isNull())
			dNADBListObject.dBName = valueDNADBListDNADB["DBName"].asString();
		if(!valueDNADBListDNADB["DBRegion"].isNull())
			dNADBListObject.dBRegion = valueDNADBListDNADB["DBRegion"].asString();
		dNADBList_.push_back(dNADBListObject);
	}

}

std::vector<ListDNADBResult::DNADB> ListDNADBResult::getDNADBList()const
{
	return dNADBList_;
}

