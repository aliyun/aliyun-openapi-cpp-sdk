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

#include <alibabacloud/nlb/model/MoveResourceGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nlb;
using namespace AlibabaCloud::Nlb::Model;

MoveResourceGroupResult::MoveResourceGroupResult() :
	ServiceResult()
{}

MoveResourceGroupResult::MoveResourceGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MoveResourceGroupResult::~MoveResourceGroupResult()
{}

void MoveResourceGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["JobId"].isNull())
		data_.jobId = dataNode["JobId"].asString();
	if(!dataNode["ResourceId"].isNull())
		data_.resourceId = dataNode["ResourceId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

int MoveResourceGroupResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

MoveResourceGroupResult::Data MoveResourceGroupResult::getData()const
{
	return data_;
}

bool MoveResourceGroupResult::getSuccess()const
{
	return success_;
}

