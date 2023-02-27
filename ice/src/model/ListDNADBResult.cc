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

#include <alibabacloud/ice/model/ListDNADBResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

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
	auto allDBListNode = value["DBList"]["DBInfo"];
	for (auto valueDBListDBInfo : allDBListNode)
	{
		DBInfo dBListObject;
		if(!valueDBListDBInfo["Status"].isNull())
			dBListObject.status = valueDBListDBInfo["Status"].asString();
		if(!valueDBListDBInfo["Description"].isNull())
			dBListObject.description = valueDBListDBInfo["Description"].asString();
		if(!valueDBListDBInfo["Name"].isNull())
			dBListObject.name = valueDBListDBInfo["Name"].asString();
		if(!valueDBListDBInfo["Model"].isNull())
			dBListObject.model = std::stoi(valueDBListDBInfo["Model"].asString());
		if(!valueDBListDBInfo["DBId"].isNull())
			dBListObject.dBId = valueDBListDBInfo["DBId"].asString();
		dBList_.push_back(dBListObject);
	}

}

std::vector<ListDNADBResult::DBInfo> ListDNADBResult::getDBList()const
{
	return dBList_;
}

