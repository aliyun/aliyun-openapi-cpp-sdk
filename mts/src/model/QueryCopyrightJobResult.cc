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

#include <alibabacloud/mts/model/QueryCopyrightJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryCopyrightJobResult::QueryCopyrightJobResult() :
	ServiceResult()
{}

QueryCopyrightJobResult::QueryCopyrightJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCopyrightJobResult::~QueryCopyrightJobResult()
{}

void QueryCopyrightJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Callback"].isNull())
			dataObject.callback = valueDataDataItem["Callback"].asString();
		if(!valueDataDataItem["GmtCreate"].isNull())
			dataObject.gmtCreate = std::stol(valueDataDataItem["GmtCreate"].asString());
		if(!valueDataDataItem["GmtModified"].isNull())
			dataObject.gmtModified = std::stol(valueDataDataItem["GmtModified"].asString());
		if(!valueDataDataItem["Input"].isNull())
			dataObject.input = valueDataDataItem["Input"].asString();
		if(!valueDataDataItem["JobId"].isNull())
			dataObject.jobId = valueDataDataItem["JobId"].asString();
		if(!valueDataDataItem["Level"].isNull())
			dataObject.level = std::stol(valueDataDataItem["Level"].asString());
		if(!valueDataDataItem["Message"].isNull())
			dataObject.message = valueDataDataItem["Message"].asString();
		if(!valueDataDataItem["MessageId"].isNull())
			dataObject.messageId = std::stol(valueDataDataItem["MessageId"].asString());
		if(!valueDataDataItem["Output"].isNull())
			dataObject.output = valueDataDataItem["Output"].asString();
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = valueDataDataItem["Status"].asString();
		if(!valueDataDataItem["UserData"].isNull())
			dataObject.userData = valueDataDataItem["UserData"].asString();
		if(!valueDataDataItem["UserId"].isNull())
			dataObject.userId = std::stol(valueDataDataItem["UserId"].asString());
		if(!valueDataDataItem["Result"].isNull())
			dataObject.result = valueDataDataItem["Result"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["StatusCode"].isNull())
		statusCode_ = std::stol(value["StatusCode"].asString());

}

std::string QueryCopyrightJobResult::getMessage()const
{
	return message_;
}

std::vector<QueryCopyrightJobResult::DataItem> QueryCopyrightJobResult::getData()const
{
	return data_;
}

long QueryCopyrightJobResult::getStatusCode()const
{
	return statusCode_;
}

