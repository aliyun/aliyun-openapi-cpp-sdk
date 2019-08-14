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

#include <alibabacloud/kms/model/DecryptRequest.h>

using AlibabaCloud::Kms::Model::DecryptRequest;

DecryptRequest::DecryptRequest() :
	RpcServiceRequest("kms", "2016-01-20", "Decrypt")
{}

DecryptRequest::~DecryptRequest()
{}

std::string DecryptRequest::getEncryptionContext()const
{
	return encryptionContext_;
}

void DecryptRequest::setEncryptionContext(const std::string& encryptionContext)
{
	encryptionContext_ = encryptionContext;
	setCoreParameter("EncryptionContext", encryptionContext);
}

std::string DecryptRequest::getCiphertextBlob()const
{
	return ciphertextBlob_;
}

void DecryptRequest::setCiphertextBlob(const std::string& ciphertextBlob)
{
	ciphertextBlob_ = ciphertextBlob;
	setCoreParameter("CiphertextBlob", ciphertextBlob);
}

