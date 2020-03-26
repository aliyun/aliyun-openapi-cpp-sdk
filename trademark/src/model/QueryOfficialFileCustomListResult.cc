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

#include <alibabacloud/trademark/model/QueryOfficialFileCustomListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

QueryOfficialFileCustomListResult::QueryOfficialFileCustomListResult() :
	ServiceResult()
{}

QueryOfficialFileCustomListResult::QueryOfficialFileCustomListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryOfficialFileCustomListResult::~QueryOfficialFileCustomListResult()
{}

void QueryOfficialFileCustomListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["CustomList"];
	for (auto valueDataCustomList : allDataNode)
	{
		CustomList dataObject;
		if(!valueDataCustomList["Status"].isNull())
			dataObject.status = valueDataCustomList["Status"].asString();
		if(!valueDataCustomList["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataCustomList["CreateTime"].asString());
		if(!valueDataCustomList["StartAcceptTime"].isNull())
			dataObject.startAcceptTime = std::stol(valueDataCustomList["StartAcceptTime"].asString());
		if(!valueDataCustomList["EndAcceptTime"].isNull())
			dataObject.endAcceptTime = std::stol(valueDataCustomList["EndAcceptTime"].asString());
		if(!valueDataCustomList["ExpireTime"].isNull())
			dataObject.expireTime = std::stol(valueDataCustomList["ExpireTime"].asString());
		if(!valueDataCustomList["DownloadUrl"].isNull())
			dataObject.downloadUrl = valueDataCustomList["DownloadUrl"].asString();
		if(!valueDataCustomList["Remark"].isNull())
			dataObject.remark = valueDataCustomList["Remark"].asString();
		data_.push_back(dataObject);
	}
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());

}

int QueryOfficialFileCustomListResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryOfficialFileCustomListResult::getPageSize()const
{
	return pageSize_;
}

int QueryOfficialFileCustomListResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<QueryOfficialFileCustomListResult::CustomList> QueryOfficialFileCustomListResult::getData()const
{
	return data_;
}

int QueryOfficialFileCustomListResult::getTotalItemNum()const
{
	return totalItemNum_;
}

