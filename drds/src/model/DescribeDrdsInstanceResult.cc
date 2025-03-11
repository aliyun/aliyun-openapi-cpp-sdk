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

#include <alibabacloud/drds/model/DescribeDrdsInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsInstanceResult::DescribeDrdsInstanceResult() :
	ServiceResult()
{}

DescribeDrdsInstanceResult::DescribeDrdsInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsInstanceResult::~DescribeDrdsInstanceResult()
{}

void DescribeDrdsInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Type"].isNull())
		data_.type = dataNode["Type"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["VersionAction"].isNull())
		data_.versionAction = dataNode["VersionAction"].asString();
	if(!dataNode["StorageType"].isNull())
		data_.storageType = dataNode["StorageType"].asString();
	if(!dataNode["NetworkType"].isNull())
		data_.networkType = dataNode["NetworkType"].asString();
	if(!dataNode["Label"].isNull())
		data_.label = dataNode["Label"].asString();
	if(!dataNode["MysqlVersion"].isNull())
		data_.mysqlVersion = std::stoi(dataNode["MysqlVersion"].asString());
	if(!dataNode["InstanceSpec"].isNull())
		data_.instanceSpec = dataNode["InstanceSpec"].asString();
	if(!dataNode["VpcCloudInstanceId"].isNull())
		data_.vpcCloudInstanceId = dataNode["VpcCloudInstanceId"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["Version"].isNull())
		data_.version = std::stol(dataNode["Version"].asString());
	if(!dataNode["ExpireDate"].isNull())
		data_.expireDate = std::stol(dataNode["ExpireDate"].asString());
	if(!dataNode["MasterInstanceId"].isNull())
		data_.masterInstanceId = dataNode["MasterInstanceId"].asString();
	if(!dataNode["CommodityCode"].isNull())
		data_.commodityCode = dataNode["CommodityCode"].asString();
	if(!dataNode["MachineType"].isNull())
		data_.machineType = dataNode["MachineType"].asString();
	if(!dataNode["InstanceSeries"].isNull())
		data_.instanceSeries = dataNode["InstanceSeries"].asString();
	if(!dataNode["ProductVersion"].isNull())
		data_.productVersion = dataNode["ProductVersion"].asString();
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();
	if(!dataNode["ResourceGroupId"].isNull())
		data_.resourceGroupId = dataNode["ResourceGroupId"].asString();
	if(!dataNode["DrdsInstanceId"].isNull())
		data_.drdsInstanceId = dataNode["DrdsInstanceId"].asString();
	if(!dataNode["ZoneId"].isNull())
		data_.zoneId = dataNode["ZoneId"].asString();
	if(!dataNode["InstRole"].isNull())
		data_.instRole = dataNode["InstRole"].asString();
	if(!dataNode["OrderInstanceId"].isNull())
		data_.orderInstanceId = dataNode["OrderInstanceId"].asString();
	auto allVipsNode = dataNode["Vips"]["Vip"];
	for (auto dataNodeVipsVip : allVipsNode)
	{
		Data::Vip vipObject;
		if(!dataNodeVipsVip["Type"].isNull())
			vipObject.type = dataNodeVipsVip["Type"].asString();
		if(!dataNodeVipsVip["VpcId"].isNull())
			vipObject.vpcId = dataNodeVipsVip["VpcId"].asString();
		if(!dataNodeVipsVip["VswitchId"].isNull())
			vipObject.vswitchId = dataNodeVipsVip["VswitchId"].asString();
		if(!dataNodeVipsVip["Dns"].isNull())
			vipObject.dns = dataNodeVipsVip["Dns"].asString();
		if(!dataNodeVipsVip["Port"].isNull())
			vipObject.port = dataNodeVipsVip["Port"].asString();
		if(!dataNodeVipsVip["ExpireDays"].isNull())
			vipObject.expireDays = std::stol(dataNodeVipsVip["ExpireDays"].asString());
		if(!dataNodeVipsVip["RemoveWeight"].isNull())
			vipObject.removeWeight = dataNodeVipsVip["RemoveWeight"].asString() == "true";
		data_.vips.push_back(vipObject);
	}
		auto allReadOnlyDBInstanceIds = dataNode["ReadOnlyDBInstanceIds"]["ReadOnlyDBInstanceId"];
		for (auto value : allReadOnlyDBInstanceIds)
			data_.readOnlyDBInstanceIds.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeDrdsInstanceResult::Data DescribeDrdsInstanceResult::getData()const
{
	return data_;
}

bool DescribeDrdsInstanceResult::getSuccess()const
{
	return success_;
}

