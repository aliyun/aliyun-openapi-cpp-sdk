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

#include <alibabacloud/dbfs/model/GetSnapshotLinkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DBFS;
using namespace AlibabaCloud::DBFS::Model;

GetSnapshotLinkResult::GetSnapshotLinkResult() :
	ServiceResult()
{}

GetSnapshotLinkResult::GetSnapshotLinkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSnapshotLinkResult::~GetSnapshotLinkResult()
{}

void GetSnapshotLinkResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stol(dataNode["TotalSize"].asString());
	if(!dataNode["SourceSize"].isNull())
		data_.sourceSize = std::stoi(dataNode["SourceSize"].asString());
	if(!dataNode["FsId"].isNull())
		data_.fsId = dataNode["FsId"].asString();
	if(!dataNode["SnapshotCount"].isNull())
		data_.snapshotCount = std::stoi(dataNode["SnapshotCount"].asString());
	if(!dataNode["FsName"].isNull())
		data_.fsName = dataNode["FsName"].asString();
	if(!dataNode["LinkId"].isNull())
		data_.linkId = dataNode["LinkId"].asString();
	if(!dataNode["Category"].isNull())
		data_.category = dataNode["Category"].asString();
	auto allEcsListNode = dataNode["EcsList"]["EcsListItem"];
	for (auto dataNodeEcsListEcsListItem : allEcsListNode)
	{
		Data::EcsListItem ecsListItemObject;
		if(!dataNodeEcsListEcsListItem["EcsId"].isNull())
			ecsListItemObject.ecsId = dataNodeEcsListEcsListItem["EcsId"].asString();
		data_.ecsList.push_back(ecsListItemObject);
	}

}

GetSnapshotLinkResult::Data GetSnapshotLinkResult::getData()const
{
	return data_;
}

