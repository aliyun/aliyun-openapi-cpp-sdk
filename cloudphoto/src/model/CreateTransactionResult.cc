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
			if(!value["Bucket"].isNull())
				uploadObject.bucket = value["Bucket"].asString();
			if(!value["FileId"].isNull())
				uploadObject.fileId = value["FileId"].asString();
			if(!value["OssEndpoint"].isNull())
				uploadObject.ossEndpoint = value["OssEndpoint"].asString();
			if(!value["ObjectKey"].isNull())
				uploadObject.objectKey = value["ObjectKey"].asString();
			if(!value["SessionId"].isNull())
				uploadObject.sessionId = value["SessionId"].asString();
			if(!value["AccessKeyId"].isNull())
				uploadObject.accessKeyId = value["AccessKeyId"].asString();
			if(!value["AccessKeySecret"].isNull())
				uploadObject.accessKeySecret = value["AccessKeySecret"].asString();
			if(!value["StsToken"].isNull())
				uploadObject.stsToken = value["StsToken"].asString();
			transactionObject.upload.push_back(uploadObject);
		}
		transaction_.push_back(transactionObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Action"].isNull())
		action_ = value["Action"].asString();

}

std::string CreateTransactionResult::getAction()const
{
	return action_;
}

std::vector<CreateTransactionResult::Transaction> CreateTransactionResult::getTransaction()const
{
	return transaction_;
}

std::string CreateTransactionResult::getMessage()const
{
	return message_;
}

std::string CreateTransactionResult::getCode()const
{
	return code_;
}

