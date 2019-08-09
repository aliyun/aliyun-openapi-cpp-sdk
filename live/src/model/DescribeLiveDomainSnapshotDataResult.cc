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

#include <alibabacloud/live/model/DescribeLiveDomainSnapshotDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveDomainSnapshotDataResult::DescribeLiveDomainSnapshotDataResult() :
	ServiceResult()
{}

DescribeLiveDomainSnapshotDataResult::DescribeLiveDomainSnapshotDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveDomainSnapshotDataResult::~DescribeLiveDomainSnapshotDataResult()
{}

void DescribeLiveDomainSnapshotDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allSnapshotDataInfos = value["SnapshotDataInfos"]["SnapshotDataInfo"];
	for (auto value : allSnapshotDataInfos)
	{
		SnapshotDataInfo snapshotDataInfosObject;
		if(!value["Date"].isNull())
			snapshotDataInfosObject.date = value["Date"].asString();
		if(!value["Total"].isNull())
			snapshotDataInfosObject.total = std::stoi(value["Total"].asString());
		snapshotDataInfos_.push_back(snapshotDataInfosObject);
	}

}

std::vector<DescribeLiveDomainSnapshotDataResult::SnapshotDataInfo> DescribeLiveDomainSnapshotDataResult::getSnapshotDataInfos()const
{
	return snapshotDataInfos_;
}

