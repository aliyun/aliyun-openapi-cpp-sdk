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

#include <alibabacloud/governance/model/ListEvaluationMetricDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Governance;
using namespace AlibabaCloud::Governance::Model;

ListEvaluationMetricDetailsResult::ListEvaluationMetricDetailsResult() :
	ServiceResult()
{}

ListEvaluationMetricDetailsResult::ListEvaluationMetricDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEvaluationMetricDetailsResult::~ListEvaluationMetricDetailsResult()
{}

void ListEvaluationMetricDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourcesNode = value["Resources"]["Resource"];
	for (auto valueResourcesResource : allResourcesNode)
	{
		Resource resourcesObject;
		if(!valueResourcesResource["RegionId"].isNull())
			resourcesObject.regionId = valueResourcesResource["RegionId"].asString();
		if(!valueResourcesResource["ResourceClassification"].isNull())
			resourcesObject.resourceClassification = valueResourcesResource["ResourceClassification"].asString();
		if(!valueResourcesResource["ResourceId"].isNull())
			resourcesObject.resourceId = valueResourcesResource["ResourceId"].asString();
		if(!valueResourcesResource["ResourceName"].isNull())
			resourcesObject.resourceName = valueResourcesResource["ResourceName"].asString();
		if(!valueResourcesResource["ResourceOwnerDisplayName"].isNull())
			resourcesObject.resourceOwnerDisplayName = valueResourcesResource["ResourceOwnerDisplayName"].asString();
		if(!valueResourcesResource["ResourceOwnerId"].isNull())
			resourcesObject.resourceOwnerId = std::stol(valueResourcesResource["ResourceOwnerId"].asString());
		if(!valueResourcesResource["ResourceType"].isNull())
			resourcesObject.resourceType = valueResourcesResource["ResourceType"].asString();
		auto allResourcePropertiesNode = valueResourcesResource["ResourceProperties"]["ResourcePropertie"];
		for (auto valueResourcesResourceResourcePropertiesResourcePropertie : allResourcePropertiesNode)
		{
			Resource::ResourcePropertie resourcePropertiesObject;
			if(!valueResourcesResourceResourcePropertiesResourcePropertie["PropertyName"].isNull())
				resourcePropertiesObject.propertyName = valueResourcesResourceResourcePropertiesResourcePropertie["PropertyName"].asString();
			if(!valueResourcesResourceResourcePropertiesResourcePropertie["PropertyValue"].isNull())
				resourcePropertiesObject.propertyValue = valueResourcesResourceResourcePropertiesResourcePropertie["PropertyValue"].asString();
			resourcesObject.resourceProperties.push_back(resourcePropertiesObject);
		}
		resources_.push_back(resourcesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListEvaluationMetricDetailsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListEvaluationMetricDetailsResult::Resource> ListEvaluationMetricDetailsResult::getResources()const
{
	return resources_;
}

