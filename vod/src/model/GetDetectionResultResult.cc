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

#include <alibabacloud/vod/model/GetDetectionResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetDetectionResultResult::GetDetectionResultResult() :
	ServiceResult()
{}

GetDetectionResultResult::GetDetectionResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDetectionResultResult::~GetDetectionResultResult()
{}

void GetDetectionResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDetectionResultListNode = value["DetectionResultList"]["DetectionResult"];
	for (auto valueDetectionResultListDetectionResult : allDetectionResultListNode)
	{
		DetectionResult detectionResultListObject;
		if(!valueDetectionResultListDetectionResult["Status"].isNull())
			detectionResultListObject.status = valueDetectionResultListDetectionResult["Status"].asString();
		if(!valueDetectionResultListDetectionResult["Platform"].isNull())
			detectionResultListObject.platform = valueDetectionResultListDetectionResult["Platform"].asString();
		if(!valueDetectionResultListDetectionResult["ContentType"].isNull())
			detectionResultListObject.contentType = valueDetectionResultListDetectionResult["ContentType"].asString();
		if(!valueDetectionResultListDetectionResult["CollectionTitle"].isNull())
			detectionResultListObject.collectionTitle = valueDetectionResultListDetectionResult["CollectionTitle"].asString();
		if(!valueDetectionResultListDetectionResult["CollectionUrl"].isNull())
			detectionResultListObject.collectionUrl = valueDetectionResultListDetectionResult["CollectionUrl"].asString();
		if(!valueDetectionResultListDetectionResult["CreateTime"].isNull())
			detectionResultListObject.createTime = valueDetectionResultListDetectionResult["CreateTime"].asString();
		if(!valueDetectionResultListDetectionResult["Uploader"].isNull())
			detectionResultListObject.uploader = valueDetectionResultListDetectionResult["Uploader"].asString();
		if(!valueDetectionResultListDetectionResult["ModifyTime"].isNull())
			detectionResultListObject.modifyTime = valueDetectionResultListDetectionResult["ModifyTime"].asString();
		detectionResultList_.push_back(detectionResultListObject);
	}

}

std::vector<GetDetectionResultResult::DetectionResult> GetDetectionResultResult::getDetectionResultList()const
{
	return detectionResultList_;
}

