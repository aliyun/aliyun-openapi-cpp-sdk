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

#include <alibabacloud/elasticsearch/model/CreateLogstashResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

CreateLogstashResult::CreateLogstashResult() :
	ServiceResult()
{}

CreateLogstashResult::CreateLogstashResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateLogstashResult::~CreateLogstashResult()
{}

void CreateLogstashResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["status"].isNull())
		result_.status = resultNode["status"].asString();
	if(!resultNode["description"].isNull())
		result_.description = resultNode["description"].asString();
	if(!resultNode["resourceGroupId"].isNull())
		result_.resourceGroupId = resultNode["resourceGroupId"].asString();
	if(!resultNode["endTime"].isNull())
		result_.endTime = std::stol(resultNode["endTime"].asString());
	if(!resultNode["instanceId"].isNull())
		result_.instanceId = resultNode["instanceId"].asString();
	if(!resultNode["config"].isNull())
		result_.config = resultNode["config"].asString();
	if(!resultNode["createdAt"].isNull())
		result_.createdAt = resultNode["createdAt"].asString();
	if(!resultNode["nodeAmount"].isNull())
		result_.nodeAmount = std::stol(resultNode["nodeAmount"].asString());
	if(!resultNode["updatedAt"].isNull())
		result_.updatedAt = resultNode["updatedAt"].asString();
	if(!resultNode["version"].isNull())
		result_.version = resultNode["version"].asString();
	if(!resultNode["dataNode"].isNull())
		result_.dataNode = resultNode["dataNode"].asString() == "true";
	if(!resultNode["paymentType"].isNull())
		result_.paymentType = resultNode["paymentType"].asString();
	if(!resultNode["protocol"].isNull())
		result_.protocol = resultNode["protocol"].asString();
	if(!resultNode["zoneCount"].isNull())
		result_.zoneCount = std::stol(resultNode["zoneCount"].asString());
	auto allendpointListNode = resultNode["endpointList"]["endpointListItem"];
	for (auto resultNodeendpointListendpointListItem : allendpointListNode)
	{
		Result::EndpointListItem endpointListItemObject;
		if(!resultNodeendpointListendpointListItem["host"].isNull())
			endpointListItemObject.host = resultNodeendpointListendpointListItem["host"].asString();
		if(!resultNodeendpointListendpointListItem["port"].isNull())
			endpointListItemObject.port = std::stol(resultNodeendpointListendpointListItem["port"].asString());
		if(!resultNodeendpointListendpointListItem["zoneId"].isNull())
			endpointListItemObject.zoneId = resultNodeendpointListendpointListItem["zoneId"].asString();
		result_.endpointList.push_back(endpointListItemObject);
	}
	auto allzoneInfosNode = resultNode["zoneInfos"]["zoneInfosItem"];
	for (auto resultNodezoneInfoszoneInfosItem : allzoneInfosNode)
	{
		Result::ZoneInfosItem zoneInfosItemObject;
		if(!resultNodezoneInfoszoneInfosItem["status"].isNull())
			zoneInfosItemObject.status = resultNodezoneInfoszoneInfosItem["status"].asString();
		if(!resultNodezoneInfoszoneInfosItem["zoneId"].isNull())
			zoneInfosItemObject.zoneId = resultNodezoneInfoszoneInfosItem["zoneId"].asString();
		result_.zoneInfos.push_back(zoneInfosItemObject);
	}
	auto alltagsNode = resultNode["tags"]["tagsItem"];
	for (auto resultNodetagstagsItem : alltagsNode)
	{
		Result::TagsItem tagsItemObject;
		if(!resultNodetagstagsItem["tagKey"].isNull())
			tagsItemObject.tagKey = resultNodetagstagsItem["tagKey"].asString();
		if(!resultNodetagstagsItem["tagValue"].isNull())
			tagsItemObject.tagValue = resultNodetagstagsItem["tagValue"].asString();
		result_.tags.push_back(tagsItemObject);
	}
	auto networkConfigNode = resultNode["networkConfig"];
	if(!networkConfigNode["type"].isNull())
		result_.networkConfig.type = networkConfigNode["type"].asString();
	if(!networkConfigNode["vpcId"].isNull())
		result_.networkConfig.vpcId = networkConfigNode["vpcId"].asString();
	if(!networkConfigNode["vsArea"].isNull())
		result_.networkConfig.vsArea = networkConfigNode["vsArea"].asString();
	if(!networkConfigNode["vswitchId"].isNull())
		result_.networkConfig.vswitchId = networkConfigNode["vswitchId"].asString();
	auto nodeSpecNode = resultNode["nodeSpec"];
	if(!nodeSpecNode["disk"].isNull())
		result_.nodeSpec.disk = std::stol(nodeSpecNode["disk"].asString());
	if(!nodeSpecNode["diskType"].isNull())
		result_.nodeSpec.diskType = nodeSpecNode["diskType"].asString();
	if(!nodeSpecNode["spec"].isNull())
		result_.nodeSpec.spec = nodeSpecNode["spec"].asString();

}

CreateLogstashResult::Result CreateLogstashResult::getResult()const
{
	return result_;
}

