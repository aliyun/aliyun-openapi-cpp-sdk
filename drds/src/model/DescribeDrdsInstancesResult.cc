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

#include <alibabacloud/drds/model/DescribeDrdsInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsInstancesResult::DescribeDrdsInstancesResult() :
	ServiceResult()
{}

DescribeDrdsInstancesResult::DescribeDrdsInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsInstancesResult::~DescribeDrdsInstancesResult()
{}

void DescribeDrdsInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Instance"];
	for (auto valueDataInstance : allDataNode)
	{
		Instance dataObject;
		if(!valueDataInstance["DrdsInstanceId"].isNull())
			dataObject.drdsInstanceId = valueDataInstance["DrdsInstanceId"].asString();
		if(!valueDataInstance["Type"].isNull())
			dataObject.type = valueDataInstance["Type"].asString();
		if(!valueDataInstance["RegionId"].isNull())
			dataObject.regionId = valueDataInstance["RegionId"].asString();
		if(!valueDataInstance["ZoneId"].isNull())
			dataObject.zoneId = valueDataInstance["ZoneId"].asString();
		if(!valueDataInstance["Description"].isNull())
			dataObject.description = valueDataInstance["Description"].asString();
		if(!valueDataInstance["NetworkType"].isNull())
			dataObject.networkType = valueDataInstance["NetworkType"].asString();
		if(!valueDataInstance["Status"].isNull())
			dataObject.status = valueDataInstance["Status"].asString();
		if(!valueDataInstance["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataInstance["CreateTime"].asString());
		if(!valueDataInstance["Version"].isNull())
			dataObject.version = std::stol(valueDataInstance["Version"].asString());
		if(!valueDataInstance["VpcCloudInstanceId"].isNull())
			dataObject.vpcCloudInstanceId = valueDataInstance["VpcCloudInstanceId"].asString();
		if(!valueDataInstance["InstRole"].isNull())
			dataObject.instRole = valueDataInstance["InstRole"].asString();
		if(!valueDataInstance["MasterInstId"].isNull())
			dataObject.masterInstId = valueDataInstance["MasterInstId"].asString();
		auto allVipsNode = allDataNode["Vips"]["Vip"];
		for (auto allDataNodeVipsVip : allVipsNode)
		{
			Instance::Vip vipsObject;
			if(!allDataNodeVipsVip["IP"].isNull())
				vipsObject.iP = allDataNodeVipsVip["IP"].asString();
			if(!allDataNodeVipsVip["Port"].isNull())
				vipsObject.port = allDataNodeVipsVip["Port"].asString();
			if(!allDataNodeVipsVip["Type"].isNull())
				vipsObject.type = allDataNodeVipsVip["Type"].asString();
			if(!allDataNodeVipsVip["VpcId"].isNull())
				vipsObject.vpcId = allDataNodeVipsVip["VpcId"].asString();
			if(!allDataNodeVipsVip["VswitchId"].isNull())
				vipsObject.vswitchId = allDataNodeVipsVip["VswitchId"].asString();
			dataObject.vips.push_back(vipsObject);
		}
		auto allSlaveInstId = value["SlaveInstId"]["instId"];
		for (auto value : allSlaveInstId)
			dataObject.slaveInstId.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeDrdsInstancesResult::Instance> DescribeDrdsInstancesResult::getData()const
{
	return data_;
}

bool DescribeDrdsInstancesResult::getSuccess()const
{
	return success_;
}

