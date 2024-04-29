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

#include <alibabacloud/live/model/DescribeLiveSnapshotNotifyConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveSnapshotNotifyConfigResult::DescribeLiveSnapshotNotifyConfigResult() :
	ServiceResult()
{}

DescribeLiveSnapshotNotifyConfigResult::DescribeLiveSnapshotNotifyConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveSnapshotNotifyConfigResult::~DescribeLiveSnapshotNotifyConfigResult()
{}

void DescribeLiveSnapshotNotifyConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["NotifyAuthKey"].isNull())
		notifyAuthKey_ = value["NotifyAuthKey"].asString();
	if(!value["NotifyReqAuth"].isNull())
		notifyReqAuth_ = value["NotifyReqAuth"].asString();
	if(!value["NotifyUrl"].isNull())
		notifyUrl_ = value["NotifyUrl"].asString();

}

std::string DescribeLiveSnapshotNotifyConfigResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeLiveSnapshotNotifyConfigResult::getNotifyUrl()const
{
	return notifyUrl_;
}

std::string DescribeLiveSnapshotNotifyConfigResult::getNotifyReqAuth()const
{
	return notifyReqAuth_;
}

std::string DescribeLiveSnapshotNotifyConfigResult::getNotifyAuthKey()const
{
	return notifyAuthKey_;
}

