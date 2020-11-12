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

#include <alibabacloud/openanalytics-open/model/ListVirtualClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Openanalytics_open;
using namespace AlibabaCloud::Openanalytics_open::Model;

ListVirtualClustersResult::ListVirtualClustersResult() :
	ServiceResult()
{}

ListVirtualClustersResult::ListVirtualClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVirtualClustersResult::~ListVirtualClustersResult()
{}

void ListVirtualClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["CreateTime"].isNull())
			dataObject.createTime = valueDataDataItem["CreateTime"].asString();
		if(!valueDataDataItem["CreatorId"].isNull())
			dataObject.creatorId = valueDataDataItem["CreatorId"].asString();
		if(!valueDataDataItem["Name"].isNull())
			dataObject.name = valueDataDataItem["Name"].asString();
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = valueDataDataItem["Status"].asString();
		if(!valueDataDataItem["Type"].isNull())
			dataObject.type = valueDataDataItem["Type"].asString();
		if(!valueDataDataItem["InstanceId"].isNull())
			dataObject.instanceId = valueDataDataItem["InstanceId"].asString();
		if(!valueDataDataItem["MinCpu"].isNull())
			dataObject.minCpu = valueDataDataItem["MinCpu"].asString();
		if(!valueDataDataItem["MaxCpu"].isNull())
			dataObject.maxCpu = valueDataDataItem["MaxCpu"].asString();
		if(!valueDataDataItem["ChargeType"].isNull())
			dataObject.chargeType = valueDataDataItem["ChargeType"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<ListVirtualClustersResult::DataItem> ListVirtualClustersResult::getData()const
{
	return data_;
}

