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

#include <alibabacloud/eiam/model/ListApplicationsForUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListApplicationsForUserResult::ListApplicationsForUserResult() :
	ServiceResult()
{}

ListApplicationsForUserResult::ListApplicationsForUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationsForUserResult::~ListApplicationsForUserResult()
{}

void ListApplicationsForUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationsNode = value["Applications"]["Application"];
	for (auto valueApplicationsApplication : allApplicationsNode)
	{
		Application applicationsObject;
		if(!valueApplicationsApplication["ApplicationId"].isNull())
			applicationsObject.applicationId = valueApplicationsApplication["ApplicationId"].asString();
		if(!valueApplicationsApplication["HasDirectAuthorization"].isNull())
			applicationsObject.hasDirectAuthorization = valueApplicationsApplication["HasDirectAuthorization"].asString() == "true";
		if(!valueApplicationsApplication["HasInheritAuthorization"].isNull())
			applicationsObject.hasInheritAuthorization = valueApplicationsApplication["HasInheritAuthorization"].asString() == "true";
		applications_.push_back(applicationsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListApplicationsForUserResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListApplicationsForUserResult::Application> ListApplicationsForUserResult::getApplications()const
{
	return applications_;
}

