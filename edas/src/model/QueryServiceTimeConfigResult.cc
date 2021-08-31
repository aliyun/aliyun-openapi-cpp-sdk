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

#include <alibabacloud/edas/model/QueryServiceTimeConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

QueryServiceTimeConfigResult::QueryServiceTimeConfigResult() :
	ServiceResult()
{}

QueryServiceTimeConfigResult::QueryServiceTimeConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryServiceTimeConfigResult::~QueryServiceTimeConfigResult()
{}

void QueryServiceTimeConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	auto allResultNode = dataNode["Result"]["MseServiceTime"];
	for (auto dataNodeResultMseServiceTime : allResultNode)
	{
		Data::MseServiceTime mseServiceTimeObject;
		if(!dataNodeResultMseServiceTime["Id"].isNull())
			mseServiceTimeObject.id = std::stol(dataNodeResultMseServiceTime["Id"].asString());
		if(!dataNodeResultMseServiceTime["Path"].isNull())
			mseServiceTimeObject.path = dataNodeResultMseServiceTime["Path"].asString();
		if(!dataNodeResultMseServiceTime["ConsumerAppName"].isNull())
			mseServiceTimeObject.consumerAppName = dataNodeResultMseServiceTime["ConsumerAppName"].asString();
		if(!dataNodeResultMseServiceTime["Timeout"].isNull())
			mseServiceTimeObject.timeout = dataNodeResultMseServiceTime["Timeout"].asString();
		if(!dataNodeResultMseServiceTime["ConsumerAppId"].isNull())
			mseServiceTimeObject.consumerAppId = dataNodeResultMseServiceTime["ConsumerAppId"].asString();
		data_.result.push_back(mseServiceTimeObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryServiceTimeConfigResult::getMessage()const
{
	return message_;
}

QueryServiceTimeConfigResult::Data QueryServiceTimeConfigResult::getData()const
{
	return data_;
}

int QueryServiceTimeConfigResult::getCode()const
{
	return code_;
}

bool QueryServiceTimeConfigResult::getSuccess()const
{
	return success_;
}

