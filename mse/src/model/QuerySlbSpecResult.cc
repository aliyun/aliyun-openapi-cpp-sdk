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

#include <alibabacloud/mse/model/QuerySlbSpecResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

QuerySlbSpecResult::QuerySlbSpecResult() :
	ServiceResult()
{}

QuerySlbSpecResult::QuerySlbSpecResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySlbSpecResult::~QuerySlbSpecResult()
{}

void QuerySlbSpecResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["SlbSpecs"];
	for (auto valueDataSlbSpecs : allDataNode)
	{
		SlbSpecs dataObject;
		if(!valueDataSlbSpecs["Id"].isNull())
			dataObject.id = std::stoi(valueDataSlbSpecs["Id"].asString());
		if(!valueDataSlbSpecs["Spec"].isNull())
			dataObject.spec = valueDataSlbSpecs["Spec"].asString();
		if(!valueDataSlbSpecs["Name"].isNull())
			dataObject.name = valueDataSlbSpecs["Name"].asString();
		if(!valueDataSlbSpecs["MaxConnection"].isNull())
			dataObject.maxConnection = valueDataSlbSpecs["MaxConnection"].asString();
		if(!valueDataSlbSpecs["NewConnectionPerSecond"].isNull())
			dataObject.newConnectionPerSecond = valueDataSlbSpecs["NewConnectionPerSecond"].asString();
		if(!valueDataSlbSpecs["Qps"].isNull())
			dataObject.qps = valueDataSlbSpecs["Qps"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QuerySlbSpecResult::getMessage()const
{
	return message_;
}

int QuerySlbSpecResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<QuerySlbSpecResult::SlbSpecs> QuerySlbSpecResult::getData()const
{
	return data_;
}

int QuerySlbSpecResult::getCode()const
{
	return code_;
}

bool QuerySlbSpecResult::getSuccess()const
{
	return success_;
}

