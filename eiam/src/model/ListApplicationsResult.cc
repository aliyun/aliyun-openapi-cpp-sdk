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

#include <alibabacloud/eiam/model/ListApplicationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListApplicationsResult::ListApplicationsResult() :
	ServiceResult()
{}

ListApplicationsResult::ListApplicationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationsResult::~ListApplicationsResult()
{}

void ListApplicationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationsNode = value["Applications"]["Application"];
	for (auto valueApplicationsApplication : allApplicationsNode)
	{
		Application applicationsObject;
		if(!valueApplicationsApplication["InstanceId"].isNull())
			applicationsObject.instanceId = valueApplicationsApplication["InstanceId"].asString();
		if(!valueApplicationsApplication["ApplicationId"].isNull())
			applicationsObject.applicationId = valueApplicationsApplication["ApplicationId"].asString();
		if(!valueApplicationsApplication["ClientId"].isNull())
			applicationsObject.clientId = valueApplicationsApplication["ClientId"].asString();
		if(!valueApplicationsApplication["LogoUrl"].isNull())
			applicationsObject.logoUrl = valueApplicationsApplication["LogoUrl"].asString();
		if(!valueApplicationsApplication["ApplicationName"].isNull())
			applicationsObject.applicationName = valueApplicationsApplication["ApplicationName"].asString();
		if(!valueApplicationsApplication["Description"].isNull())
			applicationsObject.description = valueApplicationsApplication["Description"].asString();
		if(!valueApplicationsApplication["SsoType"].isNull())
			applicationsObject.ssoType = valueApplicationsApplication["SsoType"].asString();
		if(!valueApplicationsApplication["ApplicationSourceType"].isNull())
			applicationsObject.applicationSourceType = valueApplicationsApplication["ApplicationSourceType"].asString();
		if(!valueApplicationsApplication["Features"].isNull())
			applicationsObject.features = valueApplicationsApplication["Features"].asString();
		if(!valueApplicationsApplication["Status"].isNull())
			applicationsObject.status = valueApplicationsApplication["Status"].asString();
		if(!valueApplicationsApplication["CreateTime"].isNull())
			applicationsObject.createTime = std::stol(valueApplicationsApplication["CreateTime"].asString());
		if(!valueApplicationsApplication["UpdateTime"].isNull())
			applicationsObject.updateTime = std::stol(valueApplicationsApplication["UpdateTime"].asString());
		if(!valueApplicationsApplication["ServiceManaged"].isNull())
			applicationsObject.serviceManaged = valueApplicationsApplication["ServiceManaged"].asString() == "true";
		if(!valueApplicationsApplication["ManagedServiceCode"].isNull())
			applicationsObject.managedServiceCode = valueApplicationsApplication["ManagedServiceCode"].asString();
		if(!valueApplicationsApplication["ApplicationTemplateId"].isNull())
			applicationsObject.applicationTemplateId = valueApplicationsApplication["ApplicationTemplateId"].asString();
		if(!valueApplicationsApplication["M2MClientStatus"].isNull())
			applicationsObject.m2MClientStatus = valueApplicationsApplication["M2MClientStatus"].asString();
		if(!valueApplicationsApplication["ResourceServerStatus"].isNull())
			applicationsObject.resourceServerStatus = valueApplicationsApplication["ResourceServerStatus"].asString();
		if(!valueApplicationsApplication["ResourceServerIdentifier"].isNull())
			applicationsObject.resourceServerIdentifier = valueApplicationsApplication["ResourceServerIdentifier"].asString();
		applications_.push_back(applicationsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListApplicationsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListApplicationsResult::Application> ListApplicationsResult::getApplications()const
{
	return applications_;
}

