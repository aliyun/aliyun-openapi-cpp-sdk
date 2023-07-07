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

#include <alibabacloud/oos/model/ListApplicationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

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
		if(!valueApplicationsApplication["Description"].isNull())
			applicationsObject.description = valueApplicationsApplication["Description"].asString();
		if(!valueApplicationsApplication["UpdateDate"].isNull())
			applicationsObject.updateDate = valueApplicationsApplication["UpdateDate"].asString();
		if(!valueApplicationsApplication["ResourceGroupId"].isNull())
			applicationsObject.resourceGroupId = valueApplicationsApplication["ResourceGroupId"].asString();
		if(!valueApplicationsApplication["Tags"].isNull())
			applicationsObject.tags = valueApplicationsApplication["Tags"].asString();
		if(!valueApplicationsApplication["Name"].isNull())
			applicationsObject.name = valueApplicationsApplication["Name"].asString();
		if(!valueApplicationsApplication["CreateDate"].isNull())
			applicationsObject.createDate = valueApplicationsApplication["CreateDate"].asString();
		if(!valueApplicationsApplication["ApplicationType"].isNull())
			applicationsObject.applicationType = valueApplicationsApplication["ApplicationType"].asString();
		applications_.push_back(applicationsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::vector<ListApplicationsResult::Application> ListApplicationsResult::getApplications()const
{
	return applications_;
}

std::string ListApplicationsResult::getNextToken()const
{
	return nextToken_;
}

int ListApplicationsResult::getMaxResults()const
{
	return maxResults_;
}

