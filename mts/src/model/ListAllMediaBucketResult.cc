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

#include <alibabacloud/mts/model/ListAllMediaBucketResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

ListAllMediaBucketResult::ListAllMediaBucketResult() :
	ServiceResult()
{}

ListAllMediaBucketResult::ListAllMediaBucketResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAllMediaBucketResult::~ListAllMediaBucketResult()
{}

void ListAllMediaBucketResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMediaBucketListNode = value["MediaBucketList"]["MediaBucket"];
	for (auto valueMediaBucketListMediaBucket : allMediaBucketListNode)
	{
		MediaBucket mediaBucketListObject;
		if(!valueMediaBucketListMediaBucket["Type"].isNull())
			mediaBucketListObject.type = valueMediaBucketListMediaBucket["Type"].asString();
		if(!valueMediaBucketListMediaBucket["Bucket"].isNull())
			mediaBucketListObject.bucket = valueMediaBucketListMediaBucket["Bucket"].asString();
		if(!valueMediaBucketListMediaBucket["Referer"].isNull())
			mediaBucketListObject.referer = valueMediaBucketListMediaBucket["Referer"].asString();
		mediaBucketList_.push_back(mediaBucketListObject);
	}
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();

}

std::string ListAllMediaBucketResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<ListAllMediaBucketResult::MediaBucket> ListAllMediaBucketResult::getMediaBucketList()const
{
	return mediaBucketList_;
}

