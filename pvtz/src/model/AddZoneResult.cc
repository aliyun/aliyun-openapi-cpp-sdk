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

#include <alibabacloud/pvtz/model/AddZoneResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Pvtz;
using namespace AlibabaCloud::Pvtz::Model;

AddZoneResult::AddZoneResult() :
	ServiceResult()
{}

AddZoneResult::AddZoneResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddZoneResult::~AddZoneResult()
{}

void AddZoneResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();
	if(!value["ZoneName"].isNull())
		zoneName_ = value["ZoneName"].asString();

}

std::string AddZoneResult::getZoneName()const
{
	return zoneName_;
}

std::string AddZoneResult::getZoneId()const
{
	return zoneId_;
}

bool AddZoneResult::getSuccess()const
{
	return success_;
}

