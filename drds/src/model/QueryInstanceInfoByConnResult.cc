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

#include <alibabacloud/drds/model/QueryInstanceInfoByConnResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

QueryInstanceInfoByConnResult::QueryInstanceInfoByConnResult() :
	ServiceResult()
{}

QueryInstanceInfoByConnResult::QueryInstanceInfoByConnResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryInstanceInfoByConnResult::~QueryInstanceInfoByConnResult()
{}

void QueryInstanceInfoByConnResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["DrdsInstanceId"].isNull())
		data_.drdsInstanceId = dataNode["DrdsInstanceId"].asString();
	if(!dataNode["Type"].isNull())
		data_.type = dataNode["Type"].asString();
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();
	if(!dataNode["ZoneId"].isNull())
		data_.zoneId = dataNode["ZoneId"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["NetworkType"].isNull())
		data_.networkType = dataNode["NetworkType"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["Version"].isNull())
		data_.version = std::stol(dataNode["Version"].asString());
	if(!dataNode["Specification"].isNull())
		data_.specification = dataNode["Specification"].asString();
	if(!dataNode["SpecTypeId"].isNull())
		data_.specTypeId = dataNode["SpecTypeId"].asString();
	if(!dataNode["SpecTypeName"].isNull())
		data_.specTypeName = dataNode["SpecTypeName"].asString();
	if(!dataNode["VpcCloudInstanceId"].isNull())
		data_.vpcCloudInstanceId = dataNode["VpcCloudInstanceId"].asString();
	auto allVipsNode = dataNode["Vips"]["Vip"];
	for (auto dataNodeVipsVip : allVipsNode)
	{
		Data::Vip vipObject;
		if(!dataNodeVipsVip["IP"].isNull())
			vipObject.iP = dataNodeVipsVip["IP"].asString();
		if(!dataNodeVipsVip["Port"].isNull())
			vipObject.port = dataNodeVipsVip["Port"].asString();
		if(!dataNodeVipsVip["Type"].isNull())
			vipObject.type = dataNodeVipsVip["Type"].asString();
		if(!dataNodeVipsVip["VpcId"].isNull())
			vipObject.vpcId = dataNodeVipsVip["VpcId"].asString();
		if(!dataNodeVipsVip["VswitchId"].isNull())
			vipObject.vswitchId = dataNodeVipsVip["VswitchId"].asString();
		data_.vips.push_back(vipObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryInstanceInfoByConnResult::Data QueryInstanceInfoByConnResult::getData()const
{
	return data_;
}

bool QueryInstanceInfoByConnResult::getSuccess()const
{
	return success_;
}

