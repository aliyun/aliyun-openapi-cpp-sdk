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

#include <alibabacloud/teslamaxcompute/model/GetQuotaInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::TeslaMaxCompute;
using namespace AlibabaCloud::TeslaMaxCompute::Model;

GetQuotaInstanceResult::GetQuotaInstanceResult() :
	ServiceResult()
{}

GetQuotaInstanceResult::GetQuotaInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetQuotaInstanceResult::~GetQuotaInstanceResult()
{}

void GetQuotaInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	auto allDetail = value["Detail"]["instance"];
	for (auto value : allDetail)
	{
		Data::Instance instanceObject;
		if(!value["Project"].isNull())
			instanceObject.project = value["Project"].asString();
		if(!value["InstanceId"].isNull())
			instanceObject.instanceId = value["InstanceId"].asString();
		if(!value["Status"].isNull())
			instanceObject.status = value["Status"].asString();
		if(!value["UserAccount"].isNull())
			instanceObject.userAccount = value["UserAccount"].asString();
		if(!value["NickName"].isNull())
			instanceObject.nickName = value["NickName"].asString();
		if(!value["Cluster"].isNull())
			instanceObject.cluster = value["Cluster"].asString();
		if(!value["RunTime"].isNull())
			instanceObject.runTime = value["RunTime"].asString();
		if(!value["CpuUsed"].isNull())
			instanceObject.cpuUsed = std::stol(value["CpuUsed"].asString());
		if(!value["CpuRequest"].isNull())
			instanceObject.cpuRequest = std::stol(value["CpuRequest"].asString());
		if(!value["CpuUsedTotal"].isNull())
			instanceObject.cpuUsedTotal = std::stol(value["CpuUsedTotal"].asString());
		if(!value["CpuUsedRatioMax"].isNull())
			instanceObject.cpuUsedRatioMax = std::stof(value["CpuUsedRatioMax"].asString());
		if(!value["CpuUsedRatioMin"].isNull())
			instanceObject.cpuUsedRatioMin = std::stof(value["CpuUsedRatioMin"].asString());
		if(!value["MemUsed"].isNull())
			instanceObject.memUsed = std::stol(value["MemUsed"].asString());
		if(!value["MemRequest"].isNull())
			instanceObject.memRequest = std::stol(value["MemRequest"].asString());
		if(!value["MemUsedTotal"].isNull())
			instanceObject.memUsedTotal = std::stol(value["MemUsedTotal"].asString());
		if(!value["MemUsedRatioMax"].isNull())
			instanceObject.memUsedRatioMax = std::stof(value["MemUsedRatioMax"].asString());
		if(!value["MemUsedRatioMin"].isNull())
			instanceObject.memUsedRatioMin = std::stof(value["MemUsedRatioMin"].asString());
		if(!value["TaskType"].isNull())
			instanceObject.taskType = value["TaskType"].asString();
		if(!value["SkynetId"].isNull())
			instanceObject.skynetId = value["SkynetId"].asString();
		if(!value["QuotaName"].isNull())
			instanceObject.quotaName = value["QuotaName"].asString();
		if(!value["QuotaId"].isNull())
			instanceObject.quotaId = std::stoi(value["QuotaId"].asString());
		data_.detail.push_back(instanceObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetQuotaInstanceResult::getMessage()const
{
	return message_;
}

GetQuotaInstanceResult::Data GetQuotaInstanceResult::getData()const
{
	return data_;
}

int GetQuotaInstanceResult::getCode()const
{
	return code_;
}

