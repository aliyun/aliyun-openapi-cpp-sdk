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

#include <alibabacloud/mse/model/QueryNamespaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

QueryNamespaceResult::QueryNamespaceResult() :
	ServiceResult()
{}

QueryNamespaceResult::QueryNamespaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryNamespaceResult::~QueryNamespaceResult()
{}

void QueryNamespaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["NamespaceList"];
	for (auto valueDataNamespaceList : allDataNode)
	{
		NamespaceList dataObject;
		if(!valueDataNamespaceList["Region"].isNull())
			dataObject.region = valueDataNamespaceList["Region"].asString();
		if(!valueDataNamespaceList["Namespace"].isNull())
			dataObject._namespace = valueDataNamespaceList["Namespace"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryNamespaceResult::getMessage()const
{
	return message_;
}

int QueryNamespaceResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<QueryNamespaceResult::NamespaceList> QueryNamespaceResult::getData()const
{
	return data_;
}

std::string QueryNamespaceResult::getErrorCode()const
{
	return errorCode_;
}

bool QueryNamespaceResult::getSuccess()const
{
	return success_;
}

