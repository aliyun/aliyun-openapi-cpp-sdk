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

#include <alibabacloud/vcs/model/ListPersonVisitCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

ListPersonVisitCountResult::ListPersonVisitCountResult() :
	ServiceResult()
{}

ListPersonVisitCountResult::ListPersonVisitCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPersonVisitCountResult::~ListPersonVisitCountResult()
{}

void ListPersonVisitCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Datas"];
	for (auto valueDataDatas : allDataNode)
	{
		Datas dataObject;
		if(!valueDataDatas["CorpId"].isNull())
			dataObject.corpId = valueDataDatas["CorpId"].asString();
		if(!valueDataDatas["DeviceId"].isNull())
			dataObject.deviceId = valueDataDatas["DeviceId"].asString();
		if(!valueDataDatas["GroupId"].isNull())
			dataObject.groupId = valueDataDatas["GroupId"].asString();
		if(!valueDataDatas["PersonId"].isNull())
			dataObject.personId = valueDataDatas["PersonId"].asString();
		if(!valueDataDatas["TagCode"].isNull())
			dataObject.tagCode = valueDataDatas["TagCode"].asString();
		if(!valueDataDatas["TagMetrics"].isNull())
			dataObject.tagMetrics = valueDataDatas["TagMetrics"].asString();
		if(!valueDataDatas["HourId"].isNull())
			dataObject.hourId = valueDataDatas["HourId"].asString();
		if(!valueDataDatas["DayId"].isNull())
			dataObject.dayId = valueDataDatas["DayId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNo"].isNull())
		pageNo_ = value["PageNo"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string ListPersonVisitCountResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListPersonVisitCountResult::getMessage()const
{
	return message_;
}

std::string ListPersonVisitCountResult::getPageSize()const
{
	return pageSize_;
}

std::vector<ListPersonVisitCountResult::Datas> ListPersonVisitCountResult::getData()const
{
	return data_;
}

std::string ListPersonVisitCountResult::getPageNo()const
{
	return pageNo_;
}

std::string ListPersonVisitCountResult::getCode()const
{
	return code_;
}

std::string ListPersonVisitCountResult::getSuccess()const
{
	return success_;
}

