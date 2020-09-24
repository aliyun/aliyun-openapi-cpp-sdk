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

#include <alibabacloud/vod/model/GetDNADBResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetDNADBResult::GetDNADBResult() :
	ServiceResult()
{}

GetDNADBResult::GetDNADBResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDNADBResult::~GetDNADBResult()
{}

void GetDNADBResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dNADBNode = value["DNADB"];
	if(!dNADBNode["DBId"].isNull())
		dNADB_.dBId = dNADBNode["DBId"].asString();
	if(!dNADBNode["Status"].isNull())
		dNADB_.status = dNADBNode["Status"].asString();
	if(!dNADBNode["DBDescription"].isNull())
		dNADB_.dBDescription = dNADBNode["DBDescription"].asString();
	if(!dNADBNode["DBType"].isNull())
		dNADB_.dBType = dNADBNode["DBType"].asString();
	if(!dNADBNode["DBName"].isNull())
		dNADB_.dBName = dNADBNode["DBName"].asString();
	if(!dNADBNode["DBRegion"].isNull())
		dNADB_.dBRegion = dNADBNode["DBRegion"].asString();

}

GetDNADBResult::DNADB GetDNADBResult::getDNADB()const
{
	return dNADB_;
}

