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

#include <alibabacloud/config/model/GetAggregateResourceComplianceTimelineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

GetAggregateResourceComplianceTimelineResult::GetAggregateResourceComplianceTimelineResult() :
	ServiceResult()
{}

GetAggregateResourceComplianceTimelineResult::GetAggregateResourceComplianceTimelineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAggregateResourceComplianceTimelineResult::~GetAggregateResourceComplianceTimelineResult()
{}

void GetAggregateResourceComplianceTimelineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resourceComplianceTimelineNode = value["ResourceComplianceTimeline"];
	if(!resourceComplianceTimelineNode["NextToken"].isNull())
		resourceComplianceTimeline_.nextToken = resourceComplianceTimelineNode["NextToken"].asString();
	if(!resourceComplianceTimelineNode["MaxResults"].isNull())
		resourceComplianceTimeline_.maxResults = std::stoi(resourceComplianceTimelineNode["MaxResults"].asString());
	auto allComplianceListNode = resourceComplianceTimelineNode["ComplianceList"]["ComplianceListItem"];
	for (auto resourceComplianceTimelineNodeComplianceListComplianceListItem : allComplianceListNode)
	{
		ResourceComplianceTimeline::ComplianceListItem complianceListItemObject;
		if(!resourceComplianceTimelineNodeComplianceListComplianceListItem["Tags"].isNull())
			complianceListItemObject.tags = resourceComplianceTimelineNodeComplianceListComplianceListItem["Tags"].asString();
		if(!resourceComplianceTimelineNodeComplianceListComplianceListItem["AccountId"].isNull())
			complianceListItemObject.accountId = resourceComplianceTimelineNodeComplianceListComplianceListItem["AccountId"].asString();
		if(!resourceComplianceTimelineNodeComplianceListComplianceListItem["AvailabilityZone"].isNull())
			complianceListItemObject.availabilityZone = resourceComplianceTimelineNodeComplianceListComplianceListItem["AvailabilityZone"].asString();
		if(!resourceComplianceTimelineNodeComplianceListComplianceListItem["ResourceType"].isNull())
			complianceListItemObject.resourceType = resourceComplianceTimelineNodeComplianceListComplianceListItem["ResourceType"].asString();
		if(!resourceComplianceTimelineNodeComplianceListComplianceListItem["ResourceCreateTime"].isNull())
			complianceListItemObject.resourceCreateTime = std::stol(resourceComplianceTimelineNodeComplianceListComplianceListItem["ResourceCreateTime"].asString());
		if(!resourceComplianceTimelineNodeComplianceListComplianceListItem["Region"].isNull())
			complianceListItemObject.region = resourceComplianceTimelineNodeComplianceListComplianceListItem["Region"].asString();
		if(!resourceComplianceTimelineNodeComplianceListComplianceListItem["Configuration"].isNull())
			complianceListItemObject.configuration = resourceComplianceTimelineNodeComplianceListComplianceListItem["Configuration"].asString();
		if(!resourceComplianceTimelineNodeComplianceListComplianceListItem["CaptureTime"].isNull())
			complianceListItemObject.captureTime = std::stol(resourceComplianceTimelineNodeComplianceListComplianceListItem["CaptureTime"].asString());
		if(!resourceComplianceTimelineNodeComplianceListComplianceListItem["ConfigurationDiff"].isNull())
			complianceListItemObject.configurationDiff = resourceComplianceTimelineNodeComplianceListComplianceListItem["ConfigurationDiff"].asString();
		if(!resourceComplianceTimelineNodeComplianceListComplianceListItem["ResourceId"].isNull())
			complianceListItemObject.resourceId = resourceComplianceTimelineNodeComplianceListComplianceListItem["ResourceId"].asString();
		if(!resourceComplianceTimelineNodeComplianceListComplianceListItem["ResourceName"].isNull())
			complianceListItemObject.resourceName = resourceComplianceTimelineNodeComplianceListComplianceListItem["ResourceName"].asString();
		if(!resourceComplianceTimelineNodeComplianceListComplianceListItem["ResourceStatus"].isNull())
			complianceListItemObject.resourceStatus = resourceComplianceTimelineNodeComplianceListComplianceListItem["ResourceStatus"].asString();
		resourceComplianceTimeline_.complianceList.push_back(complianceListItemObject);
	}

}

GetAggregateResourceComplianceTimelineResult::ResourceComplianceTimeline GetAggregateResourceComplianceTimelineResult::getResourceComplianceTimeline()const
{
	return resourceComplianceTimeline_;
}

