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

#include <alibabacloud/ddosbgp/model/DescribeOpEntitiesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddosbgp;
using namespace AlibabaCloud::Ddosbgp::Model;

DescribeOpEntitiesResult::DescribeOpEntitiesResult() :
	ServiceResult()
{}

DescribeOpEntitiesResult::DescribeOpEntitiesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOpEntitiesResult::~DescribeOpEntitiesResult()
{}

void DescribeOpEntitiesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOpEntitiesNode = value["OpEntities"]["OpEntity"];
	for (auto valueOpEntitiesOpEntity : allOpEntitiesNode)
	{
		OpEntity opEntitiesObject;
		if(!valueOpEntitiesOpEntity["EntityType"].isNull())
			opEntitiesObject.entityType = std::stoi(valueOpEntitiesOpEntity["EntityType"].asString());
		if(!valueOpEntitiesOpEntity["EntityObject"].isNull())
			opEntitiesObject.entityObject = valueOpEntitiesOpEntity["EntityObject"].asString();
		if(!valueOpEntitiesOpEntity["OpAction"].isNull())
			opEntitiesObject.opAction = std::stoi(valueOpEntitiesOpEntity["OpAction"].asString());
		if(!valueOpEntitiesOpEntity["GmtCreate"].isNull())
			opEntitiesObject.gmtCreate = std::stol(valueOpEntitiesOpEntity["GmtCreate"].asString());
		if(!valueOpEntitiesOpEntity["OpAccount"].isNull())
			opEntitiesObject.opAccount = valueOpEntitiesOpEntity["OpAccount"].asString();
		if(!valueOpEntitiesOpEntity["OpDesc"].isNull())
			opEntitiesObject.opDesc = valueOpEntitiesOpEntity["OpDesc"].asString();
		opEntities_.push_back(opEntitiesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeOpEntitiesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeOpEntitiesResult::OpEntity> DescribeOpEntitiesResult::getOpEntities()const
{
	return opEntities_;
}

