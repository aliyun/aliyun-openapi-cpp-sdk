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

#include <alibabacloud/cloud-siem/model/DescribeScopeUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeScopeUsersResult::DescribeScopeUsersResult() :
	ServiceResult()
{}

DescribeScopeUsersResult::DescribeScopeUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScopeUsersResult::~DescribeScopeUsersResult()
{}

void DescribeScopeUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["AliUid"].isNull())
			dataObject.aliUid = std::stol(valueDataDataItem["AliUid"].asString());
		if(!valueDataDataItem["UserName"].isNull())
			dataObject.userName = valueDataDataItem["UserName"].asString();
		if(!valueDataDataItem["UserId"].isNull())
			dataObject.userId = valueDataDataItem["UserId"].asString();
		if(!valueDataDataItem["CloudCode"].isNull())
			dataObject.cloudCode = valueDataDataItem["CloudCode"].asString();
		if(!valueDataDataItem["InstanceId"].isNull())
			dataObject.instanceId = valueDataDataItem["InstanceId"].asString();
		auto allDomains = value["Domains"]["Domain"];
		for (auto value : allDomains)
			dataObject.domains.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeScopeUsersResult::getMessage()const
{
	return message_;
}

std::vector<DescribeScopeUsersResult::DataItem> DescribeScopeUsersResult::getData()const
{
	return data_;
}

int DescribeScopeUsersResult::getCode()const
{
	return code_;
}

bool DescribeScopeUsersResult::getSuccess()const
{
	return success_;
}

