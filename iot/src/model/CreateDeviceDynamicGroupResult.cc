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

#include <alibabacloud/iot/model/CreateDeviceDynamicGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

CreateDeviceDynamicGroupResult::CreateDeviceDynamicGroupResult() :
	ServiceResult()
{}

CreateDeviceDynamicGroupResult::CreateDeviceDynamicGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateDeviceDynamicGroupResult::~CreateDeviceDynamicGroupResult()
{}

void CreateDeviceDynamicGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["GroupId"].isNull())
		data_.groupId = dataNode["GroupId"].asString();
	if(!dataNode["UtcCreate"].isNull())
		data_.utcCreate = dataNode["UtcCreate"].asString();
	if(!dataNode["GroupName"].isNull())
		data_.groupName = dataNode["GroupName"].asString();
	if(!dataNode["GroupDesc"].isNull())
		data_.groupDesc = dataNode["GroupDesc"].asString();
	if(!dataNode["DynamicGroupExpression"].isNull())
		data_.dynamicGroupExpression = dataNode["DynamicGroupExpression"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

CreateDeviceDynamicGroupResult::Data CreateDeviceDynamicGroupResult::getData()const
{
	return data_;
}

std::string CreateDeviceDynamicGroupResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string CreateDeviceDynamicGroupResult::getCode()const
{
	return code_;
}

bool CreateDeviceDynamicGroupResult::getSuccess()const
{
	return success_;
}

