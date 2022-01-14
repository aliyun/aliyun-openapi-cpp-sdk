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

#include <alibabacloud/resourcemanager/model/MoveResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

MoveResourcesResult::MoveResourcesResult() :
	ServiceResult()
{}

MoveResourcesResult::MoveResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MoveResourcesResult::~MoveResourcesResult()
{}

void MoveResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResponsesNode = value["Responses"]["response"];
	for (auto valueResponsesresponse : allResponsesNode)
	{
		Response responsesObject;
		if(!valueResponsesresponse["Service"].isNull())
			responsesObject.service = valueResponsesresponse["Service"].asString();
		if(!valueResponsesresponse["ResourceId"].isNull())
			responsesObject.resourceId = valueResponsesresponse["ResourceId"].asString();
		if(!valueResponsesresponse["ResourceType"].isNull())
			responsesObject.resourceType = valueResponsesresponse["ResourceType"].asString();
		if(!valueResponsesresponse["RequestId"].isNull())
			responsesObject.requestId = valueResponsesresponse["RequestId"].asString();
		if(!valueResponsesresponse["Status"].isNull())
			responsesObject.status = valueResponsesresponse["Status"].asString();
		if(!valueResponsesresponse["ErrorCode"].isNull())
			responsesObject.errorCode = valueResponsesresponse["ErrorCode"].asString();
		if(!valueResponsesresponse["ErrorMsg"].isNull())
			responsesObject.errorMsg = valueResponsesresponse["ErrorMsg"].asString();
		if(!valueResponsesresponse["RegionId"].isNull())
			responsesObject.regionId = valueResponsesresponse["RegionId"].asString();
		responses_.push_back(responsesObject);
	}

}

std::vector<MoveResourcesResult::Response> MoveResourcesResult::getResponses()const
{
	return responses_;
}

