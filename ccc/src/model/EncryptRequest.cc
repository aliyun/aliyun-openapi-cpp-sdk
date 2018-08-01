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

#include <alibabacloud/ccc/model/EncryptRequest.h>

using AlibabaCloud::CCC::Model::EncryptRequest;

EncryptRequest::EncryptRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "Encrypt")
{}

EncryptRequest::~EncryptRequest()
{}

std::string EncryptRequest::getPublicKey()const
{
	return publicKey_;
}

void EncryptRequest::setPublicKey(const std::string& publicKey)
{
	publicKey_ = publicKey;
	setParameter("PublicKey", publicKey);
}

std::vector<std::string> EncryptRequest::getPlainText()const
{
	return plainText_;
}

void EncryptRequest::setPlainText(const std::vector<std::string>& plainText)
{
	plainText_ = plainText;
	for(int i = 0; i!= plainText.size(); i++)
		setParameter("PlainText."+ std::to_string(i), plainText.at(i));
}

std::string EncryptRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void EncryptRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

