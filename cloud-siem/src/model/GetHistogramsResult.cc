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

#include <alibabacloud/cloud-siem/model/GetHistogramsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

GetHistogramsResult::GetHistogramsResult() :
	ServiceResult()
{}

GetHistogramsResult::GetHistogramsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetHistogramsResult::~GetHistogramsResult()
{}

void GetHistogramsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Server"].isNull())
		data_.server = dataNode["Server"].asString();
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allHistogramsNode = dataNode["Histograms"]["Histogram"];
	for (auto dataNodeHistogramsHistogram : allHistogramsNode)
	{
		Data::Histogram histogramObject;
		if(!dataNodeHistogramsHistogram["From"].isNull())
			histogramObject.from = std::stoi(dataNodeHistogramsHistogram["From"].asString());
		if(!dataNodeHistogramsHistogram["To"].isNull())
			histogramObject.to = std::stoi(dataNodeHistogramsHistogram["To"].asString());
		if(!dataNodeHistogramsHistogram["Count"].isNull())
			histogramObject.count = std::stol(dataNodeHistogramsHistogram["Count"].asString());
		if(!dataNodeHistogramsHistogram["CompletedOrNot"].isNull())
			histogramObject.completedOrNot = dataNodeHistogramsHistogram["CompletedOrNot"].asString() == "true";
		data_.histograms.push_back(histogramObject);
	}

}

GetHistogramsResult::Data GetHistogramsResult::getData()const
{
	return data_;
}

