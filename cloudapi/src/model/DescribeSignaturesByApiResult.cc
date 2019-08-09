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

#include <alibabacloud/cloudapi/model/DescribeSignaturesByApiResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeSignaturesByApiResult::DescribeSignaturesByApiResult() :
	ServiceResult()
{}

DescribeSignaturesByApiResult::DescribeSignaturesByApiResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSignaturesByApiResult::~DescribeSignaturesByApiResult()
{}

void DescribeSignaturesByApiResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allSignatures = value["Signatures"]["SignatureItem"];
	for (auto value : allSignatures)
	{
		SignatureItem signaturesObject;
		if(!value["SignatureId"].isNull())
			signaturesObject.signatureId = value["SignatureId"].asString();
		if(!value["SignatureName"].isNull())
			signaturesObject.signatureName = value["SignatureName"].asString();
		if(!value["BoundTime"].isNull())
			signaturesObject.boundTime = value["BoundTime"].asString();
		signatures_.push_back(signaturesObject);
	}

}

std::vector<DescribeSignaturesByApiResult::SignatureItem> DescribeSignaturesByApiResult::getSignatures()const
{
	return signatures_;
}

