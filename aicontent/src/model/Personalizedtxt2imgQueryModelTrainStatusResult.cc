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

#include <alibabacloud/aicontent/model/Personalizedtxt2imgQueryModelTrainStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AiContent;
using namespace AlibabaCloud::AiContent::Model;

Personalizedtxt2imgQueryModelTrainStatusResult::Personalizedtxt2imgQueryModelTrainStatusResult() :
	ServiceResult()
{}

Personalizedtxt2imgQueryModelTrainStatusResult::Personalizedtxt2imgQueryModelTrainStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

Personalizedtxt2imgQueryModelTrainStatusResult::~Personalizedtxt2imgQueryModelTrainStatusResult()
{}

void Personalizedtxt2imgQueryModelTrainStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["data"];
	if(!dataNode["modelTrainStatus"].isNull())
		data_.modelTrainStatus = dataNode["modelTrainStatus"].asString();
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

std::string Personalizedtxt2imgQueryModelTrainStatusResult::getRequestId()const
{
	return requestId_;
}

int Personalizedtxt2imgQueryModelTrainStatusResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

Personalizedtxt2imgQueryModelTrainStatusResult::Data Personalizedtxt2imgQueryModelTrainStatusResult::getData()const
{
	return data_;
}

std::string Personalizedtxt2imgQueryModelTrainStatusResult::getErrMessage()const
{
	return errMessage_;
}

bool Personalizedtxt2imgQueryModelTrainStatusResult::getSuccess()const
{
	return success_;
}

std::string Personalizedtxt2imgQueryModelTrainStatusResult::getErrCode()const
{
	return errCode_;
}

