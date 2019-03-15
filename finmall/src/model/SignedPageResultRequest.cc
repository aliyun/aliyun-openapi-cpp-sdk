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

#include <alibabacloud/finmall/model/SignedPageResultRequest.h>

using AlibabaCloud::Finmall::Model::SignedPageResultRequest;

SignedPageResultRequest::SignedPageResultRequest() :
	RpcServiceRequest("finmall", "2018-07-23", "SignedPageResult")
{}

SignedPageResultRequest::~SignedPageResultRequest()
{}

std::string SignedPageResultRequest::getDownloadUrl()const
{
	return downloadUrl_;
}

void SignedPageResultRequest::setDownloadUrl(const std::string& downloadUrl)
{
	downloadUrl_ = downloadUrl;
	setParameter("DownloadUrl", downloadUrl);
}

std::string SignedPageResultRequest::getDigest()const
{
	return digest_;
}

void SignedPageResultRequest::setDigest(const std::string& digest)
{
	digest_ = digest;
	setParameter("Digest", digest);
}

std::string SignedPageResultRequest::getViewUrl()const
{
	return viewUrl_;
}

void SignedPageResultRequest::setViewUrl(const std::string& viewUrl)
{
	viewUrl_ = viewUrl;
	setParameter("ViewUrl", viewUrl);
}

int SignedPageResultRequest::getResultCode()const
{
	return resultCode_;
}

void SignedPageResultRequest::setResultCode(int resultCode)
{
	resultCode_ = resultCode;
	setParameter("ResultCode", std::to_string(resultCode));
}

std::string SignedPageResultRequest::getTransactionId()const
{
	return transactionId_;
}

void SignedPageResultRequest::setTransactionId(const std::string& transactionId)
{
	transactionId_ = transactionId;
	setParameter("TransactionId", transactionId);
}

std::string SignedPageResultRequest::getResultDesc()const
{
	return resultDesc_;
}

void SignedPageResultRequest::setResultDesc(const std::string& resultDesc)
{
	resultDesc_ = resultDesc;
	setParameter("ResultDesc", resultDesc);
}

std::string SignedPageResultRequest::getTimestamp()const
{
	return timestamp_;
}

void SignedPageResultRequest::setTimestamp(const std::string& timestamp)
{
	timestamp_ = timestamp;
	setParameter("Timestamp", timestamp);
}

