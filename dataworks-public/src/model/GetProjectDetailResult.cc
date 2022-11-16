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

#include <alibabacloud/dataworks-public/model/GetProjectDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetProjectDetailResult::GetProjectDetailResult() :
	ServiceResult()
{}

GetProjectDetailResult::GetProjectDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetProjectDetailResult::~GetProjectDetailResult()
{}

void GetProjectDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["ResidentArea"].isNull())
		data_.residentArea = dataNode["ResidentArea"].asString();
	if(!dataNode["ProjectId"].isNull())
		data_.projectId = std::stoi(dataNode["ProjectId"].asString());
	if(!dataNode["ProjectIdentifier"].isNull())
		data_.projectIdentifier = dataNode["ProjectIdentifier"].asString();
	if(!dataNode["ProjectName"].isNull())
		data_.projectName = dataNode["ProjectName"].asString();
	if(!dataNode["IsAllowDownload"].isNull())
		data_.isAllowDownload = std::stoi(dataNode["IsAllowDownload"].asString());
	if(!dataNode["ProjectMode"].isNull())
		data_.projectMode = std::stoi(dataNode["ProjectMode"].asString());
	if(!dataNode["ProjectDescription"].isNull())
		data_.projectDescription = dataNode["ProjectDescription"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = dataNode["GmtModified"].asString();
	if(!dataNode["ProjectOwnerBaseId"].isNull())
		data_.projectOwnerBaseId = dataNode["ProjectOwnerBaseId"].asString();
	if(!dataNode["DevelopmentType"].isNull())
		data_.developmentType = std::stoi(dataNode["DevelopmentType"].asString());
	if(!dataNode["DefaultDiResourceGroupIdentifier"].isNull())
		data_.defaultDiResourceGroupIdentifier = dataNode["DefaultDiResourceGroupIdentifier"].asString();
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = dataNode["GmtCreate"].asString();
	if(!dataNode["SchedulerMaxRetryTimes"].isNull())
		data_.schedulerMaxRetryTimes = std::stoi(dataNode["SchedulerMaxRetryTimes"].asString());
	if(!dataNode["ProtectedMode"].isNull())
		data_.protectedMode = std::stoi(dataNode["ProtectedMode"].asString());
	if(!dataNode["TenantId"].isNull())
		data_.tenantId = std::stol(dataNode["TenantId"].asString());
	if(!dataNode["SchedulerRetryInterval"].isNull())
		data_.schedulerRetryInterval = std::stoi(dataNode["SchedulerRetryInterval"].asString());
	if(!dataNode["ResourceManagerResourceGroupId"].isNull())
		data_.resourceManagerResourceGroupId = dataNode["ResourceManagerResourceGroupId"].asString();
	if(!dataNode["DisableDevelopment"].isNull())
		data_.disableDevelopment = dataNode["DisableDevelopment"].asString() == "true";
	if(!dataNode["UseProxyOdpsAccount"].isNull())
		data_.useProxyOdpsAccount = dataNode["UseProxyOdpsAccount"].asString() == "true";
	if(!dataNode["TablePrivacyMode"].isNull())
		data_.tablePrivacyMode = std::stoi(dataNode["TablePrivacyMode"].asString());
	if(!dataNode["IsDefault"].isNull())
		data_.isDefault = std::stoi(dataNode["IsDefault"].asString());
	auto allTagsNode = dataNode["Tags"]["Tag"];
	for (auto dataNodeTagsTag : allTagsNode)
	{
		Data::Tag tagObject;
		if(!dataNodeTagsTag["Key"].isNull())
			tagObject.key = dataNodeTagsTag["Key"].asString();
		if(!dataNodeTagsTag["Value"].isNull())
			tagObject.value = dataNodeTagsTag["Value"].asString();
		data_.tags.push_back(tagObject);
	}
		auto allEnvTypes = dataNode["EnvTypes"]["EnvTypes"];
		for (auto value : allEnvTypes)
			data_.envTypes.push_back(value.asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int GetProjectDetailResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetProjectDetailResult::Data GetProjectDetailResult::getData()const
{
	return data_;
}

bool GetProjectDetailResult::getSuccess()const
{
	return success_;
}

