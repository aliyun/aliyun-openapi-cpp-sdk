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

#include <alibabacloud/reid_cloud/model/ListMaskDetectionResultsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid_cloud;
using namespace AlibabaCloud::Reid_cloud::Model;

ListMaskDetectionResultsResult::ListMaskDetectionResultsResult() :
	ServiceResult()
{}

ListMaskDetectionResultsResult::ListMaskDetectionResultsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMaskDetectionResultsResult::~ListMaskDetectionResultsResult()
{}

void ListMaskDetectionResultsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMaskDetectionResultsNode = value["MaskDetectionResults"]["DetectionResult"];
	for (auto valueMaskDetectionResultsDetectionResult : allMaskDetectionResultsNode)
	{
		DetectionResult maskDetectionResultsObject;
		if(!valueMaskDetectionResultsDetectionResult["PkId"].isNull())
			maskDetectionResultsObject.pkId = valueMaskDetectionResultsDetectionResult["PkId"].asString();
		if(!valueMaskDetectionResultsDetectionResult["Score"].isNull())
			maskDetectionResultsObject.score = valueMaskDetectionResultsDetectionResult["Score"].asString();
		if(!valueMaskDetectionResultsDetectionResult["LocationId"].isNull())
			maskDetectionResultsObject.locationId = std::stol(valueMaskDetectionResultsDetectionResult["LocationId"].asString());
		if(!valueMaskDetectionResultsDetectionResult["ImageKey"].isNull())
			maskDetectionResultsObject.imageKey = valueMaskDetectionResultsDetectionResult["ImageKey"].asString();
		if(!valueMaskDetectionResultsDetectionResult["Id"].isNull())
			maskDetectionResultsObject.id = std::stol(valueMaskDetectionResultsDetectionResult["Id"].asString());
		if(!valueMaskDetectionResultsDetectionResult["IpcId"].isNull())
			maskDetectionResultsObject.ipcId = valueMaskDetectionResultsDetectionResult["IpcId"].asString();
		if(!valueMaskDetectionResultsDetectionResult["MaskResult"].isNull())
			maskDetectionResultsObject.maskResult = valueMaskDetectionResultsDetectionResult["MaskResult"].asString();
		maskDetectionResults_.push_back(maskDetectionResultsObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

long ListMaskDetectionResultsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListMaskDetectionResultsResult::getMessage()const
{
	return message_;
}

int ListMaskDetectionResultsResult::getPageSize()const
{
	return pageSize_;
}

int ListMaskDetectionResultsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListMaskDetectionResultsResult::DetectionResult> ListMaskDetectionResultsResult::getMaskDetectionResults()const
{
	return maskDetectionResults_;
}

std::string ListMaskDetectionResultsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string ListMaskDetectionResultsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListMaskDetectionResultsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string ListMaskDetectionResultsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListMaskDetectionResultsResult::getCode()const
{
	return code_;
}

bool ListMaskDetectionResultsResult::getSuccess()const
{
	return success_;
}

