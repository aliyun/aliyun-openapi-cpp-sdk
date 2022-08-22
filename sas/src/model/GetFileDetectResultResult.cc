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

#include <alibabacloud/sas/model/GetFileDetectResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetFileDetectResultResult::GetFileDetectResultResult() :
	ServiceResult()
{}

GetFileDetectResultResult::GetFileDetectResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFileDetectResultResult::~GetFileDetectResultResult()
{}

void GetFileDetectResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultListNode = value["ResultList"]["Result"];
	for (auto valueResultListResult : allResultListNode)
	{
		Result resultListObject;
		if(!valueResultListResult["HashKey"].isNull())
			resultListObject.hashKey = valueResultListResult["HashKey"].asString();
		if(!valueResultListResult["Result"].isNull())
			resultListObject.result = std::stoi(valueResultListResult["Result"].asString());
		if(!valueResultListResult["Score"].isNull())
			resultListObject.score = std::stoi(valueResultListResult["Score"].asString());
		if(!valueResultListResult["VirusType"].isNull())
			resultListObject.virusType = valueResultListResult["VirusType"].asString();
		if(!valueResultListResult["Code"].isNull())
			resultListObject.code = valueResultListResult["Code"].asString();
		if(!valueResultListResult["Message"].isNull())
			resultListObject.message = valueResultListResult["Message"].asString();
		if(!valueResultListResult["Ext"].isNull())
			resultListObject.ext = valueResultListResult["Ext"].asString();
		resultList_.push_back(resultListObject);
	}

}

std::vector<GetFileDetectResultResult::Result> GetFileDetectResultResult::getResultList()const
{
	return resultList_;
}

