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
	auto allData = value["Data"]["Instance"];
	for (auto value : allData)
	{
		Instance dataObject;
		if(!value["DrdsInstanceId"].isNull())
			dataObject.drdsInstanceId = value["DrdsInstanceId"].asString();
		if(!value["Type"].isNull())
			dataObject.type = value["Type"].asString();
		if(!value["RegionId"].isNull())
			dataObject.regionId = value["RegionId"].asString();
		if(!value["ZoneId"].isNull())
			dataObject.zoneId = value["ZoneId"].asString();
		if(!value["Description"].isNull())
			dataObject.description = value["Description"].asString();
		if(!value["NetworkType"].isNull())
			dataObject.networkType = value["NetworkType"].asString();
		if(!value["Status"].isNull())
			dataObject.status = value["Status"].asString();
		if(!value["CreateTime"].isNull())
			dataObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["Version"].isNull())
			dataObject.version = std::stol(value["Version"].asString());
		if(!value["VpcCloudInstanceId"].isNull())
			dataObject.vpcCloudInstanceId = value["VpcCloudInstanceId"].asString();
		auto allVips = value["Vips"]["Vip"];
		for (auto value : allVips)
		{
			Instance::Vip vipsObject;
			if(!value["IP"].isNull())
				vipsObject.iP = value["IP"].asString();
			if(!value["Port"].isNull())
				vipsObject.port = value["Port"].asString();
			if(!value["Type"].isNull())
				vipsObject.type = value["Type"].asString();
			if(!value["VpcId"].isNull())
				vipsObject.vpcId = value["VpcId"].asString();
			if(!value["VswitchId"].isNull())
				vipsObject.vswitchId = value["VswitchId"].asString();
			dataObject.vips.push_back(vipsObject);
		}
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

