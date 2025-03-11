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

#include <alibabacloud/drds/model/DescribeDrdsDBResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsDBResult::DescribeDrdsDBResult() :
	ServiceResult()
{}

DescribeDrdsDBResult::DescribeDrdsDBResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsDBResult::~DescribeDrdsDBResult()
{}

void DescribeDrdsDBResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["DbName"].isNull())
		data_.dbName = dataNode["DbName"].asString();
	if(!dataNode["Schema"].isNull())
		data_.schema = dataNode["Schema"].asString();
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = dataNode["CreateTime"].asString();
	if(!dataNode["Mode"].isNull())
		data_.mode = dataNode["Mode"].asString();
	if(!dataNode["DbInstType"].isNull())
		data_.dbInstType = dataNode["DbInstType"].asString();
	if(!dataNode["InstRole"].isNull())
		data_.instRole = dataNode["InstRole"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeDrdsDBResult::Data DescribeDrdsDBResult::getData()const
{
	return data_;
}

bool DescribeDrdsDBResult::getSuccess()const
{
	return success_;
}

