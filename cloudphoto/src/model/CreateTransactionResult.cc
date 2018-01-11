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

#include <alibabacloud/cloudphoto/model/CreateTransactionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

CreateTransactionResult::CreateTransactionResult() :
	ServiceResult()
{}

CreateTransactionResult::CreateTransactionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateTransactionResult::~CreateTransactionResult()
{}

void CreateTransactionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allTransaction = value["Transaction"];
	for (auto value : allTransaction)
	{
		Transaction transactionObject;
		auto allUpload = value["Upload"];
		for (auto value : allUpload)
		{
			Transaction::Upload uploadObject;
			uploadObject.bucket = value["Bucket"].asString();
			uploadObject.fileId = value["FileId"].asString();
			uploadObject.ossEndpoint = value["OssEndpoint"].asString();
			uploadObject.objectKey = value["ObjectKey"].asString();
			uploadObject.sessionId = value["SessionId"].asString();
			uploadObject.accessKeyId = value["AccessKeyId"].asString();
			uploadObject.accessKeySecret = value["AccessKeySecret"].asString();
			uploadObject.stsToken = value["StsToken"].asString();
			transactionObject.upload.push_back(uploadObject);
		}
		transaction_.push_back(transactionObject);
	}
	code_ = value["Code"].asString();
	message_ = value["Message"].asString();
	action_ = value["Action"].asString();

}

std::string CreateTransactionResult::getAction()const
{
	return action_;
}

void CreateTransactionResult::setAction(const std::string& action)
{
	action_ = action;
}

std::string CreateTransactionResult::getMessage()const
{
	return message_;
}

void CreateTransactionResult::setMessage(const std::string& message)
{
	message_ = message;
}

std::string CreateTransactionResult::getCode()const
{
	return code_;
}

void CreateTransactionResult::setCode(const std::string& code)
{
	code_ = code;
}

