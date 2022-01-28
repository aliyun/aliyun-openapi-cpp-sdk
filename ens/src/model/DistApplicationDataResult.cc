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

#include <alibabacloud/ens/model/DistApplicationDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DistApplicationDataResult::DistApplicationDataResult() :
	ServiceResult()
{}

DistApplicationDataResult::DistApplicationDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DistApplicationDataResult::~DistApplicationDataResult()
{}

void DistApplicationDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDistResultsNode = value["DistResults"]["DistResult"];
	for (auto valueDistResultsDistResult : allDistResultsNode)
	{
		DistResult distResultsObject;
		if(!valueDistResultsDistResult["ResultDescrip"].isNull())
			distResultsObject.resultDescrip = valueDistResultsDistResult["ResultDescrip"].asString();
		if(!valueDistResultsDistResult["Version"].isNull())
			distResultsObject.version = valueDistResultsDistResult["Version"].asString();
		if(!valueDistResultsDistResult["ResultCode"].isNull())
			distResultsObject.resultCode = std::stoi(valueDistResultsDistResult["ResultCode"].asString());
		if(!valueDistResultsDistResult["Name"].isNull())
			distResultsObject.name = valueDistResultsDistResult["Name"].asString();
		distResults_.push_back(distResultsObject);
	}
	auto allDistInstanceIds = value["DistInstanceIds"]["DistInstanceId"];
	for (const auto &item : allDistInstanceIds)
		distInstanceIds_.push_back(item.asString());
	if(!value["DistInstanceTotalCount"].isNull())
		distInstanceTotalCount_ = std::stoi(value["DistInstanceTotalCount"].asString());

}

std::vector<std::string> DistApplicationDataResult::getDistInstanceIds()const
{
	return distInstanceIds_;
}

int DistApplicationDataResult::getDistInstanceTotalCount()const
{
	return distInstanceTotalCount_;
}

std::vector<DistApplicationDataResult::DistResult> DistApplicationDataResult::getDistResults()const
{
	return distResults_;
}

