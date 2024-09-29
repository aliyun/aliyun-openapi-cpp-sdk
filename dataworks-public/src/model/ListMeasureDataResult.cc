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

#include <alibabacloud/dataworks-public/model/ListMeasureDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListMeasureDataResult::ListMeasureDataResult() :
	ServiceResult()
{}

ListMeasureDataResult::ListMeasureDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMeasureDataResult::~ListMeasureDataResult()
{}

void ListMeasureDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMeasureDatasNode = value["MeasureDatas"]["MeasureData"];
	for (auto valueMeasureDatasMeasureData : allMeasureDatasNode)
	{
		MeasureData measureDatasObject;
		if(!valueMeasureDatasMeasureData["DomainCode"].isNull())
			measureDatasObject.domainCode = valueMeasureDatasMeasureData["DomainCode"].asString();
		if(!valueMeasureDatasMeasureData["ComponentCode"].isNull())
			measureDatasObject.componentCode = valueMeasureDatasMeasureData["ComponentCode"].asString();
		if(!valueMeasureDatasMeasureData["StartTime"].isNull())
			measureDatasObject.startTime = std::stol(valueMeasureDatasMeasureData["StartTime"].asString());
		if(!valueMeasureDatasMeasureData["EndTime"].isNull())
			measureDatasObject.endTime = std::stol(valueMeasureDatasMeasureData["EndTime"].asString());
		if(!valueMeasureDatasMeasureData["Usage"].isNull())
			measureDatasObject.usage = std::stol(valueMeasureDatasMeasureData["Usage"].asString());
		measureDatas_.push_back(measureDatasObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

int ListMeasureDataResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListMeasureDataResult::MeasureData> ListMeasureDataResult::getMeasureDatas()const
{
	return measureDatas_;
}

std::string ListMeasureDataResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListMeasureDataResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListMeasureDataResult::getSuccess()const
{
	return success_;
}

