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

#include <alibabacloud/cloudauth/model/InitDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

InitDeviceResult::InitDeviceResult() :
	ServiceResult()
{}

InitDeviceResult::InitDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

InitDeviceResult::~InitDeviceResult()
{}

void InitDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultObjectNode = value["ResultObject"];
	if(!resultObjectNode["CertifyId"].isNull())
		resultObject_.certifyId = resultObjectNode["CertifyId"].asString();
	if(!resultObjectNode["Protocol"].isNull())
		resultObject_.protocol = resultObjectNode["Protocol"].asString();
	if(!resultObjectNode["ExtParams"].isNull())
		resultObject_.extParams = resultObjectNode["ExtParams"].asString();
	if(!resultObjectNode["RetCode"].isNull())
		resultObject_.retCode = resultObjectNode["RetCode"].asString();
	if(!resultObjectNode["RetCodeSub"].isNull())
		resultObject_.retCodeSub = resultObjectNode["RetCodeSub"].asString();
	if(!resultObjectNode["RetMessageSub"].isNull())
		resultObject_.retMessageSub = resultObjectNode["RetMessageSub"].asString();
	if(!resultObjectNode["Message"].isNull())
		resultObject_.message = resultObjectNode["Message"].asString();
	if(!resultObjectNode["OssEndPoint"].isNull())
		resultObject_.ossEndPoint = resultObjectNode["OssEndPoint"].asString();
	if(!resultObjectNode["AccessKeyId"].isNull())
		resultObject_.accessKeyId = resultObjectNode["AccessKeyId"].asString();
	if(!resultObjectNode["AccessKeySecret"].isNull())
		resultObject_.accessKeySecret = resultObjectNode["AccessKeySecret"].asString();
	if(!resultObjectNode["SecurityToken"].isNull())
		resultObject_.securityToken = resultObjectNode["SecurityToken"].asString();
	if(!resultObjectNode["BucketName"].isNull())
		resultObject_.bucketName = resultObjectNode["BucketName"].asString();
	if(!resultObjectNode["FileNamePrefix"].isNull())
		resultObject_.fileNamePrefix = resultObjectNode["FileNamePrefix"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

InitDeviceResult::ResultObject InitDeviceResult::getResultObject()const
{
	return resultObject_;
}

std::string InitDeviceResult::getMessage()const
{
	return message_;
}

std::string InitDeviceResult::getCode()const
{
	return code_;
}

