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

#include <alibabacloud/linkwan/model/GetNodeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

GetNodeResult::GetNodeResult() :
	ServiceResult()
{}

GetNodeResult::GetNodeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNodeResult::~GetNodeResult()
{}

void GetNodeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["DevEui"].isNull())
		data_.devEui = dataNode["DevEui"].asString();
	if(!dataNode["DevAddr"].isNull())
		data_.devAddr = dataNode["DevAddr"].asString();
	if(!dataNode["ClassMode"].isNull())
		data_.classMode = dataNode["ClassMode"].asString();
	if(!dataNode["LastJoinMillis"].isNull())
		data_.lastJoinMillis = std::stol(dataNode["LastJoinMillis"].asString());
	if(!dataNode["BoundMillis"].isNull())
		data_.boundMillis = std::stol(dataNode["BoundMillis"].asString());
	if(!dataNode["AuthTypes"].isNull())
		data_.authTypes = dataNode["AuthTypes"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetNodeResult::Data GetNodeResult::getData()const
{
	return data_;
}

bool GetNodeResult::getSuccess()const
{
	return success_;
}

