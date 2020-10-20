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

#include <alibabacloud/vcs/model/ListPersonTraceDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

ListPersonTraceDetailsResult::ListPersonTraceDetailsResult() :
	ServiceResult()
{}

ListPersonTraceDetailsResult::ListPersonTraceDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPersonTraceDetailsResult::~ListPersonTraceDetailsResult()
{}

void ListPersonTraceDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Datas"];
	for (auto valueDataDatas : allDataNode)
	{
		Datas dataObject;
		if(!valueDataDatas["PageNumber"].isNull())
			dataObject.pageNumber = std::stol(valueDataDatas["PageNumber"].asString());
		if(!valueDataDatas["PageSize"].isNull())
			dataObject.pageSize = std::stol(valueDataDatas["PageSize"].asString());
		if(!valueDataDatas["TotalCount"].isNull())
			dataObject.totalCount = std::stol(valueDataDatas["TotalCount"].asString());
		if(!valueDataDatas["TotalPage"].isNull())
			dataObject.totalPage = std::stol(valueDataDatas["TotalPage"].asString());
		if(!valueDataDatas["TargetPicUrlPath"].isNull())
			dataObject.targetPicUrlPath = valueDataDatas["TargetPicUrlPath"].asString();
		if(!valueDataDatas["DataSourceId"].isNull())
			dataObject.dataSourceId = valueDataDatas["DataSourceId"].asString();
		if(!valueDataDatas["PersonId"].isNull())
			dataObject.personId = valueDataDatas["PersonId"].asString();
		if(!valueDataDatas["PicUrlPath"].isNull())
			dataObject.picUrlPath = valueDataDatas["PicUrlPath"].asString();
		if(!valueDataDatas["IsvId"].isNull())
			dataObject.isvId = valueDataDatas["IsvId"].asString();
		if(!valueDataDatas["RightBottomY"].isNull())
			dataObject.rightBottomY = valueDataDatas["RightBottomY"].asString();
		if(!valueDataDatas["RightBottomX"].isNull())
			dataObject.rightBottomX = valueDataDatas["RightBottomX"].asString();
		if(!valueDataDatas["ShotTime"].isNull())
			dataObject.shotTime = valueDataDatas["ShotTime"].asString();
		if(!valueDataDatas["CorpId"].isNull())
			dataObject.corpId = valueDataDatas["CorpId"].asString();
		if(!valueDataDatas["SubId"].isNull())
			dataObject.subId = valueDataDatas["SubId"].asString();
		if(!valueDataDatas["LeftTopY"].isNull())
			dataObject.leftTopY = valueDataDatas["LeftTopY"].asString();
		if(!valueDataDatas["LeftTopX"].isNull())
			dataObject.leftTopX = valueDataDatas["LeftTopX"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListPersonTraceDetailsResult::getMessage()const
{
	return message_;
}

std::vector<ListPersonTraceDetailsResult::Datas> ListPersonTraceDetailsResult::getData()const
{
	return data_;
}

std::string ListPersonTraceDetailsResult::getCode()const
{
	return code_;
}

