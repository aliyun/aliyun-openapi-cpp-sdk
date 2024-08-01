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

#include <alibabacloud/aicontent/model/Personalizedtxt2imgQueryInferenceJobInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AiContent;
using namespace AlibabaCloud::AiContent::Model;

Personalizedtxt2imgQueryInferenceJobInfoResult::Personalizedtxt2imgQueryInferenceJobInfoResult() :
	ServiceResult()
{}

Personalizedtxt2imgQueryInferenceJobInfoResult::Personalizedtxt2imgQueryInferenceJobInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

Personalizedtxt2imgQueryInferenceJobInfoResult::~Personalizedtxt2imgQueryInferenceJobInfoResult()
{}

void Personalizedtxt2imgQueryInferenceJobInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["data"];
	if(!dataNode["id"].isNull())
		data_.id = dataNode["id"].asString();
	if(!dataNode["promptId"].isNull())
		data_.promptId = dataNode["promptId"].asString();
	if(!dataNode["modelId"].isNull())
		data_.modelId = dataNode["modelId"].asString();
	if(!dataNode["jobStatus"].isNull())
		data_.jobStatus = dataNode["jobStatus"].asString();
	if(!dataNode["jobTrainProgress"].isNull())
		data_.jobTrainProgress = dataNode["jobTrainProgress"].asString();
	if(!dataNode["createTime"].isNull())
		data_.createTime = dataNode["createTime"].asString();
		auto allResultImageUrl = dataNode["resultImageUrl"]["resultImageUrl"];
		for (auto value : allResultImageUrl)
			data_.resultImageUrl.push_back(value.asString());
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

std::string Personalizedtxt2imgQueryInferenceJobInfoResult::getRequestId()const
{
	return requestId_;
}

int Personalizedtxt2imgQueryInferenceJobInfoResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

Personalizedtxt2imgQueryInferenceJobInfoResult::Data Personalizedtxt2imgQueryInferenceJobInfoResult::getData()const
{
	return data_;
}

std::string Personalizedtxt2imgQueryInferenceJobInfoResult::getErrMessage()const
{
	return errMessage_;
}

bool Personalizedtxt2imgQueryInferenceJobInfoResult::getSuccess()const
{
	return success_;
}

std::string Personalizedtxt2imgQueryInferenceJobInfoResult::getErrCode()const
{
	return errCode_;
}

