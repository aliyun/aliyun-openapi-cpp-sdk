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

#include <alibabacloud/ft/model/BatchAuditTest01Result.h>
#include <json/json.h>

using namespace AlibabaCloud::Ft;
using namespace AlibabaCloud::Ft::Model;

BatchAuditTest01Result::BatchAuditTest01Result() :
	ServiceResult()
{}

BatchAuditTest01Result::BatchAuditTest01Result(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchAuditTest01Result::~BatchAuditTest01Result()
{}

void BatchAuditTest01Result::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto demo01Node = value["Demo01"];
	auto allDemo011Node = demo01Node["Demo011"]["Demo011Item"];
	for (auto demo01NodeDemo011Demo011Item : allDemo011Node)
	{
		Demo01::Demo011Item demo011ItemObject;
		if(!demo01NodeDemo011Demo011Item["Demo0111"].isNull())
			demo011ItemObject.demo0111 = demo01NodeDemo011Demo011Item["Demo0111"].asString();
		demo01_.demo011.push_back(demo011ItemObject);
	}
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();

}

BatchAuditTest01Result::Demo01 BatchAuditTest01Result::getDemo01()const
{
	return demo01_;
}

std::string BatchAuditTest01Result::getName()const
{
	return name_;
}

