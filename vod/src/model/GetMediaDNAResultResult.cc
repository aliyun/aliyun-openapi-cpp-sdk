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

#include <alibabacloud/vod/model/GetMediaDNAResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetMediaDNAResultResult::GetMediaDNAResultResult() :
	ServiceResult()
{}

GetMediaDNAResultResult::GetMediaDNAResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMediaDNAResultResult::~GetMediaDNAResultResult()
{}

void GetMediaDNAResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dNAResultNode = value["DNAResult"];
	auto allVideoDNANode = dNAResultNode["VideoDNA"]["VideoDNAItem"];
	for (auto dNAResultNodeVideoDNAVideoDNAItem : allVideoDNANode)
	{
		DNAResult::VideoDNAItem videoDNAItemObject;
		if(!dNAResultNodeVideoDNAVideoDNAItem["PrimaryKey"].isNull())
			videoDNAItemObject.primaryKey = dNAResultNodeVideoDNAVideoDNAItem["PrimaryKey"].asString();
		if(!dNAResultNodeVideoDNAVideoDNAItem["Similarity"].isNull())
			videoDNAItemObject.similarity = dNAResultNodeVideoDNAVideoDNAItem["Similarity"].asString();
		auto allDetailNode = dNAResultNodeVideoDNAVideoDNAItem["Detail"]["DetailItem"];
		for (auto dNAResultNodeVideoDNAVideoDNAItemDetailDetailItem : allDetailNode)
		{
			DNAResult::VideoDNAItem::DetailItem detailObject;
			auto inputNode = value["Input"];
			if(!inputNode["Duration"].isNull())
				detailObject.input.duration = inputNode["Duration"].asString();
			if(!inputNode["Start"].isNull())
				detailObject.input.start = inputNode["Start"].asString();
			auto duplicationNode = value["Duplication"];
			if(!duplicationNode["Duration"].isNull())
				detailObject.duplication.duration = duplicationNode["Duration"].asString();
			if(!duplicationNode["Start"].isNull())
				detailObject.duplication.start = duplicationNode["Start"].asString();
			videoDNAItemObject.detail.push_back(detailObject);
		}
		dNAResult_.videoDNA.push_back(videoDNAItemObject);
	}

}

GetMediaDNAResultResult::DNAResult GetMediaDNAResultResult::getDNAResult()const
{
	return dNAResult_;
}

