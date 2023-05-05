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

#include <alibabacloud/ecd/model/DescribeFotaTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeFotaTasksResult::DescribeFotaTasksResult() :
	ServiceResult()
{}

DescribeFotaTasksResult::DescribeFotaTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFotaTasksResult::~DescribeFotaTasksResult()
{}

void DescribeFotaTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFotaTasksNode = value["FotaTasks"]["FotaTask"];
	for (auto valueFotaTasksFotaTask : allFotaTasksNode)
	{
		FotaTask fotaTasksObject;
		if(!valueFotaTasksFotaTask["TaskUid"].isNull())
			fotaTasksObject.taskUid = valueFotaTasksFotaTask["TaskUid"].asString();
		if(!valueFotaTasksFotaTask["FotaProject"].isNull())
			fotaTasksObject.fotaProject = valueFotaTasksFotaTask["FotaProject"].asString();
		if(!valueFotaTasksFotaTask["AppVersion"].isNull())
			fotaTasksObject.appVersion = valueFotaTasksFotaTask["AppVersion"].asString();
		if(!valueFotaTasksFotaTask["Status"].isNull())
			fotaTasksObject.status = valueFotaTasksFotaTask["Status"].asString();
		if(!valueFotaTasksFotaTask["PublishTime"].isNull())
			fotaTasksObject.publishTime = valueFotaTasksFotaTask["PublishTime"].asString();
		if(!valueFotaTasksFotaTask["PendingDesktopCount"].isNull())
			fotaTasksObject.pendingDesktopCount = std::stoi(valueFotaTasksFotaTask["PendingDesktopCount"].asString());
		if(!valueFotaTasksFotaTask["ReleaseNote"].isNull())
			fotaTasksObject.releaseNote = valueFotaTasksFotaTask["ReleaseNote"].asString();
		if(!valueFotaTasksFotaTask["Size"].isNull())
			fotaTasksObject.size = std::stoi(valueFotaTasksFotaTask["Size"].asString());
		if(!valueFotaTasksFotaTask["PendingCustomImageCount"].isNull())
			fotaTasksObject.pendingCustomImageCount = std::stoi(valueFotaTasksFotaTask["PendingCustomImageCount"].asString());
		fotaTasks_.push_back(fotaTasksObject);
	}

}

std::vector<DescribeFotaTasksResult::FotaTask> DescribeFotaTasksResult::getFotaTasks()const
{
	return fotaTasks_;
}

