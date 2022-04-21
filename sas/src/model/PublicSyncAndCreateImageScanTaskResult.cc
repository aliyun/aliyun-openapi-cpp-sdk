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

#include <alibabacloud/sas/model/PublicSyncAndCreateImageScanTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

PublicSyncAndCreateImageScanTaskResult::PublicSyncAndCreateImageScanTaskResult() :
	ServiceResult()
{}

PublicSyncAndCreateImageScanTaskResult::PublicSyncAndCreateImageScanTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PublicSyncAndCreateImageScanTaskResult::~PublicSyncAndCreateImageScanTaskResult()
{}

void PublicSyncAndCreateImageScanTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["Progress"].isNull())
		data_.progress = std::stoi(dataNode["Progress"].asString());
	if(!dataNode["TaskId"].isNull())
		data_.taskId = dataNode["TaskId"].asString();
	if(!dataNode["CollectTime"].isNull())
		data_.collectTime = std::stol(dataNode["CollectTime"].asString());
	if(!dataNode["FinishCount"].isNull())
		data_.finishCount = std::stoi(dataNode["FinishCount"].asString());
	if(!dataNode["ExecTime"].isNull())
		data_.execTime = std::stol(dataNode["ExecTime"].asString());
	if(!dataNode["Result"].isNull())
		data_.result = dataNode["Result"].asString();
	if(!dataNode["CanCreate"].isNull())
		data_.canCreate = dataNode["CanCreate"].asString() == "true";

}

PublicSyncAndCreateImageScanTaskResult::Data PublicSyncAndCreateImageScanTaskResult::getData()const
{
	return data_;
}

