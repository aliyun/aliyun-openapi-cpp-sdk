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

#include <alibabacloud/cloudapi/model/CreateModelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

CreateModelResult::CreateModelResult() :
	ServiceResult()
{}

CreateModelResult::CreateModelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateModelResult::~CreateModelResult()
{}

void CreateModelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ModifiedTime"].isNull())
		modifiedTime_ = value["ModifiedTime"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["Schema"].isNull())
		schema_ = value["Schema"].asString();
	if(!value["ModelName"].isNull())
		modelName_ = value["ModelName"].asString();
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();
	if(!value["ModelId"].isNull())
		modelId_ = value["ModelId"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["ModelRef"].isNull())
		modelRef_ = value["ModelRef"].asString();

}

std::string CreateModelResult::getDescription()const
{
	return description_;
}

std::string CreateModelResult::getModelName()const
{
	return modelName_;
}

std::string CreateModelResult::getCreatedTime()const
{
	return createdTime_;
}

std::string CreateModelResult::getModifiedTime()const
{
	return modifiedTime_;
}

std::string CreateModelResult::getSchema()const
{
	return schema_;
}

std::string CreateModelResult::getRegionId()const
{
	return regionId_;
}

std::string CreateModelResult::getModelId()const
{
	return modelId_;
}

std::string CreateModelResult::getModelRef()const
{
	return modelRef_;
}

std::string CreateModelResult::getGroupId()const
{
	return groupId_;
}

