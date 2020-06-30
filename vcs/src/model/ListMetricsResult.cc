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

#include <alibabacloud/vcs/model/ListMetricsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

ListMetricsResult::ListMetricsResult() :
	ServiceResult()
{}

ListMetricsResult::ListMetricsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMetricsResult::~ListMetricsResult()
{}

void ListMetricsResult::parse(const std::string &payload)
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
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["TotalPage"].isNull())
		data_.totalPage = std::stoi(dataNode["TotalPage"].asString());
	auto allRecordsNode = dataNode["Records"]["RecordsItem"];
	for (auto dataNodeRecordsRecordsItem : allRecordsNode)
	{
		Data::RecordsItem recordsItemObject;
		if(!dataNodeRecordsRecordsItem["DateTime"].isNull())
			recordsItemObject.dateTime = dataNodeRecordsRecordsItem["DateTime"].asString();
		if(!dataNodeRecordsRecordsItem["TagCode"].isNull())
			recordsItemObject.tagCode = dataNodeRecordsRecordsItem["TagCode"].asString();
		if(!dataNodeRecordsRecordsItem["TagValue"].isNull())
			recordsItemObject.tagValue = dataNodeRecordsRecordsItem["TagValue"].asString();
		if(!dataNodeRecordsRecordsItem["TagMetric"].isNull())
			recordsItemObject.tagMetric = dataNodeRecordsRecordsItem["TagMetric"].asString();
		data_.records.push_back(recordsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListMetricsResult::getMessage()const
{
	return message_;
}

ListMetricsResult::Data ListMetricsResult::getData()const
{
	return data_;
}

std::string ListMetricsResult::getCode()const
{
	return code_;
}

