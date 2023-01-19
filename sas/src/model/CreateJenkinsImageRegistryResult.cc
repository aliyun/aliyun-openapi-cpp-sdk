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

#include <alibabacloud/sas/model/CreateJenkinsImageRegistryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

CreateJenkinsImageRegistryResult::CreateJenkinsImageRegistryResult() :
	ServiceResult()
{}

CreateJenkinsImageRegistryResult::CreateJenkinsImageRegistryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateJenkinsImageRegistryResult::~CreateJenkinsImageRegistryResult()
{}

void CreateJenkinsImageRegistryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = dataNode["GmtCreate"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = dataNode["GmtModified"].asString();
	if(!dataNode["AliUid"].isNull())
		data_.aliUid = std::stol(dataNode["AliUid"].asString());
	if(!dataNode["RegistryName"].isNull())
		data_.registryName = dataNode["RegistryName"].asString();
	if(!dataNode["RegistryType"].isNull())
		data_.registryType = dataNode["RegistryType"].asString();
	if(!dataNode["ProtocolType"].isNull())
		data_.protocolType = std::stoi(dataNode["ProtocolType"].asString());
	if(!dataNode["NetType"].isNull())
		data_.netType = std::stoi(dataNode["NetType"].asString());
	if(!dataNode["VpcId"].isNull())
		data_.vpcId = dataNode["VpcId"].asString();
	if(!dataNode["RegistryHostIp"].isNull())
		data_.registryHostIp = dataNode["RegistryHostIp"].asString();
	if(!dataNode["DomainName"].isNull())
		data_.domainName = dataNode["DomainName"].asString();
	if(!dataNode["UserName"].isNull())
		data_.userName = dataNode["UserName"].asString();
	if(!dataNode["Password"].isNull())
		data_.password = dataNode["Password"].asString();
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();
	if(!dataNode["Token"].isNull())
		data_.token = dataNode["Token"].asString();
	if(!dataNode["WhiteList"].isNull())
		data_.whiteList = dataNode["WhiteList"].asString();
	if(!dataNode["BlackList"].isNull())
		data_.blackList = dataNode["BlackList"].asString();
	if(!dataNode["TransPerHour"].isNull())
		data_.transPerHour = std::stoi(dataNode["TransPerHour"].asString());
	if(!dataNode["PersistenceDay"].isNull())
		data_.persistenceDay = std::stoi(dataNode["PersistenceDay"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["TimeCost"].isNull())
		timeCost_ = std::stol(value["TimeCost"].asString());

}

std::string CreateJenkinsImageRegistryResult::getMessage()const
{
	return message_;
}

int CreateJenkinsImageRegistryResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

CreateJenkinsImageRegistryResult::Data CreateJenkinsImageRegistryResult::getData()const
{
	return data_;
}

long CreateJenkinsImageRegistryResult::getTimeCost()const
{
	return timeCost_;
}

std::string CreateJenkinsImageRegistryResult::getCode()const
{
	return code_;
}

bool CreateJenkinsImageRegistryResult::getSuccess()const
{
	return success_;
}

