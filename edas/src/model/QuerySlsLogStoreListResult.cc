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

#include <alibabacloud/edas/model/QuerySlsLogStoreListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

QuerySlsLogStoreListResult::QuerySlsLogStoreListResult() :
	ServiceResult()
{}

QuerySlsLogStoreListResult::QuerySlsLogStoreListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySlsLogStoreListResult::~QuerySlsLogStoreListResult()
{}

void QuerySlsLogStoreListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["SlsLog"];
	for (auto valueResultSlsLog : allResultNode)
	{
		SlsLog resultObject;
		if(!valueResultSlsLog["Logstore"].isNull())
			resultObject.logstore = valueResultSlsLog["Logstore"].asString();
		if(!valueResultSlsLog["Project"].isNull())
			resultObject.project = valueResultSlsLog["Project"].asString();
		if(!valueResultSlsLog["Link"].isNull())
			resultObject.link = valueResultSlsLog["Link"].asString();
		if(!valueResultSlsLog["ConsumerSide"].isNull())
			resultObject.consumerSide = valueResultSlsLog["ConsumerSide"].asString();
		if(!valueResultSlsLog["CreateTime"].isNull())
			resultObject.createTime = valueResultSlsLog["CreateTime"].asString();
		if(!valueResultSlsLog["Source"].isNull())
			resultObject.source = valueResultSlsLog["Source"].asString();
		result_.push_back(resultObject);
	}
	if(!value["TotalSize"].isNull())
		totalSize_ = std::stoi(value["TotalSize"].asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QuerySlsLogStoreListResult::getMessage()const
{
	return message_;
}

int QuerySlsLogStoreListResult::getTotalSize()const
{
	return totalSize_;
}

int QuerySlsLogStoreListResult::getCode()const
{
	return code_;
}

std::vector<QuerySlsLogStoreListResult::SlsLog> QuerySlsLogStoreListResult::getResult()const
{
	return result_;
}

