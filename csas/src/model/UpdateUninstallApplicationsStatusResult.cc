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

#include <alibabacloud/csas/model/UpdateUninstallApplicationsStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

UpdateUninstallApplicationsStatusResult::UpdateUninstallApplicationsStatusResult() :
	ServiceResult()
{}

UpdateUninstallApplicationsStatusResult::UpdateUninstallApplicationsStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateUninstallApplicationsStatusResult::~UpdateUninstallApplicationsStatusResult()
{}

void UpdateUninstallApplicationsStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationsNode = value["Applications"]["data"];
	for (auto valueApplicationsdata : allApplicationsNode)
	{
		Data applicationsObject;
		if(!valueApplicationsdata["DevTag"].isNull())
			applicationsObject.devTag = valueApplicationsdata["DevTag"].asString();
		if(!valueApplicationsdata["DevType"].isNull())
			applicationsObject.devType = valueApplicationsdata["DevType"].asString();
		if(!valueApplicationsdata["Mac"].isNull())
			applicationsObject.mac = valueApplicationsdata["Mac"].asString();
		if(!valueApplicationsdata["Hostname"].isNull())
			applicationsObject.hostname = valueApplicationsdata["Hostname"].asString();
		if(!valueApplicationsdata["Username"].isNull())
			applicationsObject.username = valueApplicationsdata["Username"].asString();
		if(!valueApplicationsdata["SaseUserId"].isNull())
			applicationsObject.saseUserId = valueApplicationsdata["SaseUserId"].asString();
		if(!valueApplicationsdata["Department"].isNull())
			applicationsObject.department = valueApplicationsdata["Department"].asString();
		if(!valueApplicationsdata["Reason"].isNull())
			applicationsObject.reason = valueApplicationsdata["Reason"].asString();
		if(!valueApplicationsdata["Status"].isNull())
			applicationsObject.status = valueApplicationsdata["Status"].asString();
		if(!valueApplicationsdata["ApplicationId"].isNull())
			applicationsObject.applicationId = valueApplicationsdata["ApplicationId"].asString();
		if(!valueApplicationsdata["IsUninstall"].isNull())
			applicationsObject.isUninstall = valueApplicationsdata["IsUninstall"].asString() == "true";
		if(!valueApplicationsdata["IdpName"].isNull())
			applicationsObject.idpName = valueApplicationsdata["IdpName"].asString();
		if(!valueApplicationsdata["CreateTime"].isNull())
			applicationsObject.createTime = valueApplicationsdata["CreateTime"].asString();
		applications_.push_back(applicationsObject);
	}

}

std::vector<UpdateUninstallApplicationsStatusResult::Data> UpdateUninstallApplicationsStatusResult::getApplications()const
{
	return applications_;
}

