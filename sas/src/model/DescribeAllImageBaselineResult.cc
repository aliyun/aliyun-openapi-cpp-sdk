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

#include <alibabacloud/sas/model/DescribeAllImageBaselineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeAllImageBaselineResult::DescribeAllImageBaselineResult() :
	ServiceResult()
{}

DescribeAllImageBaselineResult::DescribeAllImageBaselineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAllImageBaselineResult::~DescribeAllImageBaselineResult()
{}

void DescribeAllImageBaselineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto imageBaselinesNode = value["ImageBaselines"];
	auto allBaselineClassListNode = imageBaselinesNode["BaselineClassList"]["BaselineClass"];
	for (auto imageBaselinesNodeBaselineClassListBaselineClass : allBaselineClassListNode)
	{
		ImageBaselines::BaselineClass baselineClassObject;
		if(!imageBaselinesNodeBaselineClassListBaselineClass["ClassKey"].isNull())
			baselineClassObject.classKey = imageBaselinesNodeBaselineClassListBaselineClass["ClassKey"].asString();
		if(!imageBaselinesNodeBaselineClassListBaselineClass["Alias"].isNull())
			baselineClassObject.alias = imageBaselinesNodeBaselineClassListBaselineClass["Alias"].asString();
		auto allBaselineNameListNode = imageBaselinesNodeBaselineClassListBaselineClass["BaselineNameList"]["BaselineName"];
		for (auto imageBaselinesNodeBaselineClassListBaselineClassBaselineNameListBaselineName : allBaselineNameListNode)
		{
			ImageBaselines::BaselineClass::BaselineName baselineNameListObject;
			if(!imageBaselinesNodeBaselineClassListBaselineClassBaselineNameListBaselineName["NameKey"].isNull())
				baselineNameListObject.nameKey = imageBaselinesNodeBaselineClassListBaselineClassBaselineNameListBaselineName["NameKey"].asString();
			if(!imageBaselinesNodeBaselineClassListBaselineClassBaselineNameListBaselineName["ClassKey"].isNull())
				baselineNameListObject.classKey = imageBaselinesNodeBaselineClassListBaselineClassBaselineNameListBaselineName["ClassKey"].asString();
			if(!imageBaselinesNodeBaselineClassListBaselineClassBaselineNameListBaselineName["Alias"].isNull())
				baselineNameListObject.alias = imageBaselinesNodeBaselineClassListBaselineClassBaselineNameListBaselineName["Alias"].asString();
			auto allBaselineItemListNode = imageBaselinesNodeBaselineClassListBaselineClassBaselineNameListBaselineName["BaselineItemList"]["BaselineItem"];
			for (auto imageBaselinesNodeBaselineClassListBaselineClassBaselineNameListBaselineNameBaselineItemListBaselineItem : allBaselineItemListNode)
			{
				ImageBaselines::BaselineClass::BaselineName::BaselineItem baselineItemListObject;
				if(!imageBaselinesNodeBaselineClassListBaselineClassBaselineNameListBaselineNameBaselineItemListBaselineItem["NameKey"].isNull())
					baselineItemListObject.nameKey = imageBaselinesNodeBaselineClassListBaselineClassBaselineNameListBaselineNameBaselineItemListBaselineItem["NameKey"].asString();
				if(!imageBaselinesNodeBaselineClassListBaselineClassBaselineNameListBaselineNameBaselineItemListBaselineItem["ItemKey"].isNull())
					baselineItemListObject.itemKey = imageBaselinesNodeBaselineClassListBaselineClassBaselineNameListBaselineNameBaselineItemListBaselineItem["ItemKey"].asString();
				if(!imageBaselinesNodeBaselineClassListBaselineClassBaselineNameListBaselineNameBaselineItemListBaselineItem["ClassKey"].isNull())
					baselineItemListObject.classKey = imageBaselinesNodeBaselineClassListBaselineClassBaselineNameListBaselineNameBaselineItemListBaselineItem["ClassKey"].asString();
				if(!imageBaselinesNodeBaselineClassListBaselineClassBaselineNameListBaselineNameBaselineItemListBaselineItem["Alias"].isNull())
					baselineItemListObject.alias = imageBaselinesNodeBaselineClassListBaselineClassBaselineNameListBaselineNameBaselineItemListBaselineItem["Alias"].asString();
				baselineNameListObject.baselineItemList.push_back(baselineItemListObject);
			}
			baselineClassObject.baselineNameList.push_back(baselineNameListObject);
		}
		imageBaselines_.baselineClassList.push_back(baselineClassObject);
	}

}

DescribeAllImageBaselineResult::ImageBaselines DescribeAllImageBaselineResult::getImageBaselines()const
{
	return imageBaselines_;
}

