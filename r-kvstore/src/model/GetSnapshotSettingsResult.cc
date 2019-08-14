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

#include <alibabacloud/r-kvstore/model/GetSnapshotSettingsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

GetSnapshotSettingsResult::GetSnapshotSettingsResult() :
	ServiceResult()
{}

GetSnapshotSettingsResult::GetSnapshotSettingsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSnapshotSettingsResult::~GetSnapshotSettingsResult()
{}

void GetSnapshotSettingsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["BeginHour"].isNull())
		beginHour_ = std::stoi(value["BeginHour"].asString());
	if(!value["EndHour"].isNull())
		endHour_ = std::stoi(value["EndHour"].asString());
	if(!value["RetentionDay"].isNull())
		retentionDay_ = std::stoi(value["RetentionDay"].asString());
	if(!value["MaxAutoSnapshots"].isNull())
		maxAutoSnapshots_ = std::stoi(value["MaxAutoSnapshots"].asString());
	if(!value["MaxManualSnapshots"].isNull())
		maxManualSnapshots_ = std::stoi(value["MaxManualSnapshots"].asString());
	if(!value["DayList"].isNull())
		dayList_ = std::stoi(value["DayList"].asString());
	if(!value["NextTime"].isNull())
		nextTime_ = value["NextTime"].asString();

}

int GetSnapshotSettingsResult::getDayList()const
{
	return dayList_;
}

std::string GetSnapshotSettingsResult::getNextTime()const
{
	return nextTime_;
}

std::string GetSnapshotSettingsResult::getInstanceId()const
{
	return instanceId_;
}

int GetSnapshotSettingsResult::getMaxAutoSnapshots()const
{
	return maxAutoSnapshots_;
}

int GetSnapshotSettingsResult::getRetentionDay()const
{
	return retentionDay_;
}

int GetSnapshotSettingsResult::getBeginHour()const
{
	return beginHour_;
}

int GetSnapshotSettingsResult::getEndHour()const
{
	return endHour_;
}

int GetSnapshotSettingsResult::getMaxManualSnapshots()const
{
	return maxManualSnapshots_;
}

