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

#include <alibabacloud/emr/model/GetLogHistogramResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetLogHistogramResult::GetLogHistogramResult() :
	ServiceResult()
{}

GetLogHistogramResult::GetLogHistogramResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLogHistogramResult::~GetLogHistogramResult()
{}

void GetLogHistogramResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allSlsLogHistogramList = value["SlsLogHistogramList"]["SlsLogHistogram"];
	for (auto value : allSlsLogHistogramList)
	{
		SlsLogHistogram slsLogHistogramListObject;
		if(!value["FromTime"].isNull())
			slsLogHistogramListObject.fromTime = std::stoi(value["FromTime"].asString());
		if(!value["ToTime"].isNull())
			slsLogHistogramListObject.toTime = std::stoi(value["ToTime"].asString());
		if(!value["Count"].isNull())
			slsLogHistogramListObject.count = std::stol(value["Count"].asString());
		if(!value["Completed"].isNull())
			slsLogHistogramListObject.completed = value["Completed"].asString() == "true";
		slsLogHistogramList_.push_back(slsLogHistogramListObject);
	}
	if(!value["Completed"].isNull())
		completed_ = value["Completed"].asString() == "true";
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long GetLogHistogramResult::getTotalCount()const
{
	return totalCount_;
}

bool GetLogHistogramResult::getCompleted()const
{
	return completed_;
}

std::vector<GetLogHistogramResult::SlsLogHistogram> GetLogHistogramResult::getSlsLogHistogramList()const
{
	return slsLogHistogramList_;
}

