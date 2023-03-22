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

#include <alibabacloud/appstream-center/model/GetConnectionTicketResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Appstream_center;
using namespace AlibabaCloud::Appstream_center::Model;

GetConnectionTicketResult::GetConnectionTicketResult() :
	ServiceResult()
{}

GetConnectionTicketResult::GetConnectionTicketResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetConnectionTicketResult::~GetConnectionTicketResult()
{}

void GetConnectionTicketResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["TaskStatus"].isNull())
		taskStatus_ = value["TaskStatus"].asString();
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["BizRegionId"].isNull())
		bizRegionId_ = value["BizRegionId"].asString();
	if(!value["Ticket"].isNull())
		ticket_ = value["Ticket"].asString();
	if(!value["AppInstanceGroupId"].isNull())
		appInstanceGroupId_ = value["AppInstanceGroupId"].asString();
	if(!value["AppInstanceId"].isNull())
		appInstanceId_ = value["AppInstanceId"].asString();
	if(!value["OsType"].isNull())
		osType_ = value["OsType"].asString();

}

std::string GetConnectionTicketResult::getTicket()const
{
	return ticket_;
}

std::string GetConnectionTicketResult::getAppInstanceId()const
{
	return appInstanceId_;
}

std::string GetConnectionTicketResult::getTaskId()const
{
	return taskId_;
}

std::string GetConnectionTicketResult::getBizRegionId()const
{
	return bizRegionId_;
}

std::string GetConnectionTicketResult::getOsType()const
{
	return osType_;
}

std::string GetConnectionTicketResult::getAppInstanceGroupId()const
{
	return appInstanceGroupId_;
}

std::string GetConnectionTicketResult::getTaskStatus()const
{
	return taskStatus_;
}

