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

#include <alibabacloud/schedulerx3/model/CreateClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SchedulerX3;
using namespace AlibabaCloud::SchedulerX3::Model;

CreateClusterResult::CreateClusterResult() :
	ServiceResult()
{}

CreateClusterResult::CreateClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateClusterResult::~CreateClusterResult()
{}

void CreateClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["OrderId"].isNull())
		data_.orderId = std::stol(dataNode["OrderId"].asString());
	if(!dataNode["ClusterId"].isNull())
		data_.clusterId = dataNode["ClusterId"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CreateClusterResult::getMessage()const
{
	return message_;
}

CreateClusterResult::Data CreateClusterResult::getData()const
{
	return data_;
}

std::string CreateClusterResult::getErrorCode()const
{
	return errorCode_;
}

int CreateClusterResult::getCode()const
{
	return code_;
}

bool CreateClusterResult::getSuccess()const
{
	return success_;
}

