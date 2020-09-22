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

#include <alibabacloud/vs/model/CreateStreamSnapshotResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

CreateStreamSnapshotResult::CreateStreamSnapshotResult() :
	ServiceResult()
{}

CreateStreamSnapshotResult::CreateStreamSnapshotResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateStreamSnapshotResult::~CreateStreamSnapshotResult()
{}

void CreateStreamSnapshotResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["Url"].isNull())
		url_ = value["Url"].asString();
	if(!value["OssBucket"].isNull())
		ossBucket_ = value["OssBucket"].asString();
	if(!value["OssObject"].isNull())
		ossObject_ = value["OssObject"].asString();
	if(!value["OssEndpoint"].isNull())
		ossEndpoint_ = value["OssEndpoint"].asString();
	if(!value["Height"].isNull())
		height_ = std::stol(value["Height"].asString());
	if(!value["Width"].isNull())
		width_ = std::stol(value["Width"].asString());
	if(!value["Format"].isNull())
		format_ = value["Format"].asString();
	if(!value["Timestamp"].isNull())
		timestamp_ = std::stol(value["Timestamp"].asString());

}

std::string CreateStreamSnapshotResult::getFormat()const
{
	return format_;
}

std::string CreateStreamSnapshotResult::getOssEndpoint()const
{
	return ossEndpoint_;
}

std::string CreateStreamSnapshotResult::getOssBucket()const
{
	return ossBucket_;
}

std::string CreateStreamSnapshotResult::getOssObject()const
{
	return ossObject_;
}

long CreateStreamSnapshotResult::getHeight()const
{
	return height_;
}

std::string CreateStreamSnapshotResult::getId()const
{
	return id_;
}

long CreateStreamSnapshotResult::getWidth()const
{
	return width_;
}

long CreateStreamSnapshotResult::getTimestamp()const
{
	return timestamp_;
}

std::string CreateStreamSnapshotResult::getUrl()const
{
	return url_;
}

