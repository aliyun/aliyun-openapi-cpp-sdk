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
	auto allDetailNode = dataNode["Detail"]["Instance"];
	for (auto dataNodeDetailInstance : allDetailNode)
	{
		Data::Instance instanceObject;
		if(!dataNodeDetailInstance["Project"].isNull())
			instanceObject.project = dataNodeDetailInstance["Project"].asString();
		if(!dataNodeDetailInstance["InstanceId"].isNull())
			instanceObject.instanceId = dataNodeDetailInstance["InstanceId"].asString();
		if(!dataNodeDetailInstance["Status"].isNull())
			instanceObject.status = dataNodeDetailInstance["Status"].asString();
		if(!dataNodeDetailInstance["UserAccount"].isNull())
			instanceObject.userAccount = dataNodeDetailInstance["UserAccount"].asString();
		if(!dataNodeDetailInstance["NickName"].isNull())
			instanceObject.nickName = dataNodeDetailInstance["NickName"].asString();
		if(!dataNodeDetailInstance["Cluster"].isNull())
			instanceObject.cluster = dataNodeDetailInstance["Cluster"].asString();
		if(!dataNodeDetailInstance["RunTime"].isNull())
			instanceObject.runTime = dataNodeDetailInstance["RunTime"].asString();
		if(!dataNodeDetailInstance["CpuUsed"].isNull())
			instanceObject.cpuUsed = std::stol(dataNodeDetailInstance["CpuUsed"].asString());
		if(!dataNodeDetailInstance["CpuRequest"].isNull())
			instanceObject.cpuRequest = std::stol(dataNodeDetailInstance["CpuRequest"].asString());
		if(!dataNodeDetailInstance["CpuUsedTotal"].isNull())
			instanceObject.cpuUsedTotal = std::stol(dataNodeDetailInstance["CpuUsedTotal"].asString());
		if(!dataNodeDetailInstance["CpuUsedRatioMax"].isNull())
			instanceObject.cpuUsedRatioMax = std::stof(dataNodeDetailInstance["CpuUsedRatioMax"].asString());
		if(!dataNodeDetailInstance["CpuUsedRatioMin"].isNull())
			instanceObject.cpuUsedRatioMin = std::stof(dataNodeDetailInstance["CpuUsedRatioMin"].asString());
		if(!dataNodeDetailInstance["MemUsed"].isNull())
			instanceObject.memUsed = std::stol(dataNodeDetailInstance["MemUsed"].asString());
		if(!dataNodeDetailInstance["MemRequest"].isNull())
			instanceObject.memRequest = std::stol(dataNodeDetailInstance["MemRequest"].asString());
		if(!dataNodeDetailInstance["MemUsedTotal"].isNull())
			instanceObject.memUsedTotal = std::stol(dataNodeDetailInstance["MemUsedTotal"].asString());
		if(!dataNodeDetailInstance["MemUsedRatioMax"].isNull())
			instanceObject.memUsedRatioMax = std::stof(dataNodeDetailInstance["MemUsedRatioMax"].asString());
		if(!dataNodeDetailInstance["MemUsedRatioMin"].isNull())
			instanceObject.memUsedRatioMin = std::stof(dataNodeDetailInstance["MemUsedRatioMin"].asString());
		if(!dataNodeDetailInstance["TaskType"].isNull())
			instanceObject.taskType = dataNodeDetailInstance["TaskType"].asString();
		if(!dataNodeDetailInstance["SkynetId"].isNull())
			instanceObject.skynetId = dataNodeDetailInstance["SkynetId"].asString();
		if(!dataNodeDetailInstance["QuotaName"].isNull())
			instanceObject.quotaName = dataNodeDetailInstance["QuotaName"].asString();
		if(!dataNodeDetailInstance["QuotaId"].isNull())
			instanceObject.quotaId = std::stoi(dataNodeDetailInstance["QuotaId"].asString());
		if(!dataNodeDetailInstance["User"].isNull())
			instanceObject.user = dataNodeDetailInstance["User"].asString();
		if(!dataNodeDetailInstance["IsRealOwner"].isNull())
			instanceObject.isRealOwner = dataNodeDetailInstance["IsRealOwner"].asString();
		if(!dataNodeDetailInstance["ProjectOwner"].isNull())
			instanceObject.projectOwner = dataNodeDetailInstance["ProjectOwner"].asString();
		if(!dataNodeDetailInstance["CollectTime"].isNull())
			instanceObject.collectTime = dataNodeDetailInstance["CollectTime"].asString();
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

