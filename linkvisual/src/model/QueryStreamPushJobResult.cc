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

#include <alibabacloud/linkvisual/model/QueryStreamPushJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryStreamPushJobResult::QueryStreamPushJobResult() :
	ServiceResult()
{}

QueryStreamPushJobResult::QueryStreamPushJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryStreamPushJobResult::~QueryStreamPushJobResult()
{}

void QueryStreamPushJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["JobType"].isNull())
		data_.jobType = std::stoi(dataNode["JobType"].asString());
	if(!dataNode["PushUrl"].isNull())
		data_.pushUrl = dataNode["PushUrl"].asString();
	if(!dataNode["StreamType"].isNull())
		data_.streamType = std::stoi(dataNode["StreamType"].asString());
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stoi(dataNode["CreateTime"].asString());
	if(!dataNode["PushStatus"].isNull())
		data_.pushStatus = std::stoi(dataNode["PushStatus"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryStreamPushJobResult::Data QueryStreamPushJobResult::getData()const
{
	return data_;
}

std::string QueryStreamPushJobResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryStreamPushJobResult::getCode()const
{
	return code_;
}

bool QueryStreamPushJobResult::getSuccess()const
{
	return success_;
}

