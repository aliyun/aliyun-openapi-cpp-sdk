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

#include <alibabacloud/sas/model/ListClusterCnnfStatusDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListClusterCnnfStatusDetailResult::ListClusterCnnfStatusDetailResult() :
	ServiceResult()
{}

ListClusterCnnfStatusDetailResult::ListClusterCnnfStatusDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterCnnfStatusDetailResult::~ListClusterCnnfStatusDetailResult()
{}

void ListClusterCnnfStatusDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["statusDetail"];
	for (auto valueDatastatusDetail : allDataNode)
	{
		StatusDetail dataObject;
		if(!valueDatastatusDetail["Uuid"].isNull())
			dataObject.uuid = valueDatastatusDetail["Uuid"].asString();
		if(!valueDatastatusDetail["ClusterId"].isNull())
			dataObject.clusterId = valueDatastatusDetail["ClusterId"].asString();
		if(!valueDatastatusDetail["InstanceId"].isNull())
			dataObject.instanceId = valueDatastatusDetail["InstanceId"].asString();
		if(!valueDatastatusDetail["MachineName"].isNull())
			dataObject.machineName = valueDatastatusDetail["MachineName"].asString();
		if(!valueDatastatusDetail["PluginName"].isNull())
			dataObject.pluginName = valueDatastatusDetail["PluginName"].asString();
		if(!valueDatastatusDetail["Installed"].isNull())
			dataObject.installed = valueDatastatusDetail["Installed"].asString() == "true";
		if(!valueDatastatusDetail["Status"].isNull())
			dataObject.status = valueDatastatusDetail["Status"].asString();
		if(!valueDatastatusDetail["InternetIp"].isNull())
			dataObject.internetIp = valueDatastatusDetail["InternetIp"].asString();
		if(!valueDatastatusDetail["IntranetIp"].isNull())
			dataObject.intranetIp = valueDatastatusDetail["IntranetIp"].asString();
		if(!valueDatastatusDetail["MachineType"].isNull())
			dataObject.machineType = std::stoi(valueDatastatusDetail["MachineType"].asString());
		if(!valueDatastatusDetail["PluginVersion"].isNull())
			dataObject.pluginVersion = valueDatastatusDetail["PluginVersion"].asString();
		if(!valueDatastatusDetail["InstanceRole"].isNull())
			dataObject.instanceRole = valueDatastatusDetail["InstanceRole"].asString();
		if(!valueDatastatusDetail["InvalidType"].isNull())
			dataObject.invalidType = valueDatastatusDetail["InvalidType"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<ListClusterCnnfStatusDetailResult::StatusDetail> ListClusterCnnfStatusDetailResult::getData()const
{
	return data_;
}

