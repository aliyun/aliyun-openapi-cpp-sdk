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

#include <alibabacloud/vcs/model/GetMonitorResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

GetMonitorResultResult::GetMonitorResultResult() :
	ServiceResult()
{}

GetMonitorResultResult::GetMonitorResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMonitorResultResult::~GetMonitorResultResult()
{}

void GetMonitorResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecordsNode = value["Records"]["RecordsItem"];
	for (auto valueRecordsRecordsItem : allRecordsNode)
	{
		RecordsItem recordsObject;
		if(!valueRecordsRecordsItem["GbId"].isNull())
			recordsObject.gbId = valueRecordsRecordsItem["GbId"].asString();
		if(!valueRecordsRecordsItem["ShotTime"].isNull())
			recordsObject.shotTime = valueRecordsRecordsItem["ShotTime"].asString();
		if(!valueRecordsRecordsItem["MonitorPicUrl"].isNull())
			recordsObject.monitorPicUrl = valueRecordsRecordsItem["MonitorPicUrl"].asString();
		if(!valueRecordsRecordsItem["ShotPicUrl"].isNull())
			recordsObject.shotPicUrl = valueRecordsRecordsItem["ShotPicUrl"].asString();
		records_.push_back(recordsObject);
	}
	auto dataNode = value["Data"];
	if(!dataNode["MaxRecordId"].isNull())
		data_.maxRecordId = dataNode["MaxRecordId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Score"].isNull())
		score_ = value["Score"].asString();
	if(!value["LeftTopX"].isNull())
		leftTopX_ = value["LeftTopX"].asString();
	if(!value["LeftTopY"].isNull())
		leftTopY_ = value["LeftTopY"].asString();
	if(!value["RightBottomX"].isNull())
		rightBottomX_ = value["RightBottomX"].asString();
	if(!value["RightBottomY"].isNull())
		rightBottomY_ = value["RightBottomY"].asString();

}

std::string GetMonitorResultResult::getScore()const
{
	return score_;
}

std::string GetMonitorResultResult::getMessage()const
{
	return message_;
}

std::string GetMonitorResultResult::getRightBottomX()const
{
	return rightBottomX_;
}

std::string GetMonitorResultResult::getRightBottomY()const
{
	return rightBottomY_;
}

GetMonitorResultResult::Data GetMonitorResultResult::getData()const
{
	return data_;
}

std::string GetMonitorResultResult::getLeftTopY()const
{
	return leftTopY_;
}

std::vector<GetMonitorResultResult::RecordsItem> GetMonitorResultResult::getRecords()const
{
	return records_;
}

std::string GetMonitorResultResult::getCode()const
{
	return code_;
}

std::string GetMonitorResultResult::getLeftTopX()const
{
	return leftTopX_;
}

