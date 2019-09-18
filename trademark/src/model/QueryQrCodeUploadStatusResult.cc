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

#include <alibabacloud/trademark/model/QueryQrCodeUploadStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

QueryQrCodeUploadStatusResult::QueryQrCodeUploadStatusResult() :
	ServiceResult()
{}

QueryQrCodeUploadStatusResult::QueryQrCodeUploadStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryQrCodeUploadStatusResult::~QueryQrCodeUploadStatusResult()
{}

void QueryQrCodeUploadStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["OssKey"].isNull())
		ossKey_ = value["OssKey"].asString();
	if(!value["OssUrl"].isNull())
		ossUrl_ = value["OssUrl"].asString();
	if(!value["Status"].isNull())
		status_ = std::stoi(value["Status"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int QueryQrCodeUploadStatusResult::getStatus()const
{
	return status_;
}

std::string QueryQrCodeUploadStatusResult::getOssKey()const
{
	return ossKey_;
}

std::string QueryQrCodeUploadStatusResult::getOssUrl()const
{
	return ossUrl_;
}

bool QueryQrCodeUploadStatusResult::getSuccess()const
{
	return success_;
}

