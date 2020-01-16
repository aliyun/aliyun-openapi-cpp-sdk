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

#include <alibabacloud/cloudauth/model/DescribeFaceUsageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

DescribeFaceUsageResult::DescribeFaceUsageResult() :
	ServiceResult()
{}

DescribeFaceUsageResult::DescribeFaceUsageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFaceUsageResult::~DescribeFaceUsageResult()
{}

void DescribeFaceUsageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFaceUsageListNode = value["FaceUsageList"]["FaceUsage"];
	for (auto valueFaceUsageListFaceUsage : allFaceUsageListNode)
	{
		FaceUsage faceUsageListObject;
		if(!valueFaceUsageListFaceUsage["Date"].isNull())
			faceUsageListObject.date = valueFaceUsageListFaceUsage["Date"].asString();
		if(!valueFaceUsageListFaceUsage["TotalCount"].isNull())
			faceUsageListObject.totalCount = std::stol(valueFaceUsageListFaceUsage["TotalCount"].asString());
		faceUsageList_.push_back(faceUsageListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeFaceUsageResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeFaceUsageResult::FaceUsage> DescribeFaceUsageResult::getFaceUsageList()const
{
	return faceUsageList_;
}

