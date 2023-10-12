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

#include <alibabacloud/oceanbasepro/model/KillProcessListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

KillProcessListResult::KillProcessListResult() :
	ServiceResult()
{}

KillProcessListResult::KillProcessListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

KillProcessListResult::~KillProcessListResult()
{}

void KillProcessListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["SessionId"].isNull())
			dataObject.sessionId = std::stol(valueDataDataItem["SessionId"].asString());
		if(!valueDataDataItem["ServerIp"].isNull())
			dataObject.serverIp = valueDataDataItem["ServerIp"].asString();
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = valueDataDataItem["Status"].asString();
		if(!valueDataDataItem["ErrorMessage"].isNull())
			dataObject.errorMessage = valueDataDataItem["ErrorMessage"].asString();
		if(!valueDataDataItem["ClientIp"].isNull())
			dataObject.clientIp = valueDataDataItem["ClientIp"].asString();
		if(!valueDataDataItem["TenantId"].isNull())
			dataObject.tenantId = valueDataDataItem["TenantId"].asString();
		if(!valueDataDataItem["User"].isNull())
			dataObject.user = valueDataDataItem["User"].asString();
		if(!valueDataDataItem["Database"].isNull())
			dataObject.database = valueDataDataItem["Database"].asString();
		if(!valueDataDataItem["SqlText"].isNull())
			dataObject.sqlText = valueDataDataItem["SqlText"].asString();
		if(!valueDataDataItem["Command"].isNull())
			dataObject.command = valueDataDataItem["Command"].asString();
		if(!valueDataDataItem["ExecuteTime"].isNull())
			dataObject.executeTime = valueDataDataItem["ExecuteTime"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<KillProcessListResult::DataItem> KillProcessListResult::getData()const
{
	return data_;
}

