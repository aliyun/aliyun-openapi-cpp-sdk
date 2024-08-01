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

#include <alibabacloud/aicontent/model/Personalizedtxt2imgQueryModelTrainJobListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AiContent;
using namespace AlibabaCloud::AiContent::Model;

Personalizedtxt2imgQueryModelTrainJobListResult::Personalizedtxt2imgQueryModelTrainJobListResult() :
	ServiceResult()
{}

Personalizedtxt2imgQueryModelTrainJobListResult::Personalizedtxt2imgQueryModelTrainJobListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

Personalizedtxt2imgQueryModelTrainJobListResult::~Personalizedtxt2imgQueryModelTrainJobListResult()
{}

void Personalizedtxt2imgQueryModelTrainJobListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto alldataNode = value["data"]["dataItem"];
	for (auto valuedatadataItem : alldataNode)
	{
		DataItem dataObject;
		if(!valuedatadataItem["id"].isNull())
			dataObject.id = valuedatadataItem["id"].asString();
		if(!valuedatadataItem["modelId"].isNull())
			dataObject.modelId = valuedatadataItem["modelId"].asString();
		if(!valuedatadataItem["name"].isNull())
			dataObject.name = valuedatadataItem["name"].asString();
		if(!valuedatadataItem["objectType"].isNull())
			dataObject.objectType = valuedatadataItem["objectType"].asString();
		if(!valuedatadataItem["jobStatus"].isNull())
			dataObject.jobStatus = valuedatadataItem["jobStatus"].asString();
		if(!valuedatadataItem["jobTrainProgress"].isNull())
			dataObject.jobTrainProgress = valuedatadataItem["jobTrainProgress"].asString();
		if(!valuedatadataItem["inferenceImageCount"].isNull())
			dataObject.inferenceImageCount = std::stoi(valuedatadataItem["inferenceImageCount"].asString());
		if(!valuedatadataItem["createTime"].isNull())
			dataObject.createTime = valuedatadataItem["createTime"].asString();
		auto allinferenceJobListNode = valuedatadataItem["inferenceJobList"]["inferenceJobListItem"];
		for (auto valuedatadataIteminferenceJobListinferenceJobListItem : allinferenceJobListNode)
		{
			DataItem::InferenceJobListItem inferenceJobListObject;
			if(!valuedatadataIteminferenceJobListinferenceJobListItem["id"].isNull())
				inferenceJobListObject.id = valuedatadataIteminferenceJobListinferenceJobListItem["id"].asString();
			if(!valuedatadataIteminferenceJobListinferenceJobListItem["promptId"].isNull())
				inferenceJobListObject.promptId = valuedatadataIteminferenceJobListinferenceJobListItem["promptId"].asString();
			if(!valuedatadataIteminferenceJobListinferenceJobListItem["modelId"].isNull())
				inferenceJobListObject.modelId = valuedatadataIteminferenceJobListinferenceJobListItem["modelId"].asString();
			if(!valuedatadataIteminferenceJobListinferenceJobListItem["jobStatus"].isNull())
				inferenceJobListObject.jobStatus = valuedatadataIteminferenceJobListinferenceJobListItem["jobStatus"].asString();
			if(!valuedatadataIteminferenceJobListinferenceJobListItem["jobTrainProgress"].isNull())
				inferenceJobListObject.jobTrainProgress = valuedatadataIteminferenceJobListinferenceJobListItem["jobTrainProgress"].asString();
			if(!valuedatadataIteminferenceJobListinferenceJobListItem["createTime"].isNull())
				inferenceJobListObject.createTime = valuedatadataIteminferenceJobListinferenceJobListItem["createTime"].asString();
			auto allResultImageUrl = value["resultImageUrl"]["resultImageUrl"];
			for (auto value : allResultImageUrl)
				inferenceJobListObject.resultImageUrl.push_back(value.asString());
			dataObject.inferenceJobList.push_back(inferenceJobListObject);
		}
		auto allImageUrl = value["imageUrl"]["imageUrl"];
		for (auto value : allImageUrl)
			dataObject.imageUrl.push_back(value.asString());
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

std::vector<Personalizedtxt2imgQueryModelTrainJobListResult::DataItem> Personalizedtxt2imgQueryModelTrainJobListResult::getdata()const
{
	return data_;
}

std::string Personalizedtxt2imgQueryModelTrainJobListResult::getRequestId()const
{
	return requestId_;
}

int Personalizedtxt2imgQueryModelTrainJobListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string Personalizedtxt2imgQueryModelTrainJobListResult::getErrMessage()const
{
	return errMessage_;
}

bool Personalizedtxt2imgQueryModelTrainJobListResult::getSuccess()const
{
	return success_;
}

std::string Personalizedtxt2imgQueryModelTrainJobListResult::getErrCode()const
{
	return errCode_;
}

