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

#include <alibabacloud/oceanbasepro/model/DescribeSQLDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeSQLDetailsResult::DescribeSQLDetailsResult() :
	ServiceResult()
{}

DescribeSQLDetailsResult::DescribeSQLDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLDetailsResult::~DescribeSQLDetailsResult()
{}

void DescribeSQLDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSQLDetailsNode = value["SQLDetails"]["Data"];
	for (auto valueSQLDetailsData : allSQLDetailsNode)
	{
		Data sQLDetailsObject;
		if(!valueSQLDetailsData["SQLText"].isNull())
			sQLDetailsObject.sQLText = valueSQLDetailsData["SQLText"].asString();
		if(!valueSQLDetailsData["DbName"].isNull())
			sQLDetailsObject.dbName = valueSQLDetailsData["DbName"].asString();
		if(!valueSQLDetailsData["UserName"].isNull())
			sQLDetailsObject.userName = valueSQLDetailsData["UserName"].asString();
		sQLDetails_.push_back(sQLDetailsObject);
	}

}

std::vector<DescribeSQLDetailsResult::Data> DescribeSQLDetailsResult::getSQLDetails()const
{
	return sQLDetails_;
}

