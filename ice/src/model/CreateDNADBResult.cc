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

#include <alibabacloud/ice/model/CreateDNADBResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

CreateDNADBResult::CreateDNADBResult() :
	ServiceResult()
{}

CreateDNADBResult::CreateDNADBResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateDNADBResult::~CreateDNADBResult()
{}

void CreateDNADBResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dBInfoNode = value["DBInfo"];
	if(!dBInfoNode["Description"].isNull())
		dBInfo_.description = dBInfoNode["Description"].asString();
	if(!dBInfoNode["Name"].isNull())
		dBInfo_.name = dBInfoNode["Name"].asString();
	if(!dBInfoNode["Status"].isNull())
		dBInfo_.status = dBInfoNode["Status"].asString();
	if(!dBInfoNode["DBId"].isNull())
		dBInfo_.dBId = dBInfoNode["DBId"].asString();
	if(!dBInfoNode["Model"].isNull())
		dBInfo_.model = dBInfoNode["Model"].asString();

}

CreateDNADBResult::DBInfo CreateDNADBResult::getDBInfo()const
{
	return dBInfo_;
}

