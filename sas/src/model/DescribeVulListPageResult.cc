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

#include <alibabacloud/sas/model/DescribeVulListPageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeVulListPageResult::DescribeVulListPageResult() :
	ServiceResult()
{}

DescribeVulListPageResult::DescribeVulListPageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVulListPageResult::~DescribeVulListPageResult()
{}

void DescribeVulListPageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataList"];
	for (auto valueDatadataList : allDataNode)
	{
		DataList dataObject;
		if(!valueDatadataList["ReleaseTime"].isNull())
			dataObject.releaseTime = std::stol(valueDatadataList["ReleaseTime"].asString());
		if(!valueDatadataList["OtherId"].isNull())
			dataObject.otherId = valueDatadataList["OtherId"].asString();
		if(!valueDatadataList["IsSas"].isNull())
			dataObject.isSas = std::stoi(valueDatadataList["IsSas"].asString());
		if(!valueDatadataList["CveId"].isNull())
			dataObject.cveId = valueDatadataList["CveId"].asString();
		if(!valueDatadataList["Id"].isNull())
			dataObject.id = std::stol(valueDatadataList["Id"].asString());
		if(!valueDatadataList["IsAegis"].isNull())
			dataObject.isAegis = std::stoi(valueDatadataList["IsAegis"].asString());
		if(!valueDatadataList["Title"].isNull())
			dataObject.title = valueDatadataList["Title"].asString();
		if(!valueDatadataList["ExtAegis"].isNull())
			dataObject.extAegis = valueDatadataList["ExtAegis"].asString();
		data_.push_back(dataObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeVulListPageResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeVulListPageResult::DataList> DescribeVulListPageResult::getData()const
{
	return data_;
}

