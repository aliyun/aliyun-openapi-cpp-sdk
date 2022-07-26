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

#include <alibabacloud/oos/model/ListApplicationGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

ListApplicationGroupsResult::ListApplicationGroupsResult() :
	ServiceResult()
{}

ListApplicationGroupsResult::ListApplicationGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationGroupsResult::~ListApplicationGroupsResult()
{}

void ListApplicationGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationGroupsNode = value["ApplicationGroups"]["ApplicationGroup"];
	for (auto valueApplicationGroupsApplicationGroup : allApplicationGroupsNode)
	{
		ApplicationGroup applicationGroupsObject;
		if(!valueApplicationGroupsApplicationGroup["CmsGroupId"].isNull())
			applicationGroupsObject.cmsGroupId = valueApplicationGroupsApplicationGroup["CmsGroupId"].asString();
		if(!valueApplicationGroupsApplicationGroup["DeployRegionId"].isNull())
			applicationGroupsObject.deployRegionId = valueApplicationGroupsApplicationGroup["DeployRegionId"].asString();
		if(!valueApplicationGroupsApplicationGroup["UpdateDate"].isNull())
			applicationGroupsObject.updateDate = valueApplicationGroupsApplicationGroup["UpdateDate"].asString();
		if(!valueApplicationGroupsApplicationGroup["Description"].isNull())
			applicationGroupsObject.description = valueApplicationGroupsApplicationGroup["Description"].asString();
		if(!valueApplicationGroupsApplicationGroup["ImportTagKey"].isNull())
			applicationGroupsObject.importTagKey = valueApplicationGroupsApplicationGroup["ImportTagKey"].asString();
		if(!valueApplicationGroupsApplicationGroup["ApplicationName"].isNull())
			applicationGroupsObject.applicationName = valueApplicationGroupsApplicationGroup["ApplicationName"].asString();
		if(!valueApplicationGroupsApplicationGroup["ImportTagValue"].isNull())
			applicationGroupsObject.importTagValue = valueApplicationGroupsApplicationGroup["ImportTagValue"].asString();
		if(!valueApplicationGroupsApplicationGroup["Name"].isNull())
			applicationGroupsObject.name = valueApplicationGroupsApplicationGroup["Name"].asString();
		if(!valueApplicationGroupsApplicationGroup["CreateDate"].isNull())
			applicationGroupsObject.createDate = valueApplicationGroupsApplicationGroup["CreateDate"].asString();
		if(!valueApplicationGroupsApplicationGroup["Status"].isNull())
			applicationGroupsObject.status = valueApplicationGroupsApplicationGroup["Status"].asString();
		if(!valueApplicationGroupsApplicationGroup["DeployParameters"].isNull())
			applicationGroupsObject.deployParameters = valueApplicationGroupsApplicationGroup["DeployParameters"].asString();
		if(!valueApplicationGroupsApplicationGroup["StatusReason"].isNull())
			applicationGroupsObject.statusReason = valueApplicationGroupsApplicationGroup["StatusReason"].asString();
		applicationGroups_.push_back(applicationGroupsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::vector<ListApplicationGroupsResult::ApplicationGroup> ListApplicationGroupsResult::getApplicationGroups()const
{
	return applicationGroups_;
}

std::string ListApplicationGroupsResult::getNextToken()const
{
	return nextToken_;
}

int ListApplicationGroupsResult::getMaxResults()const
{
	return maxResults_;
}

