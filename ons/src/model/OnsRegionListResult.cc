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

#include <alibabacloud/ons/model/OnsRegionListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsRegionListResult::OnsRegionListResult() :
	ServiceResult()
{}

OnsRegionListResult::OnsRegionListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsRegionListResult::~OnsRegionListResult()
{}

void OnsRegionListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["RegionDo"];
	for (auto valueDataRegionDo : allDataNode)
	{
		RegionDo dataObject;
		if(!valueDataRegionDo["UpdateTime"].isNull())
			dataObject.updateTime = std::stol(valueDataRegionDo["UpdateTime"].asString());
		if(!valueDataRegionDo["RegionName"].isNull())
			dataObject.regionName = valueDataRegionDo["RegionName"].asString();
		if(!valueDataRegionDo["ChannelName"].isNull())
			dataObject.channelName = valueDataRegionDo["ChannelName"].asString();
		if(!valueDataRegionDo["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataRegionDo["CreateTime"].asString());
		if(!valueDataRegionDo["ChannelId"].isNull())
			dataObject.channelId = std::stoi(valueDataRegionDo["ChannelId"].asString());
		if(!valueDataRegionDo["Id"].isNull())
			dataObject.id = std::stol(valueDataRegionDo["Id"].asString());
		if(!valueDataRegionDo["OnsRegionId"].isNull())
			dataObject.onsRegionId = valueDataRegionDo["OnsRegionId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HelpUrl"].isNull())
		helpUrl_ = value["HelpUrl"].asString();

}

std::vector<OnsRegionListResult::RegionDo> OnsRegionListResult::getData()const
{
	return data_;
}

std::string OnsRegionListResult::getHelpUrl()const
{
	return helpUrl_;
}

