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

#include <alibabacloud/teslamaxcompute/model/GetUserInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::TeslaMaxCompute;
using namespace AlibabaCloud::TeslaMaxCompute::Model;

GetUserInstanceResult::GetUserInstanceResult() :
	ServiceResult()
{}

GetUserInstanceResult::GetUserInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserInstanceResult::~GetUserInstanceResult()
{}

void GetUserInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	auto allDetailNode = dataNode["Detail"]["instance"];
	for (auto dataNodeDetailinstance : allDetailNode)
	{
		Data::Instance instanceObject;
		if(!dataNodeDetailinstance["Project"].isNull())
			instanceObject.project = dataNodeDetailinstance["Project"].asString();
		if(!dataNodeDetailinstance["InstanceId"].isNull())
			instanceObject.instanceId = dataNodeDetailinstance["InstanceId"].asString();
		if(!dataNodeDetailinstance["Status"].isNull())
			instanceObject.status = dataNodeDetailinstance["Status"].asString();
		if(!dataNodeDetailinstance["UserAccount"].isNull())
			instanceObject.userAccount = dataNodeDetailinstance["UserAccount"].asString();
		if(!dataNodeDetailinstance["NickName"].isNull())
			instanceObject.nickName = dataNodeDetailinstance["NickName"].asString();
		if(!dataNodeDetailinstance["Cluster"].isNull())
			instanceObject.cluster = dataNodeDetailinstance["Cluster"].asString();
		if(!dataNodeDetailinstance["RunTime"].isNull())
			instanceObject.runTime = dataNodeDetailinstance["RunTime"].asString();
		if(!dataNodeDetailinstance["CpuUsed"].isNull())
			instanceObject.cpuUsed = std::stol(dataNodeDetailinstance["CpuUsed"].asString());
		if(!dataNodeDetailinstance["CpuRequest"].isNull())
			instanceObject.cpuRequest = std::stol(dataNodeDetailinstance["CpuRequest"].asString());
		if(!dataNodeDetailinstance["CpuUsedTotal"].isNull())
			instanceObject.cpuUsedTotal = std::stol(dataNodeDetailinstance["CpuUsedTotal"].asString());
		if(!dataNodeDetailinstance["CpuUsedRatioMax"].isNull())
			instanceObject.cpuUsedRatioMax = std::stof(dataNodeDetailinstance["CpuUsedRatioMax"].asString());
		if(!dataNodeDetailinstance["CpuUsedRatioMin"].isNull())
			instanceObject.cpuUsedRatioMin = std::stof(dataNodeDetailinstance["CpuUsedRatioMin"].asString());
		if(!dataNodeDetailinstance["MemUsed"].isNull())
			instanceObject.memUsed = std::stol(dataNodeDetailinstance["MemUsed"].asString());
		if(!dataNodeDetailinstance["MemRequest"].isNull())
			instanceObject.memRequest = std::stol(dataNodeDetailinstance["MemRequest"].asString());
		if(!dataNodeDetailinstance["MemUsedTotal"].isNull())
			instanceObject.memUsedTotal = std::stol(dataNodeDetailinstance["MemUsedTotal"].asString());
		if(!dataNodeDetailinstance["MemUsedRatioMax"].isNull())
			instanceObject.memUsedRatioMax = std::stof(dataNodeDetailinstance["MemUsedRatioMax"].asString());
		if(!dataNodeDetailinstance["MemUsedRatioMin"].isNull())
			instanceObject.memUsedRatioMin = std::stof(dataNodeDetailinstance["MemUsedRatioMin"].asString());
		if(!dataNodeDetailinstance["TaskType"].isNull())
			instanceObject.taskType = dataNodeDetailinstance["TaskType"].asString();
		if(!dataNodeDetailinstance["SkynetId"].isNull())
			instanceObject.skynetId = dataNodeDetailinstance["SkynetId"].asString();
		if(!dataNodeDetailinstance["QuotaName"].isNull())
			instanceObject.quotaName = dataNodeDetailinstance["QuotaName"].asString();
		if(!dataNodeDetailinstance["QuotaId"].isNull())
			instanceObject.quotaId = std::stoi(dataNodeDetailinstance["QuotaId"].asString());
		data_.detail.push_back(instanceObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetUserInstanceResult::getMessage()const
{
	return message_;
}

GetUserInstanceResult::Data GetUserInstanceResult::getData()const
{
	return data_;
}

int GetUserInstanceResult::getCode()const
{
	return code_;
}

