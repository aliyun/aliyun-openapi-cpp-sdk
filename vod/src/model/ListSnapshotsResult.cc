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

#include <alibabacloud/vod/model/ListSnapshotsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListSnapshotsResult::ListSnapshotsResult() :
	ServiceResult()
{}

ListSnapshotsResult::ListSnapshotsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSnapshotsResult::~ListSnapshotsResult()
{}

void ListSnapshotsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto mediaSnapshotNode = value["MediaSnapshot"];
	if(!mediaSnapshotNode["Total"].isNull())
		mediaSnapshot_.total = std::stol(mediaSnapshotNode["Total"].asString());
	if(!mediaSnapshotNode["Regular"].isNull())
		mediaSnapshot_.regular = mediaSnapshotNode["Regular"].asString();
	if(!mediaSnapshotNode["CreationTime"].isNull())
		mediaSnapshot_.creationTime = mediaSnapshotNode["CreationTime"].asString();
	if(!mediaSnapshotNode["JobId"].isNull())
		mediaSnapshot_.jobId = mediaSnapshotNode["JobId"].asString();
	auto allSnapshots = value["Snapshots"]["Snapshot"];
	for (auto value : allSnapshots)
	{
		MediaSnapshot::Snapshot snapshotObject;
		if(!value["Index"].isNull())
			snapshotObject.index = std::stol(value["Index"].asString());
		if(!value["Url"].isNull())
			snapshotObject.url = value["Url"].asString();
		mediaSnapshot_.snapshots.push_back(snapshotObject);
	}

}

ListSnapshotsResult::MediaSnapshot ListSnapshotsResult::getMediaSnapshot()const
{
	return mediaSnapshot_;
}

