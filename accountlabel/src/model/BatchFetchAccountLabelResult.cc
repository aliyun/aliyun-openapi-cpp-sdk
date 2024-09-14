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

#include <alibabacloud/accountlabel/model/BatchFetchAccountLabelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AccountLabel;
using namespace AlibabaCloud::AccountLabel::Model;

BatchFetchAccountLabelResult::BatchFetchAccountLabelResult() :
	ServiceResult()
{}

BatchFetchAccountLabelResult::BatchFetchAccountLabelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchFetchAccountLabelResult::~BatchFetchAccountLabelResult()
{}

void BatchFetchAccountLabelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["AccountLabelInfoDto"];
	for (auto valueDataAccountLabelInfoDto : allDataNode)
	{
		AccountLabelInfoDto dataObject;
		if(!valueDataAccountLabelInfoDto["Creator"].isNull())
			dataObject.creator = valueDataAccountLabelInfoDto["Creator"].asString();
		if(!valueDataAccountLabelInfoDto["EndTime"].isNull())
			dataObject.endTime = std::stol(valueDataAccountLabelInfoDto["EndTime"].asString());
		if(!valueDataAccountLabelInfoDto["GmtCreated"].isNull())
			dataObject.gmtCreated = std::stol(valueDataAccountLabelInfoDto["GmtCreated"].asString());
		if(!valueDataAccountLabelInfoDto["GmtModified"].isNull())
			dataObject.gmtModified = std::stol(valueDataAccountLabelInfoDto["GmtModified"].asString());
		if(!valueDataAccountLabelInfoDto["Kp"].isNull())
			dataObject.kp = std::stol(valueDataAccountLabelInfoDto["Kp"].asString());
		if(!valueDataAccountLabelInfoDto["Label"].isNull())
			dataObject.label = valueDataAccountLabelInfoDto["Label"].asString();
		if(!valueDataAccountLabelInfoDto["LabelSeries"].isNull())
			dataObject.labelSeries = valueDataAccountLabelInfoDto["LabelSeries"].asString();
		if(!valueDataAccountLabelInfoDto["StartTime"].isNull())
			dataObject.startTime = std::stol(valueDataAccountLabelInfoDto["StartTime"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Count"].isNull())
		count_ = std::stol(value["Count"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string BatchFetchAccountLabelResult::getMessage()const
{
	return message_;
}

std::vector<BatchFetchAccountLabelResult::AccountLabelInfoDto> BatchFetchAccountLabelResult::getData()const
{
	return data_;
}

long BatchFetchAccountLabelResult::getCount()const
{
	return count_;
}

std::string BatchFetchAccountLabelResult::getCode()const
{
	return code_;
}

bool BatchFetchAccountLabelResult::getSuccess()const
{
	return success_;
}

