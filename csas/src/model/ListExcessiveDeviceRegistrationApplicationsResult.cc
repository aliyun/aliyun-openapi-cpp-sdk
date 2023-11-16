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

#include <alibabacloud/csas/model/ListExcessiveDeviceRegistrationApplicationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListExcessiveDeviceRegistrationApplicationsResult::ListExcessiveDeviceRegistrationApplicationsResult() :
	ServiceResult()
{}

ListExcessiveDeviceRegistrationApplicationsResult::ListExcessiveDeviceRegistrationApplicationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListExcessiveDeviceRegistrationApplicationsResult::~ListExcessiveDeviceRegistrationApplicationsResult()
{}

void ListExcessiveDeviceRegistrationApplicationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationsNode = value["Applications"]["dataList"];
	for (auto valueApplicationsdataList : allApplicationsNode)
	{
		DataList applicationsObject;
		if(!valueApplicationsdataList["DeviceTag"].isNull())
			applicationsObject.deviceTag = valueApplicationsdataList["DeviceTag"].asString();
		if(!valueApplicationsdataList["DeviceType"].isNull())
			applicationsObject.deviceType = valueApplicationsdataList["DeviceType"].asString();
		if(!valueApplicationsdataList["Hostname"].isNull())
			applicationsObject.hostname = valueApplicationsdataList["Hostname"].asString();
		if(!valueApplicationsdataList["Username"].isNull())
			applicationsObject.username = valueApplicationsdataList["Username"].asString();
		if(!valueApplicationsdataList["SaseUserId"].isNull())
			applicationsObject.saseUserId = valueApplicationsdataList["SaseUserId"].asString();
		if(!valueApplicationsdataList["Department"].isNull())
			applicationsObject.department = valueApplicationsdataList["Department"].asString();
		if(!valueApplicationsdataList["Mac"].isNull())
			applicationsObject.mac = valueApplicationsdataList["Mac"].asString();
		if(!valueApplicationsdataList["IsUsed"].isNull())
			applicationsObject.isUsed = valueApplicationsdataList["IsUsed"].asString() == "true";
		if(!valueApplicationsdataList["Status"].isNull())
			applicationsObject.status = valueApplicationsdataList["Status"].asString();
		if(!valueApplicationsdataList["CreateTime"].isNull())
			applicationsObject.createTime = valueApplicationsdataList["CreateTime"].asString();
		if(!valueApplicationsdataList["Description"].isNull())
			applicationsObject.description = valueApplicationsdataList["Description"].asString();
		if(!valueApplicationsdataList["ApplicationId"].isNull())
			applicationsObject.applicationId = valueApplicationsdataList["ApplicationId"].asString();
		applications_.push_back(applicationsObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stol(value["TotalNum"].asString());

}

long ListExcessiveDeviceRegistrationApplicationsResult::getTotalNum()const
{
	return totalNum_;
}

std::vector<ListExcessiveDeviceRegistrationApplicationsResult::DataList> ListExcessiveDeviceRegistrationApplicationsResult::getApplications()const
{
	return applications_;
}

