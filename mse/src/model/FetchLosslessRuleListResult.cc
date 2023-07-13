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

#include <alibabacloud/mse/model/FetchLosslessRuleListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

FetchLosslessRuleListResult::FetchLosslessRuleListResult() :
	ServiceResult()
{}

FetchLosslessRuleListResult::FetchLosslessRuleListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FetchLosslessRuleListResult::~FetchLosslessRuleListResult()
{}

void FetchLosslessRuleListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	auto allResultsNode = dataNode["Results"]["ApplicationList"];
	for (auto dataNodeResultsApplicationList : allResultsNode)
	{
		Data::ApplicationList applicationListObject;
		if(!dataNodeResultsApplicationList["AppName"].isNull())
			applicationListObject.appName = dataNodeResultsApplicationList["AppName"].asString();
		if(!dataNodeResultsApplicationList["AppId"].isNull())
			applicationListObject.appId = dataNodeResultsApplicationList["AppId"].asString();
		if(!dataNodeResultsApplicationList["Count"].isNull())
			applicationListObject.count = std::stoi(dataNodeResultsApplicationList["Count"].asString());
		if(!dataNodeResultsApplicationList["Enable"].isNull())
			applicationListObject.enable = dataNodeResultsApplicationList["Enable"].asString() == "true";
		if(!dataNodeResultsApplicationList["WarmupTime"].isNull())
			applicationListObject.warmupTime = std::stoi(dataNodeResultsApplicationList["WarmupTime"].asString());
		if(!dataNodeResultsApplicationList["DelayTime"].isNull())
			applicationListObject.delayTime = std::stoi(dataNodeResultsApplicationList["DelayTime"].asString());
		if(!dataNodeResultsApplicationList["FuncType"].isNull())
			applicationListObject.funcType = std::stoi(dataNodeResultsApplicationList["FuncType"].asString());
		if(!dataNodeResultsApplicationList["Aligned"].isNull())
			applicationListObject.aligned = dataNodeResultsApplicationList["Aligned"].asString() == "true";
		if(!dataNodeResultsApplicationList["Related"].isNull())
			applicationListObject.related = dataNodeResultsApplicationList["Related"].asString() == "true";
		if(!dataNodeResultsApplicationList["LossLessDetail"].isNull())
			applicationListObject.lossLessDetail = dataNodeResultsApplicationList["LossLessDetail"].asString() == "true";
		if(!dataNodeResultsApplicationList["Notice"].isNull())
			applicationListObject.notice = dataNodeResultsApplicationList["Notice"].asString() == "true";
		data_.results.push_back(applicationListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string FetchLosslessRuleListResult::getMessage()const
{
	return message_;
}

int FetchLosslessRuleListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

FetchLosslessRuleListResult::Data FetchLosslessRuleListResult::getData()const
{
	return data_;
}

std::string FetchLosslessRuleListResult::getErrorCode()const
{
	return errorCode_;
}

int FetchLosslessRuleListResult::getCode()const
{
	return code_;
}

bool FetchLosslessRuleListResult::getSuccess()const
{
	return success_;
}

