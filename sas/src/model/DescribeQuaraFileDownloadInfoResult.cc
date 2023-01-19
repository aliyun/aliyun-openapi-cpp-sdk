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

#include <alibabacloud/sas/model/DescribeQuaraFileDownloadInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeQuaraFileDownloadInfoResult::DescribeQuaraFileDownloadInfoResult() :
	ServiceResult()
{}

DescribeQuaraFileDownloadInfoResult::DescribeQuaraFileDownloadInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeQuaraFileDownloadInfoResult::~DescribeQuaraFileDownloadInfoResult()
{}

void DescribeQuaraFileDownloadInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Uuid"].isNull())
		uuid_ = value["Uuid"].asString();
	if(!value["QuaraFileId"].isNull())
		quaraFileId_ = std::stoi(value["QuaraFileId"].asString());
	if(!value["DownloadUrl"].isNull())
		downloadUrl_ = value["DownloadUrl"].asString();
	if(!value["Path"].isNull())
		path_ = value["Path"].asString();
	if(!value["Md5"].isNull())
		md5_ = value["Md5"].asString();
	if(!value["Tag"].isNull())
		tag_ = value["Tag"].asString();

}

std::string DescribeQuaraFileDownloadInfoResult::getPath()const
{
	return path_;
}

std::string DescribeQuaraFileDownloadInfoResult::getUuid()const
{
	return uuid_;
}

int DescribeQuaraFileDownloadInfoResult::getQuaraFileId()const
{
	return quaraFileId_;
}

std::string DescribeQuaraFileDownloadInfoResult::getTag()const
{
	return tag_;
}

std::string DescribeQuaraFileDownloadInfoResult::getDownloadUrl()const
{
	return downloadUrl_;
}

std::string DescribeQuaraFileDownloadInfoResult::getMd5()const
{
	return md5_;
}

