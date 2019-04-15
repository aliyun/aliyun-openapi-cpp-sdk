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

#include <alibabacloud/imm/model/CompareFaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

CompareFaceResult::CompareFaceResult() :
	ServiceResult()
{}

CompareFaceResult::CompareFaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CompareFaceResult::~CompareFaceResult()
{}

void CompareFaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allCompareResult = value["CompareResult"]["CompareResultItem"];
	for (auto value : allCompareResult)
	{
		CompareResultItem compareResultObject;
		if(!value["Similarity"].isNull())
			compareResultObject.similarity = std::stof(value["Similarity"].asString());
		auto faceANode = value["FaceA"];
		if(!faceANode["ImageUri"].isNull())
			compareResultObject.faceA.imageUri = faceANode["ImageUri"].asString();
			auto allAxis = faceANode["Axis"]["Axis"];
			for (auto value : allAxis)
				compareResultObject.faceA.axis.push_back(value.asString());
		auto faceBNode = value["FaceB"];
		if(!faceBNode["ImageUri"].isNull())
			compareResultObject.faceB.imageUri = faceBNode["ImageUri"].asString();
			auto allAxis1 = faceBNode["Axis"]["Axis"];
			for (auto value : allAxis1)
				compareResultObject.faceB.axis1.push_back(value.asString());
		compareResult_.push_back(compareResultObject);
	}

}

std::vector<CompareFaceResult::CompareResultItem> CompareFaceResult::getCompareResult()const
{
	return compareResult_;
}

