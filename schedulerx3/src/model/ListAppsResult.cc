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

#include <alibabacloud/schedulerx3/model/ListAppsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SchedulerX3;
using namespace AlibabaCloud::SchedulerX3::Model;

ListAppsResult::ListAppsResult() :
	ServiceResult()
{}

ListAppsResult::ListAppsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppsResult::~ListAppsResult()
{}

void ListAppsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allRecordsNode = dataNode["Records"]["Record"];
	for (auto dataNodeRecordsRecord : allRecordsNode)
	{
		Data::Record recordObject;
		if(!dataNodeRecordsRecord["Id"].isNull())
			recordObject.id = std::stol(dataNodeRecordsRecord["Id"].asString());
		if(!dataNodeRecordsRecord["AppName"].isNull())
			recordObject.appName = dataNodeRecordsRecord["AppName"].asString();
		if(!dataNodeRecordsRecord["AccessToken"].isNull())
			recordObject.accessToken = dataNodeRecordsRecord["AccessToken"].asString();
		if(!dataNodeRecordsRecord["Title"].isNull())
			recordObject.title = dataNodeRecordsRecord["Title"].asString();
		if(!dataNodeRecordsRecord["Creator"].isNull())
			recordObject.creator = dataNodeRecordsRecord["Creator"].asString();
		if(!dataNodeRecordsRecord["Updater"].isNull())
			recordObject.updater = dataNodeRecordsRecord["Updater"].asString();
		if(!dataNodeRecordsRecord["Leader"].isNull())
			recordObject.leader = dataNodeRecordsRecord["Leader"].asString();
		if(!dataNodeRecordsRecord["Calendar"].isNull())
			recordObject.calendar = dataNodeRecordsRecord["Calendar"].asString();
		if(!dataNodeRecordsRecord["MaxJobs"].isNull())
			recordObject.maxJobs = std::stoi(dataNodeRecordsRecord["MaxJobs"].asString());
		if(!dataNodeRecordsRecord["MaxConcurrency"].isNull())
			recordObject.maxConcurrency = std::stoi(dataNodeRecordsRecord["MaxConcurrency"].asString());
		if(!dataNodeRecordsRecord["NoticeConfig"].isNull())
			recordObject.noticeConfig = dataNodeRecordsRecord["NoticeConfig"].asString();
		if(!dataNodeRecordsRecord["NoticeContacts"].isNull())
			recordObject.noticeContacts = dataNodeRecordsRecord["NoticeContacts"].asString();
		if(!dataNodeRecordsRecord["JobNum"].isNull())
			recordObject.jobNum = std::stoi(dataNodeRecordsRecord["JobNum"].asString());
		if(!dataNodeRecordsRecord["ExecutorNum"].isNull())
			recordObject.executorNum = std::stol(dataNodeRecordsRecord["ExecutorNum"].asString());
		if(!dataNodeRecordsRecord["EnableLog"].isNull())
			recordObject.enableLog = dataNodeRecordsRecord["EnableLog"].asString() == "true";
		data_.records.push_back(recordObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListAppsResult::getMessage()const
{
	return message_;
}

ListAppsResult::Data ListAppsResult::getData()const
{
	return data_;
}

int ListAppsResult::getCode()const
{
	return code_;
}

bool ListAppsResult::getSuccess()const
{
	return success_;
}

