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

#include <alibabacloud/imm/model/DetectImageLabelsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

DetectImageLabelsResult::DetectImageLabelsResult() :
	ServiceResult()
{}

DetectImageLabelsResult::DetectImageLabelsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetectImageLabelsResult::~DetectImageLabelsResult()
{}

void DetectImageLabelsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLabelsNode = value["Labels"]["LabelsItem"];
	for (auto valueLabelsLabelsItem : allLabelsNode)
	{
		LabelsItem labelsObject;
		if(!valueLabelsLabelsItem["Language"].isNull())
			labelsObject.language = valueLabelsLabelsItem["Language"].asString();
		if(!valueLabelsLabelsItem["LabelName"].isNull())
			labelsObject.labelName = valueLabelsLabelsItem["LabelName"].asString();
		if(!valueLabelsLabelsItem["LabelLevel"].isNull())
			labelsObject.labelLevel = std::stol(valueLabelsLabelsItem["LabelLevel"].asString());
		if(!valueLabelsLabelsItem["LabelConfidence"].isNull())
			labelsObject.labelConfidence = std::stof(valueLabelsLabelsItem["LabelConfidence"].asString());
		if(!valueLabelsLabelsItem["ParentLabelName"].isNull())
			labelsObject.parentLabelName = valueLabelsLabelsItem["ParentLabelName"].asString();
		if(!valueLabelsLabelsItem["CentricScore"].isNull())
			labelsObject.centricScore = std::stof(valueLabelsLabelsItem["CentricScore"].asString());
		labels_.push_back(labelsObject);
	}

}

std::vector<DetectImageLabelsResult::LabelsItem> DetectImageLabelsResult::getLabels()const
{
	return labels_;
}

