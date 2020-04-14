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

#include <alibabacloud/ivpd/model/CreateSegmentBodyJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivpd;
using namespace AlibabaCloud::Ivpd::Model;

CreateSegmentBodyJobResult::CreateSegmentBodyJobResult() :
	ServiceResult()
{}

CreateSegmentBodyJobResult::CreateSegmentBodyJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateSegmentBodyJobResult::~CreateSegmentBodyJobResult()
{}

void CreateSegmentBodyJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["Completed"].isNull())
		data_.completed = dataNode["Completed"].asString() == "true";
	if(!dataNode["BatchSize"].isNull())
		data_.batchSize = std::stoi(dataNode["BatchSize"].asString());
	if(!dataNode["TotalUsedTime"].isNull())
		data_.totalUsedTime = std::stol(dataNode["TotalUsedTime"].asString());
	if(!dataNode["Progress"].isNull())
		data_.progress = std::stoi(dataNode["Progress"].asString());
	if(!dataNode["JobId"].isNull())
		data_.jobId = dataNode["JobId"].asString();
	auto allResultListNode = dataNode["ResultList"]["Result"];
	for (auto dataNodeResultListResult : allResultListNode)
	{
		Data::Result resultObject;
		if(!dataNodeResultListResult["DataId"].isNull())
			resultObject.dataId = dataNodeResultListResult["DataId"].asString();
		if(!dataNodeResultListResult["Success"].isNull())
			resultObject.success = dataNodeResultListResult["Success"].asString() == "true";
		if(!dataNodeResultListResult["Code"].isNull())
			resultObject.code = dataNodeResultListResult["Code"].asString();
		if(!dataNodeResultListResult["Message"].isNull())
			resultObject.message = dataNodeResultListResult["Message"].asString();
		auto resultDataNode = value["ResultData"];
		if(!resultDataNode["ImageUrl"].isNull())
			resultObject.resultData.imageUrl = resultDataNode["ImageUrl"].asString();
		data_.resultList.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CreateSegmentBodyJobResult::getMessage()const
{
	return message_;
}

CreateSegmentBodyJobResult::Data CreateSegmentBodyJobResult::getData()const
{
	return data_;
}

std::string CreateSegmentBodyJobResult::getCode()const
{
	return code_;
}

