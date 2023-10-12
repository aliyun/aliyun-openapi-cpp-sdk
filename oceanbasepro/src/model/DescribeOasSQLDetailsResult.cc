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

#include <alibabacloud/oceanbasepro/model/DescribeOasSQLDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeOasSQLDetailsResult::DescribeOasSQLDetailsResult() :
	ServiceResult()
{}

DescribeOasSQLDetailsResult::DescribeOasSQLDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOasSQLDetailsResult::~DescribeOasSQLDetailsResult()
{}

void DescribeOasSQLDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Fulltext"].isNull())
		data_.fulltext = dataNode["Fulltext"].asString();
	if(!dataNode["UserName"].isNull())
		data_.userName = dataNode["UserName"].asString();
	if(!dataNode["Statement"].isNull())
		data_.statement = dataNode["Statement"].asString();
	if(!dataNode["DbName"].isNull())
		data_.dbName = dataNode["DbName"].asString();
		auto allTables = dataNode["Tables"]["Tables"];
		for (auto value : allTables)
			data_.tables.push_back(value.asString());

}

DescribeOasSQLDetailsResult::Data DescribeOasSQLDetailsResult::getData()const
{
	return data_;
}

