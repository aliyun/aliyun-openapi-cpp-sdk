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

#include <alibabacloud/lto/model/ListBaaSFabricConsortiumResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Lto;
using namespace AlibabaCloud::Lto::Model;

ListBaaSFabricConsortiumResult::ListBaaSFabricConsortiumResult() :
	ServiceResult()
{}

ListBaaSFabricConsortiumResult::ListBaaSFabricConsortiumResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBaaSFabricConsortiumResult::~ListBaaSFabricConsortiumResult()
{}

void ListBaaSFabricConsortiumResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["BaaSFabricConsortiumInfo"];
	for (auto valueDataBaaSFabricConsortiumInfo : allDataNode)
	{
		BaaSFabricConsortiumInfo dataObject;
		if(!valueDataBaaSFabricConsortiumInfo["BaaSFabricConsortiumId"].isNull())
			dataObject.baaSFabricConsortiumId = valueDataBaaSFabricConsortiumInfo["BaaSFabricConsortiumId"].asString();
		if(!valueDataBaaSFabricConsortiumInfo["BaaSFabricConsortiumName"].isNull())
			dataObject.baaSFabricConsortiumName = valueDataBaaSFabricConsortiumInfo["BaaSFabricConsortiumName"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListBaaSFabricConsortiumResult::getMessage()const
{
	return message_;
}

int ListBaaSFabricConsortiumResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListBaaSFabricConsortiumResult::BaaSFabricConsortiumInfo> ListBaaSFabricConsortiumResult::getData()const
{
	return data_;
}

std::string ListBaaSFabricConsortiumResult::getCode()const
{
	return code_;
}

bool ListBaaSFabricConsortiumResult::getSuccess()const
{
	return success_;
}

