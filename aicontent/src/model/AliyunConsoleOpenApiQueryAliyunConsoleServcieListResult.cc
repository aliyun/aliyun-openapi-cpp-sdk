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

#include <alibabacloud/aicontent/model/AliyunConsoleOpenApiQueryAliyunConsoleServcieListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AiContent;
using namespace AlibabaCloud::AiContent::Model;

AliyunConsoleOpenApiQueryAliyunConsoleServcieListResult::AliyunConsoleOpenApiQueryAliyunConsoleServcieListResult() :
	ServiceResult()
{}

AliyunConsoleOpenApiQueryAliyunConsoleServcieListResult::AliyunConsoleOpenApiQueryAliyunConsoleServcieListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AliyunConsoleOpenApiQueryAliyunConsoleServcieListResult::~AliyunConsoleOpenApiQueryAliyunConsoleServcieListResult()
{}

void AliyunConsoleOpenApiQueryAliyunConsoleServcieListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto alldataNode = value["data"]["dataItem"];
	for (auto valuedatadataItem : alldataNode)
	{
		DataItem dataObject;
		if(!valuedatadataItem["ServiceCode"].isNull())
			dataObject.serviceCode = valuedatadataItem["ServiceCode"].asString();
		if(!valuedatadataItem["ServiceName"].isNull())
			dataObject.serviceName = valuedatadataItem["ServiceName"].asString();
		if(!valuedatadataItem["FreeCount"].isNull())
			dataObject.freeCount = std::stoi(valuedatadataItem["FreeCount"].asString());
		if(!valuedatadataItem["FreeConcurrencyCount"].isNull())
			dataObject.freeConcurrencyCount = std::stoi(valuedatadataItem["FreeConcurrencyCount"].asString());
		data_.push_back(dataObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errCode"].isNull())
		errCode_ = value["errCode"].asString();
	if(!value["errMessage"].isNull())
		errMessage_ = value["errMessage"].asString();
	if(!value["httpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["httpStatusCode"].asString());

}

std::vector<AliyunConsoleOpenApiQueryAliyunConsoleServcieListResult::DataItem> AliyunConsoleOpenApiQueryAliyunConsoleServcieListResult::getdata()const
{
	return data_;
}

std::string AliyunConsoleOpenApiQueryAliyunConsoleServcieListResult::getRequestId()const
{
	return requestId_;
}

int AliyunConsoleOpenApiQueryAliyunConsoleServcieListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string AliyunConsoleOpenApiQueryAliyunConsoleServcieListResult::getErrMessage()const
{
	return errMessage_;
}

bool AliyunConsoleOpenApiQueryAliyunConsoleServcieListResult::getSuccess()const
{
	return success_;
}

std::string AliyunConsoleOpenApiQueryAliyunConsoleServcieListResult::getErrCode()const
{
	return errCode_;
}

