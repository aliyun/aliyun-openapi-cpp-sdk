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

#include <alibabacloud/mse/model/GetMseSourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetMseSourceResult::GetMseSourceResult() :
	ServiceResult()
{}

GetMseSourceResult::GetMseSourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMseSourceResult::~GetMseSourceResult()
{}

void GetMseSourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["MseSources"];
	for (auto valueDataMseSources : allDataNode)
	{
		MseSources dataObject;
		if(!valueDataMseSources["InstanceId"].isNull())
			dataObject.instanceId = valueDataMseSources["InstanceId"].asString();
		if(!valueDataMseSources["Address"].isNull())
			dataObject.address = valueDataMseSources["Address"].asString();
		if(!valueDataMseSources["Type"].isNull())
			dataObject.type = valueDataMseSources["Type"].asString();
		if(!valueDataMseSources["Name"].isNull())
			dataObject.name = valueDataMseSources["Name"].asString();
		if(!valueDataMseSources["ClusterId"].isNull())
			dataObject.clusterId = valueDataMseSources["ClusterId"].asString();
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

std::string GetMseSourceResult::getMessage()const
{
	return message_;
}

int GetMseSourceResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<GetMseSourceResult::MseSources> GetMseSourceResult::getData()const
{
	return data_;
}

int GetMseSourceResult::getCode()const
{
	return code_;
}

bool GetMseSourceResult::getSuccess()const
{
	return success_;
}

