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

#include <alibabacloud/rds/model/CheckResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

CheckResourceResult::CheckResourceResult() :
	ServiceResult()
{}

CheckResourceResult::CheckResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CheckResourceResult::~CheckResourceResult()
{}

void CheckResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResources = value["Resources"]["Resource"];
	for (auto value : allResources)
	{
		Resource resourcesObject;
		if(!value["DBInstanceAvailable"].isNull())
			resourcesObject.dBInstanceAvailable = value["DBInstanceAvailable"].asString();
		if(!value["Engine"].isNull())
			resourcesObject.engine = value["Engine"].asString();
		if(!value["EngineVersion"].isNull())
			resourcesObject.engineVersion = value["EngineVersion"].asString();
		resources_.push_back(resourcesObject);
	}
	if(!value["SpecifyCount"].isNull())
		specifyCount_ = value["SpecifyCount"].asString();

}

std::string CheckResourceResult::getSpecifyCount()const
{
	return specifyCount_;
}

std::vector<CheckResourceResult::Resource> CheckResourceResult::getResources()const
{
	return resources_;
}

