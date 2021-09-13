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

#include <alibabacloud/linkwan/model/ListNodeGroupsPacketStatResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

ListNodeGroupsPacketStatResult::ListNodeGroupsPacketStatResult() :
	ServiceResult()
{}

ListNodeGroupsPacketStatResult::ListNodeGroupsPacketStatResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNodeGroupsPacketStatResult::~ListNodeGroupsPacketStatResult()
{}

void ListNodeGroupsPacketStatResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["NodeGroupPacketStat"];
	for (auto valueDataNodeGroupPacketStat : allDataNode)
	{
		NodeGroupPacketStat dataObject;
		if(!valueDataNodeGroupPacketStat["NodeGroupId"].isNull())
			dataObject.nodeGroupId = valueDataNodeGroupPacketStat["NodeGroupId"].asString();
		if(!valueDataNodeGroupPacketStat["UplinkCount"].isNull())
			dataObject.uplinkCount = std::stoi(valueDataNodeGroupPacketStat["UplinkCount"].asString());
		if(!valueDataNodeGroupPacketStat["DownlinkCount"].isNull())
			dataObject.downlinkCount = std::stoi(valueDataNodeGroupPacketStat["DownlinkCount"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListNodeGroupsPacketStatResult::NodeGroupPacketStat> ListNodeGroupsPacketStatResult::getData()const
{
	return data_;
}

bool ListNodeGroupsPacketStatResult::getSuccess()const
{
	return success_;
}

