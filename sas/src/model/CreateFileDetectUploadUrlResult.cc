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

#include <alibabacloud/sas/model/CreateFileDetectUploadUrlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

CreateFileDetectUploadUrlResult::CreateFileDetectUploadUrlResult() :
	ServiceResult()
{}

CreateFileDetectUploadUrlResult::CreateFileDetectUploadUrlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateFileDetectUploadUrlResult::~CreateFileDetectUploadUrlResult()
{}

void CreateFileDetectUploadUrlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUploadUrlListNode = value["UploadUrlList"]["UploadUrList"];
	for (auto valueUploadUrlListUploadUrList : allUploadUrlListNode)
	{
		UploadUrList uploadUrlListObject;
		if(!valueUploadUrlListUploadUrList["PublicUrl"].isNull())
			uploadUrlListObject.publicUrl = valueUploadUrlListUploadUrList["PublicUrl"].asString();
		if(!valueUploadUrlListUploadUrList["InternalUrl"].isNull())
			uploadUrlListObject.internalUrl = valueUploadUrlListUploadUrList["InternalUrl"].asString();
		if(!valueUploadUrlListUploadUrList["Expire"].isNull())
			uploadUrlListObject.expire = valueUploadUrlListUploadUrList["Expire"].asString();
		if(!valueUploadUrlListUploadUrList["FileExist"].isNull())
			uploadUrlListObject.fileExist = valueUploadUrlListUploadUrList["FileExist"].asString() == "true";
		if(!valueUploadUrlListUploadUrList["HashKey"].isNull())
			uploadUrlListObject.hashKey = valueUploadUrlListUploadUrList["HashKey"].asString();
		if(!valueUploadUrlListUploadUrList["Code"].isNull())
			uploadUrlListObject.code = valueUploadUrlListUploadUrList["Code"].asString();
		if(!valueUploadUrlListUploadUrList["Message"].isNull())
			uploadUrlListObject.message = valueUploadUrlListUploadUrList["Message"].asString();
		auto contextNode = value["Context"];
		if(!contextNode["AccessId"].isNull())
			uploadUrlListObject.context.accessId = contextNode["AccessId"].asString();
		if(!contextNode["Policy"].isNull())
			uploadUrlListObject.context.policy = contextNode["Policy"].asString();
		if(!contextNode["Signature"].isNull())
			uploadUrlListObject.context.signature = contextNode["Signature"].asString();
		if(!contextNode["OssKey"].isNull())
			uploadUrlListObject.context.ossKey = contextNode["OssKey"].asString();
		uploadUrlList_.push_back(uploadUrlListObject);
	}

}

std::vector<CreateFileDetectUploadUrlResult::UploadUrList> CreateFileDetectUploadUrlResult::getUploadUrlList()const
{
	return uploadUrlList_;
}

