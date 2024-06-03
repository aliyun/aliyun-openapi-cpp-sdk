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

#include <alibabacloud/eflo/model/ListNodeInfosForPodResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

ListNodeInfosForPodResult::ListNodeInfosForPodResult() :
	ServiceResult()
{}

ListNodeInfosForPodResult::ListNodeInfosForPodResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNodeInfosForPodResult::~ListNodeInfosForPodResult()
{}

void ListNodeInfosForPodResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContentNode = value["Content"]["ContentItem"];
	for (auto valueContentContentItem : allContentNode)
	{
		ContentItem contentObject;
		if(!valueContentContentItem["RegionId"].isNull())
			contentObject.regionId = valueContentContentItem["RegionId"].asString();
		if(!valueContentContentItem["ZoneId"].isNull())
			contentObject.zoneId = valueContentContentItem["ZoneId"].asString();
		if(!valueContentContentItem["ClusterId"].isNull())
			contentObject.clusterId = valueContentContentItem["ClusterId"].asString();
		if(!valueContentContentItem["VpcId"].isNull())
			contentObject.vpcId = valueContentContentItem["VpcId"].asString();
		if(!valueContentContentItem["NodeId"].isNull())
			contentObject.nodeId = valueContentContentItem["NodeId"].asString();
		if(!valueContentContentItem["LeniQuota"].isNull())
			contentObject.leniQuota = std::stoi(valueContentContentItem["LeniQuota"].asString());
		if(!valueContentContentItem["LniSipQuota"].isNull())
			contentObject.lniSipQuota = std::stoi(valueContentContentItem["LniSipQuota"].asString());
		if(!valueContentContentItem["LeniSipQuota"].isNull())
			contentObject.leniSipQuota = std::stoi(valueContentContentItem["LeniSipQuota"].asString());
		if(!valueContentContentItem["HdeniQuota"].isNull())
			contentObject.hdeniQuota = std::stoi(valueContentContentItem["HdeniQuota"].asString());
		auto allVSwitches = value["VSwitches"]["VSwitche"];
		for (auto value : allVSwitches)
			contentObject.vSwitches.push_back(value.asString());
		content_.push_back(contentObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListNodeInfosForPodResult::getMessage()const
{
	return message_;
}

std::vector<ListNodeInfosForPodResult::ContentItem> ListNodeInfosForPodResult::getContent()const
{
	return content_;
}

int ListNodeInfosForPodResult::getCode()const
{
	return code_;
}

