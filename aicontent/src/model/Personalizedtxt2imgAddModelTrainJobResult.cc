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

#include <alibabacloud/aicontent/model/Personalizedtxt2imgAddModelTrainJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AiContent;
using namespace AlibabaCloud::AiContent::Model;

Personalizedtxt2imgAddModelTrainJobResult::Personalizedtxt2imgAddModelTrainJobResult() :
	ServiceResult()
{}

Personalizedtxt2imgAddModelTrainJobResult::Personalizedtxt2imgAddModelTrainJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

Personalizedtxt2imgAddModelTrainJobResult::~Personalizedtxt2imgAddModelTrainJobResult()
{}

void Personalizedtxt2imgAddModelTrainJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["data"];
	if(!dataNode["id"].isNull())
		data_.id = dataNode["id"].asString();
	if(!dataNode["modelId"].isNull())
		data_.modelId = dataNode["modelId"].asString();
	if(!dataNode["name"].isNull())
		data_.name = dataNode["name"].asString();
	if(!dataNode["objectType"].isNull())
		data_.objectType = dataNode["objectType"].asString();
	if(!dataNode["jobStatus"].isNull())
		data_.jobStatus = dataNode["jobStatus"].asString();
	if(!dataNode["jobTrainProgress"].isNull())
		data_.jobTrainProgress = dataNode["jobTrainProgress"].asString();
	if(!dataNode["inferenceImageCount"].isNull())
		data_.inferenceImageCount = std::stoi(dataNode["inferenceImageCount"].asString());
	if(!dataNode["createTime"].isNull())
		data_.createTime = dataNode["createTime"].asString();
	auto allinferenceJobListNode = dataNode["inferenceJobList"]["inferenceJobListItem"];
	for (auto dataNodeinferenceJobListinferenceJobListItem : allinferenceJobListNode)
	{
		Data::InferenceJobListItem inferenceJobListItemObject;
		if(!dataNodeinferenceJobListinferenceJobListItem["id"].isNull())
			inferenceJobListItemObject.id = dataNodeinferenceJobListinferenceJobListItem["id"].asString();
		if(!dataNodeinferenceJobListinferenceJobListItem["promptId"].isNull())
			inferenceJobListItemObject.promptId = dataNodeinferenceJobListinferenceJobListItem["promptId"].asString();
		if(!dataNodeinferenceJobListinferenceJobListItem["modelId"].isNull())
			inferenceJobListItemObject.modelId = dataNodeinferenceJobListinferenceJobListItem["modelId"].asString();
		if(!dataNodeinferenceJobListinferenceJobListItem["jobStatus"].isNull())
			inferenceJobListItemObject.jobStatus = dataNodeinferenceJobListinferenceJobListItem["jobStatus"].asString();
		if(!dataNodeinferenceJobListinferenceJobListItem["jobTrainProgress"].isNull())
			inferenceJobListItemObject.jobTrainProgress = dataNodeinferenceJobListinferenceJobListItem["jobTrainProgress"].asString();
		if(!dataNodeinferenceJobListinferenceJobListItem["createTime"].isNull())
			inferenceJobListItemObject.createTime = dataNodeinferenceJobListinferenceJobListItem["createTime"].asString();
		auto allResultImageUrl = value["resultImageUrl"]["resultImageUrl"];
		for (auto value : allResultImageUrl)
			inferenceJobListItemObject.resultImageUrl.push_back(value.asString());
		data_.inferenceJobList.push_back(inferenceJobListItemObject);
	}
		auto allImageUrl = dataNode["imageUrl"]["imageUrl"];
		for (auto value : allImageUrl)
			data_.imageUrl.push_back(value.asString());
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

std::string Personalizedtxt2imgAddModelTrainJobResult::getRequestId()const
{
	return requestId_;
}

int Personalizedtxt2imgAddModelTrainJobResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

Personalizedtxt2imgAddModelTrainJobResult::Data Personalizedtxt2imgAddModelTrainJobResult::getData()const
{
	return data_;
}

std::string Personalizedtxt2imgAddModelTrainJobResult::getErrMessage()const
{
	return errMessage_;
}

bool Personalizedtxt2imgAddModelTrainJobResult::getSuccess()const
{
	return success_;
}

std::string Personalizedtxt2imgAddModelTrainJobResult::getErrCode()const
{
	return errCode_;
}

